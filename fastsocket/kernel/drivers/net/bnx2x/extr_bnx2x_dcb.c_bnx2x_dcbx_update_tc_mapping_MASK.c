
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {size_t num_of_cos; TYPE_1__* cos_params; } ;
struct TYPE_6__ {TYPE_2__ ets; } ;
struct bnx2x {size_t* prio_to_cos; int sp_rtnl_task; int sp_rtnl_state; TYPE_3__ dcbx_port_params; } ;
struct TYPE_4__ {int pri_bitmask; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct bnx2x *VAR_2)
{
 u8 VAR_3, VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2->dcbx_port_params.ets.num_of_cos; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if (VAR_2->dcbx_port_params.ets.cos_params[VAR_4].pri_bitmask
       & (1 << VAR_3)) {
    VAR_2->prio_to_cos[VAR_3] = VAR_4;
   }
  }
 }





 if (!FUNC_1(VAR_1, &VAR_2->sp_rtnl_state))
  FUNC_0(&VAR_2->sp_rtnl_task, 0);
}
