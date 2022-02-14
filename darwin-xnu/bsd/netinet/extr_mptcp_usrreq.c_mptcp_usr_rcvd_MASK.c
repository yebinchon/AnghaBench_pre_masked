
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct mptses {int dummy; } ;
struct mppcb {scalar_t__ mpp_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct mppcb* FUNC_1 (struct socket*) ;
 int FUNC_2 (struct mptses*) ;
 struct mptses* FUNC_3 (struct mppcb*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_2, int VAR_3)
{
#pragma unused(flags)
 struct mppcb *VAR_4 = FUNC_1(VAR_2);
 struct mptses *VAR_5;
 int VAR_6 = 0;

 if (VAR_4 == ((void*)0) || VAR_4->mpp_state == VAR_1) {
  VAR_6 = VAR_0;
  goto out;
 }
 VAR_5 = FUNC_3(VAR_4);
 FUNC_0(VAR_5 != ((void*)0));

 VAR_6 = FUNC_2(VAR_5);
out:
 return (VAR_6);
}
