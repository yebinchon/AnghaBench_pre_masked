
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct mptses {struct mptcb* mpte_mptcb; } ;
struct mptcb {scalar_t__ mpt_snduna; scalar_t__ mpt_sndnxt; scalar_t__ mpt_local_idsn; scalar_t__ mpt_sndmax; int mpt_localtoken; int mpt_localkey; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct mptcb*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int,int ,int) ;
 int FUNC_3 (char*,int,int ,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(struct mptses *VAR_1)
{
 struct mptcb *VAR_2 = VAR_1->mpte_mptcb;
 char VAR_3[VAR_0];

 FUNC_4(&VAR_2->mpt_localkey, sizeof(VAR_2->mpt_localkey));
 FUNC_1(&VAR_2->mpt_localkey, VAR_3);

 FUNC_3(VAR_3, VAR_0,
     (caddr_t)&VAR_2->mpt_localtoken, sizeof (VAR_2->mpt_localtoken));
 FUNC_2(VAR_3, VAR_0,
     (caddr_t)&VAR_2->mpt_local_idsn, sizeof (u_int64_t));


 VAR_2->mpt_snduna = VAR_2->mpt_sndmax = VAR_2->mpt_local_idsn + 1;
 VAR_2->mpt_sndnxt = VAR_2->mpt_snduna;

 FUNC_0(VAR_2);
}
