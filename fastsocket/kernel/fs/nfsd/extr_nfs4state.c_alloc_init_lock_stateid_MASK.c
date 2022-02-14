
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_stateowner {int so_id; int so_stateids; } ;
struct TYPE_2__ {scalar_t__ si_generation; int si_fileid; int si_stateownerid; int si_boot; } ;
struct nfs4_stateid {struct nfs4_stateid* st_openstp; int st_deny_bmap; scalar_t__ st_access_bmap; TYPE_1__ st_stateid; struct nfs4_file* st_file; struct nfs4_stateowner* st_stateowner; int st_perstateowner; int st_perfile; int st_hash; int st_lockowners; } ;
struct nfs4_file {int fi_id; int fi_stateids; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct nfs4_file*) ;
 int FUNC_2 (int *,int *) ;
 int * VAR_1 ;
 struct nfs4_stateid* FUNC_3 () ;
 unsigned int FUNC_4 (int ,int ) ;

__attribute__((used)) static struct nfs4_stateid *
FUNC_5(struct nfs4_stateowner *VAR_2, struct nfs4_file *VAR_3, struct nfs4_stateid *VAR_4)
{
 struct nfs4_stateid *VAR_5;
 unsigned int VAR_6 = FUNC_4(VAR_2->so_id, VAR_3->fi_id);

 VAR_5 = FUNC_3();
 if (VAR_5 == ((void*)0))
  goto out;
 FUNC_0(&VAR_5->st_hash);
 FUNC_0(&VAR_5->st_perfile);
 FUNC_0(&VAR_5->st_perstateowner);
 FUNC_0(&VAR_5->st_lockowners);
 FUNC_2(&VAR_5->st_hash, &VAR_1[VAR_6]);
 FUNC_2(&VAR_5->st_perfile, &VAR_3->fi_stateids);
 FUNC_2(&VAR_5->st_perstateowner, &VAR_2->so_stateids);
 VAR_5->st_stateowner = VAR_2;
 FUNC_1(VAR_3);
 VAR_5->st_file = VAR_3;
 VAR_5->st_stateid.si_boot = VAR_0;
 VAR_5->st_stateid.si_stateownerid = VAR_2->so_id;
 VAR_5->st_stateid.si_fileid = VAR_3->fi_id;
 VAR_5->st_stateid.si_generation = 0;
 VAR_5->st_access_bmap = 0;
 VAR_5->st_deny_bmap = VAR_4->st_deny_bmap;
 VAR_5->st_openstp = VAR_4;

out:
 return VAR_5;
}
