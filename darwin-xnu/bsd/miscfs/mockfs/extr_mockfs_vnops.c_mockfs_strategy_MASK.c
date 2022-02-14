
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
struct vnop_strategy_args {int a_bp; } ;
struct TYPE_2__ {int v_mount; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct vnop_strategy_args*) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

int FUNC_4(struct vnop_strategy_args * VAR_1)
{
 int VAR_2;
 vnode_t VAR_3;






 VAR_3 = FUNC_2(FUNC_1(VAR_1->a_bp)->v_mount);

 if (VAR_3) {
  VAR_2 = FUNC_0(VAR_3, VAR_1);
  FUNC_3(VAR_3);
 }
 else {



  VAR_2 = VAR_0;
 }

 return VAR_2;
}
