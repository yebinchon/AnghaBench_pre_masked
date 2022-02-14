
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_message {int m_lvbseq; int m_extra; } ;
struct dlm_lkb {int lkb_exflags; int lkb_grmode; int lkb_rqmode; int lkb_lvbseq; int lkb_lvbptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct dlm_message*) ;

__attribute__((used)) static void FUNC_2(struct dlm_rsb *VAR_3, struct dlm_lkb *VAR_4,
       struct dlm_message *VAR_5)
{
 int VAR_6;

 if (!VAR_4->lkb_lvbptr)
  return;

 if (!(VAR_4->lkb_exflags & VAR_0))
  return;

 VAR_6 = VAR_2[VAR_4->lkb_grmode + 1][VAR_4->lkb_rqmode + 1];
 if (VAR_6 == 1) {
  int VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 > VAR_1)
   VAR_7 = VAR_1;
  FUNC_0(VAR_4->lkb_lvbptr, VAR_5->m_extra, VAR_7);
  VAR_4->lkb_lvbseq = VAR_5->m_lvbseq;
 }
}
