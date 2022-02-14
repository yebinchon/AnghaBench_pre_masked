
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_message {int m_extra; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {int lkb_exflags; scalar_t__ lkb_lvbptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dlm_ls*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct dlm_message*) ;

__attribute__((used)) static int FUNC_3(struct dlm_ls *VAR_3, struct dlm_lkb *VAR_4,
         struct dlm_message *VAR_5)
{
 int VAR_6;

 if (VAR_4->lkb_exflags & VAR_0) {
  if (!VAR_4->lkb_lvbptr)
   VAR_4->lkb_lvbptr = FUNC_0(VAR_3);
  if (!VAR_4->lkb_lvbptr)
   return -VAR_2;
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6 > VAR_1)
   VAR_6 = VAR_1;
  FUNC_1(VAR_4->lkb_lvbptr, VAR_5->m_extra, VAR_6);
 }
 return 0;
}
