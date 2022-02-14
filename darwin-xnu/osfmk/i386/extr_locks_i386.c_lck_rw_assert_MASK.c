
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int lck_rw_shared_count; int lck_rw_want_upgrade; int lck_rw_want_write; } ;
typedef TYPE_1__ lck_rw_t ;






 int FUNC_0 (char*,TYPE_1__*,char*,unsigned int,int ) ;

void
FUNC_1(
 lck_rw_t *VAR_0,
 unsigned int VAR_1)
{
 switch (VAR_1) {
 case 128:
  if (VAR_0->lck_rw_shared_count != 0) {
   return;
  }
  break;
 case 131:
  if ((VAR_0->lck_rw_want_write ||
       VAR_0->lck_rw_want_upgrade) &&
      VAR_0->lck_rw_shared_count == 0) {
   return;
  }
  break;
 case 130:
  if (VAR_0->lck_rw_want_write ||
      VAR_0->lck_rw_want_upgrade ||
      VAR_0->lck_rw_shared_count != 0) {
   return;
  }
  break;
 case 129:
  if (!(VAR_0->lck_rw_want_write ||
     VAR_0->lck_rw_want_upgrade ||
     VAR_0->lck_rw_shared_count != 0)) {
   return;
  }
  break;
 default:
  break;
 }

 FUNC_0("rw lock (%p)%s held (mode=%u), first word %08x\n", VAR_0, (VAR_1 == 129 ? "" : " not"), VAR_1, *(uint32_t *)VAR_0);
}
