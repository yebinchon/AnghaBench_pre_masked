
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mptses {struct mptcb* mpte_mptcb; } ;
struct mptcb {scalar_t__ mpt_sndnxt; scalar_t__ mpt_sndmax; } ;


 int VAR_0 ;
 int FUNC_0 (struct mptcb*,int ) ;
 int FUNC_1 (struct mptses*) ;

__attribute__((used)) static struct mptses *
FUNC_2(struct mptses *VAR_1)
{
 struct mptcb *VAR_2 = VAR_1->mpte_mptcb;

 FUNC_0(VAR_2, VAR_0);


 if (VAR_2->mpt_sndnxt + 1 != VAR_2->mpt_sndmax)
  return (VAR_1);

 FUNC_1(VAR_1);

 return (VAR_1);
}
