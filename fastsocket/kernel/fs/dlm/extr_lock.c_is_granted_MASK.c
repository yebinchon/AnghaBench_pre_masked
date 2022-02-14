
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lkb {scalar_t__ lkb_status; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct dlm_lkb *VAR_1)
{
 return (VAR_1->lkb_status == VAR_0);
}
