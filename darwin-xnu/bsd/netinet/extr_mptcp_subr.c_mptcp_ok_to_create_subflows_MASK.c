
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mptcb {scalar_t__ mpt_state; int mpt_flags; } ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_0(struct mptcb *VAR_3)
{
 return (VAR_3->mpt_state >= VAR_1 &&
  VAR_3->mpt_state < VAR_2 &&
  !(VAR_3->mpt_flags & VAR_0));
}
