
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocrdma_queue_info {int id; int created; int dma; int len; int size; int va; } ;
struct ocrdma_pa {int dummy; } ;
struct TYPE_3__ {int netdev; } ;
struct ocrdma_dev {TYPE_1__ nic_info; struct ocrdma_create_mq_rsp* mbx_cmd; } ;
struct TYPE_4__ {int rsvd_version; } ;
struct ocrdma_create_mq_rsp {int cqid_pages; int async_cqid_ringsize; int id; struct ocrdma_pa* pa; int valid; int async_event_bitmap; int async_cqid_valid; TYPE_2__ req; } ;
struct ocrdma_create_mq_req {int cqid_pages; int async_cqid_ringsize; int id; struct ocrdma_pa* pa; int valid; int async_event_bitmap; int async_cqid_valid; TYPE_2__ req; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,struct ocrdma_create_mq_rsp*,int,int *,int *) ;
 int FUNC_3 (struct ocrdma_create_mq_rsp*,int ,int) ;
 int FUNC_4 (struct ocrdma_pa*,int,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct ocrdma_dev *VAR_7,
    struct ocrdma_queue_info *VAR_8,
    struct ocrdma_queue_info *VAR_9)
{
 int VAR_10, VAR_11;
 struct ocrdma_create_mq_req *VAR_12 = VAR_7->mbx_cmd;
 struct ocrdma_create_mq_rsp *VAR_13 = VAR_7->mbx_cmd;
 struct ocrdma_pa *VAR_14;

 FUNC_3(VAR_12, 0, sizeof(*VAR_12));
 VAR_10 = FUNC_1(VAR_8->va, VAR_8->size);

 FUNC_6(&VAR_12->req, VAR_0,
   VAR_5, sizeof(*VAR_12));
 VAR_12->req.rsvd_version = 1;
 VAR_12->cqid_pages = VAR_10;
 VAR_12->cqid_pages |= (VAR_9->id << VAR_2);
 VAR_12->async_cqid_valid = VAR_1;
 VAR_12->async_event_bitmap = FUNC_0(20);
 VAR_12->async_cqid_ringsize = VAR_9->id;
 VAR_12->async_cqid_ringsize |= (FUNC_5(VAR_8->len) <<
    VAR_3);
 VAR_12->valid = VAR_4;
 VAR_14 = &VAR_12->pa[0];

 FUNC_4(VAR_14, VAR_10, VAR_8->dma, VAR_6);
 VAR_11 = FUNC_2(VAR_7->nic_info.netdev,
     VAR_12, sizeof(*VAR_12), ((void*)0), ((void*)0));
 if (!VAR_11) {
  VAR_8->id = VAR_13->id;
  VAR_8->created = 1;
 }
 return VAR_11;
}
