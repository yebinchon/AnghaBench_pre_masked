
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct mptcb {int mpt_remotekey; int mpt_localkey; int mpt_mpte; } ;
typedef int mptcp_addr_id ;


 int FUNC_0 (int ,struct mptcb*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3(mptcp_addr_id VAR_0, struct mptcb *VAR_1, u_char *VAR_2)
{
 uint32_t VAR_3, VAR_4;

 FUNC_2(VAR_1->mpt_mpte);

 VAR_3 = VAR_4 = 0;
 FUNC_0(VAR_0, VAR_1, &VAR_3, &VAR_4);
 FUNC_1(VAR_1->mpt_localkey, VAR_1->mpt_remotekey, VAR_3, VAR_4,
     VAR_2);
}
