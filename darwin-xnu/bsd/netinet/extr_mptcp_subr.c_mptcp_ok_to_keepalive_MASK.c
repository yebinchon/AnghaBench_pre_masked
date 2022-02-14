
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mptcb {scalar_t__ mpt_state; int mpt_mpte; } ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

boolean_t
FUNC_1(struct mptcb *VAR_1)
{
 boolean_t VAR_2 = 1;
 FUNC_0(VAR_1->mpt_mpte);

 if (VAR_1->mpt_state >= VAR_0) {
  VAR_2 = 0;
 }
 return (VAR_2);
}
