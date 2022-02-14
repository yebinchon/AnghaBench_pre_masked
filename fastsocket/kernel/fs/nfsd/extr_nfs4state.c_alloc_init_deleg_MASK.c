
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct svc_fh {int fh_handle; } ;
struct nfs4_stateid {struct nfs4_file* st_file; } ;
struct nfs4_file {int fi_delegations; scalar_t__ fi_had_conflict; } ;
struct TYPE_4__ {int cb_work; } ;
struct TYPE_3__ {scalar_t__ si_generation; scalar_t__ si_fileid; scalar_t__ si_stateownerid; int si_boot; } ;
struct nfs4_delegation {TYPE_2__ dl_recall; int dl_perclnt; int dl_perfile; int dl_count; scalar_t__ dl_time; int dl_fh; TYPE_1__ dl_stateid; scalar_t__ dl_type; int * dl_flock; struct nfs4_file* dl_file; struct nfs4_client* dl_client; int dl_recall_lru; } ;
struct nfs4_client {int cl_delegations; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct nfs4_file*) ;
 struct nfs4_delegation* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (struct nfs4_file*,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static struct nfs4_delegation *
FUNC_9(struct nfs4_client *VAR_9, struct nfs4_stateid *VAR_10, struct svc_fh *VAR_11, u32 VAR_12)
{
 struct nfs4_delegation *VAR_13;
 struct nfs4_file *VAR_14 = VAR_10->st_file;

 FUNC_3("NFSD alloc_init_deleg\n");





 if (VAR_12 != VAR_1)
  return ((void*)0);
 if (VAR_14->fi_had_conflict)
  return ((void*)0);
 if (VAR_8 > VAR_6)
  return ((void*)0);
 VAR_13 = FUNC_6(VAR_5, VAR_0);
 if (VAR_13 == ((void*)0))
  return VAR_13;
 VAR_8++;
 FUNC_0(&VAR_13->dl_perfile);
 FUNC_0(&VAR_13->dl_perclnt);
 FUNC_0(&VAR_13->dl_recall_lru);
 VAR_13->dl_client = VAR_9;
 FUNC_5(VAR_14);
 VAR_13->dl_file = VAR_14;
 FUNC_8(VAR_14, VAR_2);
 VAR_13->dl_flock = ((void*)0);
 VAR_13->dl_type = VAR_12;
 VAR_13->dl_stateid.si_boot = VAR_3;
 VAR_13->dl_stateid.si_stateownerid = VAR_4++;
 VAR_13->dl_stateid.si_fileid = 0;
 VAR_13->dl_stateid.si_generation = 0;
 FUNC_4(&VAR_13->dl_fh, &VAR_11->fh_handle);
 VAR_13->dl_time = 0;
 FUNC_2(&VAR_13->dl_count, 1);
 FUNC_7(&VAR_13->dl_perfile, &VAR_14->fi_delegations);
 FUNC_7(&VAR_13->dl_perclnt, &VAR_9->cl_delegations);
 FUNC_1(&VAR_13->dl_recall.cb_work, VAR_7);
 return VAR_13;
}
