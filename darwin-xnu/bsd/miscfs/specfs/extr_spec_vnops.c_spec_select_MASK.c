
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnop_select_args {int a_wql; int a_which; TYPE_1__* a_vp; int a_context; } ;
typedef int proc_t ;
typedef int dev_t ;
struct TYPE_4__ {int (* d_select ) (int ,int ,int ,int ) ;} ;
struct TYPE_3__ {int v_type; int v_rdev; } ;



 TYPE_2__* VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct vnop_select_args *VAR_1)
{
 proc_t VAR_2 = FUNC_2(VAR_1->a_context);
 dev_t VAR_3;

 switch (VAR_1->a_vp->v_type) {

 default:
  return (1);

 case 128:
  VAR_3 = VAR_1->a_vp->v_rdev;
  return (*VAR_0[FUNC_0(VAR_3)].d_select)(VAR_3, VAR_1->a_which, VAR_1->a_wql, VAR_2);
 }
}
