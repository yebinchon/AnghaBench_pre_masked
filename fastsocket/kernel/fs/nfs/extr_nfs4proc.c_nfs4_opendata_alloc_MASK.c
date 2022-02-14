
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct nfs_server {int attr_bitmask; TYPE_1__* nfs_client; } ;
struct TYPE_10__ {int id; } ;
struct nfs4_state_owner {TYPE_2__ so_owner_id; int so_count; int so_seqid; } ;
struct TYPE_11__ {scalar_t__ data; } ;
struct TYPE_12__ {TYPE_3__ verifier; int * attrs; } ;
struct TYPE_15__ {int open_flags; int fmode; int access; int claim; int * seqid; TYPE_4__ u; void* fh; int bitmask; struct nfs_server* server; int * name; int id; int clientid; } ;
struct TYPE_14__ {int * seqid; int * stateid; int * fh; } ;
struct TYPE_13__ {int stateid; int fh; } ;
struct nfs4_opendata {int kref; TYPE_7__ o_arg; TYPE_6__ c_arg; TYPE_5__ o_res; int attrs; struct nfs4_state_owner* owner; struct dentry* dir; int dentry; } ;
struct inode {int dummy; } ;
struct iattr {scalar_t__ ia_valid; } ;
struct dentry {struct inode* d_inode; int d_name; int d_sb; } ;
typedef int gfp_t ;
typedef int fmode_t ;
typedef enum open_claim_type4 { ____Placeholder_open_claim_type4 } open_claim_type4 ;
struct TYPE_16__ {int pid; } ;
struct TYPE_9__ {int cl_clientid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







 void* FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 TYPE_8__* VAR_7 ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int VAR_8 ;
 int FUNC_6 (struct nfs4_opendata*) ;
 int FUNC_7 (int *) ;
 struct nfs4_opendata* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,struct iattr const*,int) ;
 int FUNC_10 (struct nfs4_opendata*) ;
 int FUNC_11 (struct nfs_server*,int) ;
 int * FUNC_12 (int *,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static struct nfs4_opendata *FUNC_14(struct dentry *VAR_9,
  struct nfs4_state_owner *VAR_10, fmode_t VAR_11, int VAR_12,
  const struct iattr *VAR_13,
  enum open_claim_type4 VAR_14,
  gfp_t VAR_15)
{
 struct dentry *VAR_16 = FUNC_4(VAR_9);
 struct inode *VAR_17 = VAR_16->d_inode;
 struct nfs_server *VAR_18 = FUNC_1(VAR_17);
 struct nfs4_opendata *VAR_19;

 VAR_19 = FUNC_8(sizeof(*VAR_19), VAR_15);
 if (VAR_19 == ((void*)0))
  goto err;
 VAR_19->o_arg.seqid = FUNC_12(&VAR_10->so_seqid, VAR_15);
 if (VAR_19->o_arg.seqid == ((void*)0))
  goto err_free;
 FUNC_13(VAR_9->d_sb);
 VAR_19->dentry = FUNC_3(VAR_9);
 VAR_19->dir = VAR_16;
 VAR_19->owner = VAR_10;
 FUNC_2(&VAR_10->so_count);
 VAR_19->o_arg.open_flags = VAR_12;
 VAR_19->o_arg.fmode = VAR_11 & (VAR_0|VAR_1);


 if (!(VAR_12 & VAR_6)) {


  VAR_19->o_arg.access = VAR_5 | VAR_4 |
      VAR_3 | VAR_2;
 }
 VAR_19->o_arg.clientid = VAR_18->nfs_client->cl_clientid;
 VAR_19->o_arg.id = VAR_10->so_owner_id.id;
 VAR_19->o_arg.name = &VAR_9->d_name;
 VAR_19->o_arg.server = VAR_18;
 VAR_19->o_arg.bitmask = VAR_18->attr_bitmask;
 VAR_19->o_arg.claim = FUNC_11(VAR_18, VAR_14);
 switch (VAR_19->o_arg.claim) {
 case 129:
 case 134:
 case 133:
  VAR_19->o_arg.fh = FUNC_0(VAR_17);
  break;
 case 128:
 case 130:
 case 132:
 case 131:
  VAR_19->o_arg.fh = FUNC_0(VAR_9->d_inode);
 }
 if (VAR_13 != ((void*)0) && VAR_13->ia_valid != 0) {
  u32 *VAR_20;

  VAR_19->o_arg.u.attrs = &VAR_19->attrs;
  FUNC_9(&VAR_19->attrs, VAR_13, sizeof(VAR_19->attrs));
  VAR_20 = (u32 *) VAR_19->o_arg.u.verifier.data;
  VAR_20[0] = VAR_8;
  VAR_20[1] = VAR_7->pid;
 }
 VAR_19->c_arg.fh = &VAR_19->o_res.fh;
 VAR_19->c_arg.stateid = &VAR_19->o_res.stateid;
 VAR_19->c_arg.seqid = VAR_19->o_arg.seqid;
 FUNC_10(VAR_19);
 FUNC_7(&VAR_19->kref);
 return VAR_19;
err_free:
 FUNC_6(VAR_19);
err:
 FUNC_5(VAR_16);
 return ((void*)0);
}
