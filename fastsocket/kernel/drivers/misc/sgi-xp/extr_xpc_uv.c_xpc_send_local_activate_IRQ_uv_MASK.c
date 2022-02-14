
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_partition_uv {int act_state_req; } ;
struct TYPE_2__ {struct xpc_partition_uv uv; } ;
struct xpc_partition {TYPE_1__ sn; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct xpc_partition *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 struct xpc_partition_uv *VAR_6 = &VAR_3->sn.uv;







 FUNC_0(&VAR_1, VAR_5);
 if (VAR_6->act_state_req == 0)
  VAR_0++;
 VAR_6->act_state_req = VAR_4;
 FUNC_1(&VAR_1, VAR_5);

 FUNC_2(&VAR_2);
}
