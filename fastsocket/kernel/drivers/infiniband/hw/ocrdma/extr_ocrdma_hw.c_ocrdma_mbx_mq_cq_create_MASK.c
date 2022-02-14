
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_queue_info {int id; int created; int dma; int size; int va; } ;
struct TYPE_2__ {int netdev; } ;
struct ocrdma_dev {TYPE_1__ nic_info; struct ocrdma_create_cq_cmd_rsp* mbx_cmd; } ;
struct ocrdma_create_cq_cmd_rsp {int eqn; int cq_id; int pgsz_pgcnt; int * pa; int ev_cnt_flags; int req; } ;
struct ocrdma_create_cq_cmd {int eqn; int cq_id; int pgsz_pgcnt; int * pa; int ev_cnt_flags; int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,struct ocrdma_create_cq_cmd_rsp*,int,int *,int *) ;
 int FUNC_2 (struct ocrdma_create_cq_cmd_rsp*,int ,int) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ocrdma_dev *VAR_6,
       struct ocrdma_queue_info *VAR_7,
       struct ocrdma_queue_info *VAR_8)
{
 struct ocrdma_create_cq_cmd *VAR_9 = VAR_6->mbx_cmd;
 struct ocrdma_create_cq_cmd_rsp *VAR_10 = VAR_6->mbx_cmd;
 int VAR_11;

 FUNC_2(VAR_9, 0, sizeof(*VAR_9));
 FUNC_4(&VAR_9->req, VAR_0,
   VAR_4, sizeof(*VAR_9));

 VAR_9->pgsz_pgcnt = FUNC_0(VAR_7->va, VAR_7->size);
 VAR_9->ev_cnt_flags = VAR_1;
 VAR_9->eqn = (VAR_8->id << VAR_2);

 FUNC_3(&VAR_9->pa[0], VAR_9->pgsz_pgcnt,
        VAR_7->dma, VAR_5);
 VAR_11 = FUNC_1(VAR_6->nic_info.netdev,
     VAR_9, sizeof(*VAR_9), ((void*)0), ((void*)0));
 if (!VAR_11) {
  VAR_7->id = (VAR_10->cq_id & VAR_3);
  VAR_7->created = 1;
 }
 return VAR_11;
}
