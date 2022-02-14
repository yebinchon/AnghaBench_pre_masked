
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mptses {int mpte_sopts; } ;
struct mptopt {int mpo_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct mptopt*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mptses*) ;

void
FUNC_2(struct mptses *VAR_2, struct mptopt *VAR_3)
{
 FUNC_1(VAR_2);
 VAR_3->mpo_flags |= VAR_0;
 FUNC_0(&VAR_2->mpte_sopts, VAR_3, VAR_1);
}
