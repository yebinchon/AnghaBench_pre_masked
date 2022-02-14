
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sb_flags; int sb_status; int mode; int flags; scalar_t__ seq; } ;
struct TYPE_4__ {int sb_flags; int sb_status; int mode; int flags; scalar_t__ seq; } ;
struct dlm_lkb {TYPE_3__* lkb_callbacks; int lkb_id; TYPE_2__ lkb_last_cast; TYPE_1__ lkb_last_bast; } ;
struct TYPE_6__ {int sb_flags; int sb_status; int mode; int flags; scalar_t__ seq; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,unsigned long long,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dlm_lkb *VAR_1)
{
 int VAR_2;

 FUNC_0("last_bast %x %llu flags %x mode %d sb %d %x",
    VAR_1->lkb_id,
    (unsigned long long)VAR_1->lkb_last_bast.seq,
    VAR_1->lkb_last_bast.flags,
    VAR_1->lkb_last_bast.mode,
    VAR_1->lkb_last_bast.sb_status,
    VAR_1->lkb_last_bast.sb_flags);

 FUNC_0("last_cast %x %llu flags %x mode %d sb %d %x",
    VAR_1->lkb_id,
    (unsigned long long)VAR_1->lkb_last_cast.seq,
    VAR_1->lkb_last_cast.flags,
    VAR_1->lkb_last_cast.mode,
    VAR_1->lkb_last_cast.sb_status,
    VAR_1->lkb_last_cast.sb_flags);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0("cb %x %llu flags %x mode %d sb %d %x",
     VAR_1->lkb_id,
     (unsigned long long)VAR_1->lkb_callbacks[VAR_2].seq,
     VAR_1->lkb_callbacks[VAR_2].flags,
     VAR_1->lkb_callbacks[VAR_2].mode,
     VAR_1->lkb_callbacks[VAR_2].sb_status,
     VAR_1->lkb_callbacks[VAR_2].sb_flags);
 }
}
