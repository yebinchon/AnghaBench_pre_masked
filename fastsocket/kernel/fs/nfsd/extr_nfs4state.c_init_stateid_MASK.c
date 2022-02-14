
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_open {int op_share_access; int op_share_deny; struct nfs4_stateowner* op_stateowner; } ;
struct nfs4_stateowner {int so_id; int so_stateids; } ;
struct TYPE_2__ {scalar_t__ si_generation; int si_fileid; int si_stateownerid; int si_boot; } ;
struct nfs4_stateid {int * st_openstp; scalar_t__ st_deny_bmap; scalar_t__ st_access_bmap; TYPE_1__ st_stateid; struct nfs4_file* st_file; struct nfs4_stateowner* st_stateowner; int st_perfile; int st_perstateowner; int st_hash; int st_lockowners; } ;
struct nfs4_file {int fi_id; int fi_stateids; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_2 (struct nfs4_file*) ;
 int FUNC_3 (int *,int *) ;
 int * VAR_2 ;
 unsigned int FUNC_4 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_5(struct nfs4_stateid *VAR_3, struct nfs4_file *VAR_4, struct nfsd4_open *VAR_5) {
 struct nfs4_stateowner *VAR_6 = VAR_5->op_stateowner;
 unsigned int VAR_7 = FUNC_4(VAR_6->so_id, VAR_4->fi_id);

 FUNC_0(&VAR_3->st_hash);
 FUNC_0(&VAR_3->st_perstateowner);
 FUNC_0(&VAR_3->st_lockowners);
 FUNC_0(&VAR_3->st_perfile);
 FUNC_3(&VAR_3->st_hash, &VAR_2[VAR_7]);
 FUNC_3(&VAR_3->st_perstateowner, &VAR_6->so_stateids);
 FUNC_3(&VAR_3->st_perfile, &VAR_4->fi_stateids);
 VAR_3->st_stateowner = VAR_6;
 FUNC_2(VAR_4);
 VAR_3->st_file = VAR_4;
 VAR_3->st_stateid.si_boot = VAR_1;
 VAR_3->st_stateid.si_stateownerid = VAR_6->so_id;
 VAR_3->st_stateid.si_fileid = VAR_4->fi_id;
 VAR_3->st_stateid.si_generation = 0;
 VAR_3->st_access_bmap = 0;
 VAR_3->st_deny_bmap = 0;
 FUNC_1(VAR_5->op_share_access & ~VAR_0,
    &VAR_3->st_access_bmap);
 FUNC_1(VAR_5->op_share_deny, &VAR_3->st_deny_bmap);
 VAR_3->st_openstp = ((void*)0);
}
