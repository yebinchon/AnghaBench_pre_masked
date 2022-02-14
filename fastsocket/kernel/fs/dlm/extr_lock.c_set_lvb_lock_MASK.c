
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rsb {scalar_t__ res_lvbseq; scalar_t__ res_lvbptr; TYPE_1__* res_ls; } ;
struct dlm_lkb {int lkb_grmode; int lkb_rqmode; int lkb_exflags; int lkb_sbflags; scalar_t__ lkb_lvbseq; scalar_t__ lkb_lvbptr; } ;
struct TYPE_2__ {int ls_lvblen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int** VAR_4 ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct dlm_rsb*,int ) ;
 scalar_t__ FUNC_3 (struct dlm_rsb*,int ) ;
 int FUNC_4 (struct dlm_rsb*,int ) ;

__attribute__((used)) static void FUNC_5(struct dlm_rsb *VAR_5, struct dlm_lkb *VAR_6)
{
 int VAR_7, VAR_8 = VAR_5->res_ls->ls_lvblen;





 VAR_7 = VAR_4[VAR_6->lkb_grmode + 1][VAR_6->lkb_rqmode + 1];

 if (VAR_7 == 1) {
  if (!VAR_6->lkb_lvbptr)
   return;

  if (!(VAR_6->lkb_exflags & VAR_1))
   return;

  if (!VAR_5->res_lvbptr)
   return;

  FUNC_1(VAR_6->lkb_lvbptr, VAR_5->res_lvbptr, VAR_8);
  VAR_6->lkb_lvbseq = VAR_5->res_lvbseq;

 } else if (VAR_7 == 0) {
  if (VAR_6->lkb_exflags & VAR_0) {
   FUNC_4(VAR_5, VAR_3);
   return;
  }

  if (!VAR_6->lkb_lvbptr)
   return;

  if (!(VAR_6->lkb_exflags & VAR_1))
   return;

  if (!VAR_5->res_lvbptr)
   VAR_5->res_lvbptr = FUNC_0(VAR_5->res_ls);

  if (!VAR_5->res_lvbptr)
   return;

  FUNC_1(VAR_5->res_lvbptr, VAR_6->lkb_lvbptr, VAR_8);
  VAR_5->res_lvbseq++;
  VAR_6->lkb_lvbseq = VAR_5->res_lvbseq;
  FUNC_2(VAR_5, VAR_3);
 }

 if (FUNC_3(VAR_5, VAR_3))
  VAR_6->lkb_sbflags |= VAR_2;
}
