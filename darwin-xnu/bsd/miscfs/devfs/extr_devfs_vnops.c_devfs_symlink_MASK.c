
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnop_symlink_args {int a_context; int a_vpp; int a_target; TYPE_2__* a_vap; TYPE_1__* a_cnp; int a_dvp; } ;
struct TYPE_7__ {int de_dnp; } ;
typedef TYPE_3__ devdirent_t ;
struct TYPE_6__ {int va_mode; } ;
struct TYPE_5__ {int cn_nameptr; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,TYPE_3__**) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct vnop_symlink_args *VAR_0)
{
 int VAR_1;
 devdirent_t *VAR_2;

 FUNC_0();
 VAR_1 = FUNC_4(FUNC_2(VAR_0->a_dvp), VAR_0->a_cnp->cn_nameptr, VAR_0->a_vap->va_mode, VAR_0->a_target, &VAR_2);

 if (VAR_1 == 0) {
  VAR_1 = FUNC_3(VAR_2->de_dnp, VAR_0->a_vpp, FUNC_5(VAR_0->a_context));
 }

 FUNC_1();

 return VAR_1;

}
