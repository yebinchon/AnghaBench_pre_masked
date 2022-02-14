
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lkb {int lkb_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct dlm_lkb *VAR_2)
{
 return (VAR_2->lkb_flags & (VAR_1 |
      VAR_0));
}
