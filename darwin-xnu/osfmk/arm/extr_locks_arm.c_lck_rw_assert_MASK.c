
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lck_rw_owner; int lck_rw_want_upgrade; int lck_rw_want_excl; int lck_rw_shared_count; } ;
typedef TYPE_1__ lck_rw_t ;






 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,TYPE_1__*,char*,unsigned int) ;

void
FUNC_2(
 lck_rw_t *VAR_1,
 unsigned int VAR_2)
{
 switch (VAR_2) {
 case 128:
  if ((VAR_1->lck_rw_shared_count != 0) &&
      (VAR_1->lck_rw_owner == VAR_0)) {
   return;
  }
  break;
 case 131:
  if ((VAR_1->lck_rw_want_excl || VAR_1->lck_rw_want_upgrade) &&
   (VAR_1->lck_rw_shared_count == 0) &&
      (VAR_1->lck_rw_owner == FUNC_0())) {
   return;
  }
  break;
 case 130:
  if (VAR_1->lck_rw_shared_count != 0)
   return;
  if ((VAR_1->lck_rw_want_excl || VAR_1->lck_rw_want_upgrade) &&
      (VAR_1->lck_rw_owner == FUNC_0())) {
   return;
  }
  break;
 case 129:
  if ((VAR_1->lck_rw_shared_count == 0) &&
     !(VAR_1->lck_rw_want_excl || VAR_1->lck_rw_want_upgrade) &&
      (VAR_1->lck_rw_owner == VAR_0)) {
   return;
  }
  break;
 default:
  break;
 }
 FUNC_1("rw lock (%p)%s held (mode=%u)", VAR_1, (VAR_2 == 129 ? "" : " not"), VAR_2);
}
