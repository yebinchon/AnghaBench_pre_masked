
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_message {int m_lvbseq; int m_rqmode; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {scalar_t__ lkb_status; int lkb_lvbseq; int lkb_rqmode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dlm_ls*,struct dlm_lkb*,struct dlm_message*) ;

__attribute__((used)) static int FUNC_1(struct dlm_ls *VAR_3, struct dlm_lkb *VAR_4,
    struct dlm_message *VAR_5)
{
 if (VAR_4->lkb_status != VAR_0)
  return -VAR_1;

 if (FUNC_0(VAR_3, VAR_4, VAR_5))
  return -VAR_2;

 VAR_4->lkb_rqmode = VAR_5->m_rqmode;
 VAR_4->lkb_lvbseq = VAR_5->m_lvbseq;

 return 0;
}
