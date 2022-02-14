
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int caps; } ;
struct nfs4_state_owner {int so_reclaim_seqcount; int so_cred; struct nfs_server* so_server; } ;
struct nfs4_state {int flags; } ;
struct nfs4_opendata {struct nfs4_state_owner* owner; } ;
typedef int fmode_t ;


 scalar_t__ FUNC_0 (struct nfs4_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nfs4_state*) ;
 int FUNC_2 (struct nfs4_opendata*) ;
 int FUNC_3 (int ,struct nfs4_opendata*,struct nfs4_state*,int ,int) ;
 struct nfs4_state* FUNC_4 (struct nfs4_opendata*) ;
 int FUNC_5 (struct nfs_server*,struct nfs4_state*) ;
 unsigned int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct nfs4_opendata *VAR_2,
  fmode_t VAR_3,
  int VAR_4,
  struct nfs4_state **VAR_5)
{
 struct nfs4_state_owner *VAR_6 = VAR_2->owner;
 struct nfs_server *VAR_7 = VAR_6->so_server;
 struct nfs4_state *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(&VAR_6->so_reclaim_seqcount);

 VAR_10 = FUNC_2(VAR_2);
 if (VAR_10 != 0)
  goto out;

 VAR_8 = FUNC_4(VAR_2);
 VAR_10 = FUNC_1(VAR_8);
 if (FUNC_0(VAR_8))
  goto out;
 if (VAR_7->caps & VAR_0)
  FUNC_8(VAR_1, &VAR_8->flags);

 VAR_10 = FUNC_3(VAR_6->so_cred, VAR_2, VAR_8, VAR_3, VAR_4);
 if (VAR_10 != 0)
  goto out;

 if (FUNC_7(&VAR_6->so_reclaim_seqcount, VAR_9))
  FUNC_5(VAR_7, VAR_8);
 *VAR_5 = VAR_8;
out:
 return VAR_10;
}
