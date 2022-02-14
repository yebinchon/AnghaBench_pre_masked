
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_nodeid; } ;
struct dlm_message {int m_asts; int m_rqmode; int m_lkid; int m_pid; TYPE_1__ m_header; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {int lkb_exflags; int lkb_lvbptr; int * lkb_astfn; int * lkb_bastfn; int lkb_rqmode; int lkb_grmode; int lkb_remid; int lkb_ownpid; int lkb_nodeid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dlm_ls*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(struct dlm_ls *VAR_7, struct dlm_lkb *VAR_8,
    struct dlm_message *VAR_9)
{
 VAR_8->lkb_nodeid = VAR_9->m_header.h_nodeid;
 VAR_8->lkb_ownpid = VAR_9->m_pid;
 VAR_8->lkb_remid = VAR_9->m_lkid;
 VAR_8->lkb_grmode = VAR_3;
 VAR_8->lkb_rqmode = VAR_9->m_rqmode;

 VAR_8->lkb_bastfn = (VAR_9->m_asts & VAR_0) ? &VAR_6 : ((void*)0);
 VAR_8->lkb_astfn = (VAR_9->m_asts & VAR_1) ? &VAR_5 : ((void*)0);

 if (VAR_8->lkb_exflags & VAR_2) {

  VAR_8->lkb_lvbptr = FUNC_0(VAR_7);
  if (!VAR_8->lkb_lvbptr)
   return -VAR_4;
 }

 return 0;
}
