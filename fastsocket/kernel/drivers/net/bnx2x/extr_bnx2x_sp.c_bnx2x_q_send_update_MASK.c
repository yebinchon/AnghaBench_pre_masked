
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct client_update_ramrod_data {int dummy; } ;
struct bnx2x_queue_update_params {size_t cid_index; } ;
struct TYPE_2__ {struct bnx2x_queue_update_params update; } ;
struct bnx2x_queue_state_params {TYPE_1__ params; struct bnx2x_queue_sp_obj* q_obj; } ;
struct bnx2x_queue_sp_obj {size_t max_cos; int * cids; int cl_id; int rdata_mapping; scalar_t__ rdata; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (char*,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_queue_sp_obj*,struct bnx2x_queue_update_params*,struct client_update_ramrod_data*) ;
 int FUNC_4 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct client_update_ramrod_data*,int ,int) ;

__attribute__((used)) static inline int FUNC_6(struct bnx2x *VAR_3,
          struct bnx2x_queue_state_params *VAR_4)
{
 struct bnx2x_queue_sp_obj *VAR_5 = VAR_4->q_obj;
 struct client_update_ramrod_data *VAR_6 =
  (struct client_update_ramrod_data *)VAR_5->rdata;
 dma_addr_t VAR_7 = VAR_5->rdata_mapping;
 struct bnx2x_queue_update_params *VAR_8 =
  &VAR_4->params.update;
 u8 VAR_9 = VAR_8->cid_index;

 if (VAR_9 >= VAR_5->max_cos) {
  FUNC_0("queue[%d]: cid_index (%d) is out of range\n",
     VAR_5->cl_id, VAR_9);
  return -VAR_0;
 }


 FUNC_5(VAR_6, 0, sizeof(*VAR_6));


 FUNC_3(VAR_3, VAR_5, VAR_8, VAR_6);
 return FUNC_4(VAR_3, VAR_2,
        VAR_5->cids[VAR_9], FUNC_1(VAR_7),
        FUNC_2(VAR_7), VAR_1);
}
