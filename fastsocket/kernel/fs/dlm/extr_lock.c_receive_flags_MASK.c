
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_message {int m_flags; int m_sbflags; int m_exflags; } ;
struct dlm_lkb {int lkb_flags; int lkb_sbflags; int lkb_exflags; } ;



__attribute__((used)) static void FUNC_0(struct dlm_lkb *VAR_0, struct dlm_message *VAR_1)
{
 VAR_0->lkb_exflags = VAR_1->m_exflags;
 VAR_0->lkb_sbflags = VAR_1->m_sbflags;
 VAR_0->lkb_flags = (VAR_0->lkb_flags & 0xFFFF0000) |
           (VAR_1->m_flags & 0x0000FFFF);
}
