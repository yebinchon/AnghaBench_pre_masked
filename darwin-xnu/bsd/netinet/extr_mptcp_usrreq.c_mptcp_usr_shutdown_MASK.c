
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
 struct mptses* FUNC_3 (struct mptses*) ;
 struct mptses* FUNC_4 (struct mppcb*) ;
 int FUNC_5 (struct socket*) ;

__attribute__((used)) static int
FUNC_6(struct socket *VAR_2)
{
 struct mppcb *VAR_3 = FUNC_1(VAR_2);
 struct mptses *VAR_4;
 int VAR_5 = 0;

 if (VAR_3 == ((void*)0) || VAR_3->mpp_state == VAR_1) {
  VAR_5 = VAR_0;
  goto out;
 }
 VAR_4 = FUNC_4(VAR_3);
 FUNC_0(VAR_4 != ((void*)0));

 FUNC_5(VAR_2);

 VAR_4 = FUNC_3(VAR_4);
 if (VAR_4 != ((void*)0))
  VAR_5 = FUNC_2(VAR_4);
out:
 return (VAR_5);
}
