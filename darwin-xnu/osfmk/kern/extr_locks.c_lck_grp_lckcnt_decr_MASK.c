
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lck_type_t ;
struct TYPE_3__ {unsigned int lck_grp_spincnt; unsigned int lck_grp_mtxcnt; unsigned int lck_grp_rwcnt; } ;
typedef TYPE_1__ lck_grp_t ;





 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int*,int) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(
 lck_grp_t *VAR_0,
 lck_type_t VAR_1)
{
 unsigned int *VAR_2;
 int VAR_3;

 switch (VAR_1) {
 case 128:
  VAR_2 = &VAR_0->lck_grp_spincnt;
  break;
 case 130:
  VAR_2 = &VAR_0->lck_grp_mtxcnt;
  break;
 case 129:
  VAR_2 = &VAR_0->lck_grp_rwcnt;
  break;
 default:
  FUNC_2("lck_grp_lckcnt_decr(): invalid lock type: %d\n", VAR_1);
  return;
 }

 VAR_3 = (int)FUNC_1(VAR_2, 1);
 FUNC_0(VAR_3 >= 0);
}
