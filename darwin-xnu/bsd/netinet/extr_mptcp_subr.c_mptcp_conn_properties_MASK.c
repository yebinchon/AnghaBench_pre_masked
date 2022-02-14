
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mptcb {int mpt_gc_ticks; int mpt_rcvwnd; int mpt_flags; int mpt_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mptcb*) ;

__attribute__((used)) static void
FUNC_1(struct mptcb *VAR_4)
{

 VAR_4->mpt_version = VAR_1;


 if (VAR_3)
  VAR_4->mpt_flags |= VAR_0;


 VAR_4->mpt_rcvwnd = FUNC_0(VAR_4);


 VAR_4->mpt_gc_ticks = VAR_2;
}
