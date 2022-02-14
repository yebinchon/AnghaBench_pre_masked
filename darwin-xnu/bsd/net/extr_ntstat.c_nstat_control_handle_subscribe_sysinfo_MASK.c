
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ncs_mtx; int ncs_flags; } ;
typedef TYPE_1__ nstat_control_state ;
typedef scalar_t__ errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static errno_t
FUNC_4(
    nstat_control_state *VAR_2)
{
 errno_t VAR_3 = FUNC_3(FUNC_0(), VAR_1, 0);

 if (VAR_3 != 0)
 {
  return VAR_3;
 }

 FUNC_1(&VAR_2->ncs_mtx);
 VAR_2->ncs_flags |= VAR_0;
 FUNC_2(&VAR_2->ncs_mtx);

 return 0;
}
