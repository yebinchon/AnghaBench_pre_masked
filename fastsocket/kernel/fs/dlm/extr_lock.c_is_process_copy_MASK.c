
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lkb {int lkb_flags; scalar_t__ lkb_nodeid; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct dlm_lkb *VAR_1)
{
 return (VAR_1->lkb_nodeid && !(VAR_1->lkb_flags & VAR_0));
}
