
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct mptcb {scalar_t__ mpt_version; scalar_t__ mpt_remote_idsn; scalar_t__ mpt_rcvnxt; int mpt_remotetoken; int mpt_remotekey; int mpt_mpte; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int,int ,int) ;
 int FUNC_2 (char*,int,int ,int) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct mptcb *VAR_2)
{
 char VAR_3[VAR_1];
 FUNC_3(VAR_2->mpt_mpte);


 if (VAR_2->mpt_version != VAR_0)
  return (-1);


 FUNC_0(&VAR_2->mpt_remotekey, VAR_3);
 FUNC_2(VAR_3, VAR_1,
     (caddr_t)&VAR_2->mpt_remotetoken, sizeof (VAR_2->mpt_remotetoken));
 FUNC_1(VAR_3, VAR_1,
     (caddr_t)&VAR_2->mpt_remote_idsn, sizeof (u_int64_t));
 VAR_2->mpt_rcvnxt = VAR_2->mpt_remote_idsn + 1;

 return (0);
}
