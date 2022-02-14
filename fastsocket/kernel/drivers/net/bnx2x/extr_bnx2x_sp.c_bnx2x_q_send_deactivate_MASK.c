
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_queue_update_params {int update_flags; } ;
struct TYPE_2__ {struct bnx2x_queue_update_params update; } ;
struct bnx2x_queue_state_params {TYPE_1__ params; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_queue_state_params*) ;
 int FUNC_2 (struct bnx2x_queue_update_params*,int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct bnx2x *VAR_1,
     struct bnx2x_queue_state_params *VAR_2)
{
 struct bnx2x_queue_update_params *VAR_3 = &VAR_2->params.update;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 FUNC_0(VAR_0, &VAR_3->update_flags);

 return FUNC_1(VAR_1, VAR_2);
}
