
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_message {scalar_t__ m_type; } ;
struct dlm_lkb {int lkb_exflags; int lkb_rqmode; int lkb_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct dlm_lkb*) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static void FUNC_2(struct dlm_lkb *VAR_6, struct dlm_message *VAR_7)
{
 if (VAR_7->m_type != VAR_5 &&
     VAR_7->m_type != VAR_4) {
  FUNC_1("munge_altmode %x invalid reply type %d",
     VAR_6->lkb_id, VAR_7->m_type);
  return;
 }

 if (VAR_6->lkb_exflags & VAR_1)
  VAR_6->lkb_rqmode = VAR_3;
 else if (VAR_6->lkb_exflags & VAR_0)
  VAR_6->lkb_rqmode = VAR_2;
 else {
  FUNC_1("munge_altmode invalid exflags %x", VAR_6->lkb_exflags);
  FUNC_0(VAR_6);
 }
}
