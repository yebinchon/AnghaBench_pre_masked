
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct iser_page_vec {int dummy; } ;
struct iser_device {int cqs_used; scalar_t__* cq_active_qps; int pd; int * rx_cq; int * tx_cq; int ib_device; } ;
struct iser_conn {int login_buf; int login_req_buf; int login_resp_buf; TYPE_3__* cma_id; int * fmr_pool; int qp; TYPE_1__* page_vec; void* login_resp_dma; void* login_req_dma; struct iser_device* device; } ;
struct TYPE_6__ {int max_send_sge; int max_recv_sge; int max_recv_wr; int max_send_wr; } ;
struct ib_qp_init_attr {int qp_type; int sq_sig_type; TYPE_2__ cap; int recv_cq; int send_cq; void* qp_context; int event_handler; } ;
struct ib_fmr_pool_param {int max_pages_per_fmr; int pool_size; int dirty_watermark; int access; int * flush_function; scalar_t__ cache; int page_shift; } ;
struct TYPE_8__ {int connlist_mutex; } ;
struct TYPE_7__ {int qp; } ;
struct TYPE_5__ {int * pages; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_16 ;
 int * FUNC_3 (int ,struct ib_fmr_pool_param*) ;
 void* FUNC_4 (int ,void*,int,int ) ;
 int FUNC_5 (int ,void*) ;
 TYPE_4__ VAR_17 ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,...) ;
 int VAR_18 ;
 int FUNC_8 (char*) ;
 void* FUNC_9 (int,int ) ;
 int FUNC_10 (struct ib_qp_init_attr*,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_3__*,int ,struct ib_qp_init_attr*) ;

__attribute__((used)) static int FUNC_14(struct iser_conn *VAR_19)
{
 struct iser_device *VAR_20;
 struct ib_qp_init_attr VAR_21;
 int VAR_22, VAR_23, VAR_24 = -VAR_2;
 struct ib_fmr_pool_param VAR_25;
 int VAR_26, VAR_27 = 0;

 FUNC_0(VAR_19->device == ((void*)0));

 VAR_20 = VAR_19->device;

 VAR_19->login_buf = FUNC_9(VAR_10 +
     VAR_15, VAR_4);
 if (!VAR_19->login_buf)
  goto out_err;

 VAR_19->login_req_buf = VAR_19->login_buf;
 VAR_19->login_resp_buf = VAR_19->login_buf + VAR_10;

 VAR_19->login_req_dma = FUNC_4(VAR_19->device->ib_device,
    (void *)VAR_19->login_req_buf,
    VAR_10, VAR_1);

 VAR_19->login_resp_dma = FUNC_4(VAR_19->device->ib_device,
    (void *)VAR_19->login_resp_buf,
    VAR_15, VAR_0);

 VAR_22 = FUNC_5(VAR_20->ib_device, VAR_19->login_req_dma);
 VAR_23 = FUNC_5(VAR_20->ib_device, VAR_19->login_resp_dma);

 if (VAR_22 || VAR_23) {
  if (VAR_22)
   VAR_19->login_req_dma = 0;
  if (VAR_23)
   VAR_19->login_resp_dma = 0;
  goto out_err;
 }

 VAR_19->page_vec = FUNC_9(sizeof(struct iser_page_vec) +
        (sizeof(u64) * (VAR_12 +1)),
        VAR_4);
 if (!VAR_19->page_vec) {
  goto out_err;
 }
 VAR_19->page_vec->pages = (u64 *) (VAR_19->page_vec + 1);

 VAR_25.page_shift = VAR_16;


 VAR_25.max_pages_per_fmr = VAR_12 + 1;


 VAR_25.pool_size = VAR_11 * 2;
 VAR_25.dirty_watermark = VAR_11;
 VAR_25.cache = 0;
 VAR_25.flush_function = ((void*)0);
 VAR_25.access = (VAR_5 |
        VAR_7 |
        VAR_6);

 VAR_19->fmr_pool = FUNC_3(VAR_20->pd, &VAR_25);
 VAR_24 = FUNC_2(VAR_19->fmr_pool);
 if (FUNC_1(VAR_19->fmr_pool) && VAR_24 != -VAR_3) {
  VAR_19->fmr_pool = ((void*)0);
  goto out_err;
 } else if (VAR_24 == -VAR_3) {
  VAR_19->fmr_pool = ((void*)0);
  FUNC_8("FMRs are not supported, using unaligned mode\n");
  VAR_24 = 0;
 }

 FUNC_10(&VAR_21, 0, sizeof VAR_21);

 FUNC_11(&VAR_17.connlist_mutex);

 for (VAR_26 = 0; VAR_26 < VAR_20->cqs_used; VAR_26++)
  if (VAR_20->cq_active_qps[VAR_26] <
      VAR_20->cq_active_qps[VAR_27])
   VAR_27 = VAR_26;
 VAR_20->cq_active_qps[VAR_27]++;
 FUNC_12(&VAR_17.connlist_mutex);
 FUNC_7("cq index %d used for ib_conn %p\n", VAR_27, VAR_19);

 VAR_21.event_handler = VAR_18;
 VAR_21.qp_context = (void *)VAR_19;
 VAR_21.send_cq = VAR_20->tx_cq[VAR_27];
 VAR_21.recv_cq = VAR_20->rx_cq[VAR_27];
 VAR_21.cap.max_send_wr = VAR_14;
 VAR_21.cap.max_recv_wr = VAR_13;
 VAR_21.cap.max_send_sge = 2;
 VAR_21.cap.max_recv_sge = 1;
 VAR_21.sq_sig_type = VAR_9;
 VAR_21.qp_type = VAR_8;

 VAR_24 = FUNC_13(VAR_19->cma_id, VAR_20->pd, &VAR_21);
 if (VAR_24)
  goto out_err;

 VAR_19->qp = VAR_19->cma_id->qp;
 FUNC_7("setting conn %p cma_id %p: fmr_pool %p qp %p\n",
    VAR_19, VAR_19->cma_id,
    VAR_19->fmr_pool, VAR_19->cma_id->qp);
 return VAR_24;

out_err:
 FUNC_6("unable to alloc mem or create resource, err %d\n", VAR_24);
 return VAR_24;
}
