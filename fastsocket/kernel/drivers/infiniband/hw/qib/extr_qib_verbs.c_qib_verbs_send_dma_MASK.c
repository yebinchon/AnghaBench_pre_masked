
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int sg_count; int flags; scalar_t__ addr; int callback; } ;
struct qib_verbs_txreq {scalar_t__ dwords; size_t hdr_inx; int hdr_dwords; TYPE_3__ txreq; struct qib_pio_header* align_buf; int * mr; int wqe; struct qib_qp* qp; struct qib_sge_state* ss; } ;
struct qib_sge_state {int dummy; } ;
struct TYPE_4__ {int device; } ;
struct qib_qp {int * s_rdma_mr; int s_wqe; int refcount; int s_srate; struct qib_verbs_txreq* s_tx; int port_num; TYPE_1__ ibqp; } ;
struct qib_pportdata {scalar_t__ sdma_descq_cnt; } ;
struct qib_pio_header {int hdr; void** pbc; } ;
struct qib_ibport {int n_unaligned; } ;
struct qib_ibdev {scalar_t__ pio_hdrs_phys; struct qib_pio_header* pio_hdrs; } ;
struct qib_ib_header {int * lrh; } ;
struct qib_devdata {scalar_t__ (* f_setpbc_control ) (struct qib_pportdata*,scalar_t__,int ,int) ;int flags; scalar_t__ piosize2kmax_dwords; TYPE_2__* pcidev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qib_verbs_txreq*) ;
 int FUNC_1 (struct qib_verbs_txreq*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (scalar_t__) ;
 struct qib_devdata* FUNC_5 (struct qib_ibdev*) ;
 scalar_t__ FUNC_6 (int *,struct qib_pio_header*,int,int ) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;
 struct qib_verbs_txreq* FUNC_8 (struct qib_ibdev*,struct qib_qp*) ;
 int FUNC_9 (struct qib_pio_header*) ;
 struct qib_pio_header* FUNC_10 (int,int ) ;
 int FUNC_11 (int *,struct qib_ib_header*,scalar_t__) ;
 struct qib_pportdata* FUNC_12 (struct qib_ibport*) ;
 int FUNC_13 (scalar_t__*,struct qib_sge_state*,scalar_t__) ;
 scalar_t__ FUNC_14 (struct qib_sge_state*,scalar_t__) ;
 int FUNC_15 (struct qib_verbs_txreq*) ;
 int FUNC_16 (struct qib_pportdata*,struct qib_sge_state*,scalar_t__,struct qib_verbs_txreq*) ;
 int VAR_8 ;
 scalar_t__ FUNC_17 (struct qib_pportdata*,scalar_t__,int ,int) ;
 struct qib_ibdev* FUNC_18 (int ) ;
 struct qib_ibport* FUNC_19 (int ,int ) ;
 int FUNC_20 (struct qib_ibdev*,struct qib_qp*) ;

__attribute__((used)) static int FUNC_21(struct qib_qp *VAR_9, struct qib_ib_header *VAR_10,
         u32 VAR_11, struct qib_sge_state *VAR_12, u32 VAR_13,
         u32 VAR_14, u32 VAR_15)
{
 struct qib_ibdev *VAR_16 = FUNC_18(VAR_9->ibqp.device);
 struct qib_devdata *VAR_17 = FUNC_5(VAR_16);
 struct qib_ibport *VAR_18 = FUNC_19(VAR_9->ibqp.device, VAR_9->port_num);
 struct qib_pportdata *VAR_19 = FUNC_12(VAR_18);
 struct qib_verbs_txreq *VAR_20;
 struct qib_pio_header *VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 int VAR_24;

 VAR_20 = VAR_9->s_tx;
 if (VAR_20) {
  VAR_9->s_tx = ((void*)0);

  VAR_24 = FUNC_16(VAR_19, VAR_20->ss, VAR_20->dwords, VAR_20);
  goto bail;
 }

 VAR_20 = FUNC_8(VAR_16, VAR_9);
 if (FUNC_0(VAR_20))
  goto bail_tx;

 VAR_22 = VAR_17->f_setpbc_control(VAR_19, VAR_14, VAR_9->s_srate,
           FUNC_3(VAR_10->lrh[0]) >> 12);
 VAR_20->qp = VAR_9;
 FUNC_2(&VAR_9->refcount);
 VAR_20->wqe = VAR_9->s_wqe;
 VAR_20->mr = VAR_9->s_rdma_mr;
 if (VAR_9->s_rdma_mr)
  VAR_9->s_rdma_mr = ((void*)0);
 VAR_20->txreq.callback = VAR_8;
 if (VAR_17->flags & VAR_2)
  VAR_20->txreq.flags = VAR_5;
 else
  VAR_20->txreq.flags = VAR_6;
 if (VAR_14 + 1 > VAR_17->piosize2kmax_dwords)
  VAR_20->txreq.flags |= VAR_7;

 if (VAR_13) {




  VAR_23 = FUNC_14(VAR_12, VAR_13);
  if (VAR_23 >= VAR_19->sdma_descq_cnt)
   VAR_23 = 0;
 } else
  VAR_23 = 1;
 if (VAR_23) {
  VAR_21 = &VAR_16->pio_hdrs[VAR_20->hdr_inx];
  VAR_21->pbc[0] = FUNC_4(VAR_14);
  VAR_21->pbc[1] = FUNC_4(VAR_22);
  FUNC_11(&VAR_21->hdr, VAR_10, VAR_11 << 2);
  VAR_20->txreq.flags |= VAR_4;
  VAR_20->txreq.sg_count = VAR_23;
  VAR_20->txreq.addr = VAR_16->pio_hdrs_phys +
   VAR_20->hdr_inx * sizeof(struct qib_pio_header);
  VAR_20->hdr_dwords = VAR_11 + 2;
  VAR_24 = FUNC_16(VAR_19, VAR_12, VAR_15, VAR_20);
  goto bail;
 }


 VAR_20->hdr_dwords = VAR_14 + 1;
 VAR_21 = FUNC_10(VAR_20->hdr_dwords << 2, VAR_1);
 if (!VAR_21)
  goto err_tx;
 VAR_21->pbc[0] = FUNC_4(VAR_14);
 VAR_21->pbc[1] = FUNC_4(VAR_22);
 FUNC_11(&VAR_21->hdr, VAR_10, VAR_11 << 2);
 FUNC_13((u32 *) &VAR_21->hdr + VAR_11, VAR_12, VAR_13);

 VAR_20->txreq.addr = FUNC_6(&VAR_17->pcidev->dev, VAR_21,
     VAR_20->hdr_dwords << 2, VAR_0);
 if (FUNC_7(&VAR_17->pcidev->dev, VAR_20->txreq.addr))
  goto map_err;
 VAR_20->align_buf = VAR_21;
 VAR_20->txreq.flags |= VAR_3;
 VAR_20->txreq.sg_count = 1;
 VAR_24 = FUNC_16(VAR_19, ((void*)0), 0, VAR_20);
 goto unaligned;

map_err:
 FUNC_9(VAR_21);
err_tx:
 FUNC_15(VAR_20);
 VAR_24 = FUNC_20(VAR_16, VAR_9);
unaligned:
 VAR_18->n_unaligned++;
bail:
 return VAR_24;
bail_tx:
 VAR_24 = FUNC_1(VAR_20);
 goto bail;
}
