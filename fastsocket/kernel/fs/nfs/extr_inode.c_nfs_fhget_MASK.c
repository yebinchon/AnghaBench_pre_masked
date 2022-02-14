
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


struct super_block {int dummy; } ;
struct nfs_inode {int cache_validity; unsigned long attrtimeo_timestamp; int access_cache; int attrtimeo; scalar_t__ change_attr; int attr_gencount; int read_cache_jiffies; int * cookieverf; } ;
struct nfs_find_desc {struct nfs_fattr* fattr; struct nfs_fh* fh; } ;
struct nfs_fh {int dummy; } ;
struct TYPE_10__ {int used; } ;
struct TYPE_9__ {scalar_t__ blocks; } ;
struct TYPE_11__ {TYPE_2__ nfs3; TYPE_1__ nfs2; } ;
struct nfs_fattr {int valid; int uid; int gid; TYPE_3__ du; scalar_t__ nlink; int size; scalar_t__ change_attr; int ctime; int mtime; int atime; int gencount; int time_start; int rdev; int mode; } ;
struct TYPE_15__ {int * backing_dev_info; int * a_ops; } ;
struct inode {int i_state; unsigned long i_ino; int i_flags; int i_uid; int i_gid; int i_count; TYPE_4__* i_sb; scalar_t__ i_blocks; scalar_t__ i_nlink; scalar_t__ i_size; int i_ctime; int i_mtime; int i_atime; int i_mode; int * i_op; int * i_fop; TYPE_7__ i_data; } ;
struct TYPE_16__ {TYPE_6__* nfs_client; int backing_dev_info; } ;
struct TYPE_14__ {TYPE_5__* rpc_ops; } ;
struct TYPE_13__ {int * dir_inode_ops; int * file_ops; int * file_inode_ops; } ;
struct TYPE_12__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct nfs_inode* FUNC_2 (struct inode*) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (struct inode*) ;
 TYPE_8__* FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ,...) ;
 struct inode* FUNC_11 (struct super_block*,unsigned long,int ,int ,struct nfs_find_desc*) ;
 int FUNC_12 (struct inode*,int ,int ) ;
 unsigned long VAR_32 ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (struct super_block*,struct nfs_fattr*) ;
 int FUNC_15 (struct nfs_fattr*) ;
 scalar_t__ FUNC_16 (int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_17 (struct nfs_fh*) ;
 unsigned long FUNC_18 (struct nfs_fattr*) ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_19 (struct inode*) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_20 (struct inode*,struct nfs_fattr*) ;
 scalar_t__ FUNC_21 (struct inode*,int ) ;
 scalar_t__ FUNC_22 (int ) ;
 int VAR_40 ;
 int FUNC_23 (TYPE_7__*,int *) ;
 int FUNC_24 (struct inode*) ;

struct inode *
FUNC_25(struct super_block *VAR_41, struct nfs_fh *VAR_42, struct nfs_fattr *VAR_43)
{
 struct nfs_find_desc VAR_44 = {
  .fh = VAR_42,
  .fattr = VAR_43
 };
 struct inode *VAR_45 = FUNC_0(-VAR_0);
 unsigned long VAR_46;

 FUNC_14(VAR_41, VAR_43);
 if (((VAR_43->valid & VAR_7) == 0) &&
     !FUNC_15(VAR_43))
  goto out_no_inode;
 if ((VAR_43->valid & VAR_16) == 0)
  goto out_no_inode;

 VAR_46 = FUNC_18(VAR_43);

 VAR_45 = FUNC_11(VAR_41, VAR_46, VAR_36, VAR_37, &VAR_44);
 if (VAR_45 == ((void*)0)) {
  VAR_45 = FUNC_0(-VAR_1);
  goto out_no_inode;
 }

 if (VAR_45->i_state & VAR_2) {
  struct nfs_inode *VAR_47 = FUNC_2(VAR_45);
  unsigned long VAR_48 = VAR_32;



  VAR_45->i_ino = VAR_46;


  VAR_45->i_flags |= VAR_30|VAR_31;
  VAR_45->i_mode = VAR_43->mode;
  if ((VAR_43->valid & VAR_9) == 0
    && FUNC_21(VAR_45, VAR_21))
   VAR_47->cache_validity |= VAR_26;



  VAR_45->i_op = FUNC_4(VAR_41)->nfs_client->rpc_ops->file_inode_ops;
  if (FUNC_8(VAR_45->i_mode)) {
   VAR_45->i_fop = FUNC_4(VAR_41)->nfs_client->rpc_ops->file_ops;
   VAR_45->i_data.a_ops = &VAR_35;
   VAR_45->i_data.backing_dev_info = &FUNC_4(VAR_41)->backing_dev_info;
  } else if (FUNC_6(VAR_45->i_mode)) {
   VAR_45->i_op = FUNC_4(VAR_41)->nfs_client->rpc_ops->dir_inode_ops;
   VAR_45->i_fop = &VAR_34;
   FUNC_23(&VAR_45->i_data, &VAR_33);

   if (VAR_43->valid & VAR_10 ||
     VAR_43->valid & VAR_17) {
    if (VAR_43->valid & VAR_17)
     VAR_45->i_op = &VAR_39;
    else
     VAR_45->i_op = &VAR_38;
    VAR_45->i_fop = ((void*)0);
    VAR_45->i_flags |= VAR_29;
   }
  } else if (FUNC_7(VAR_45->i_mode))
   VAR_45->i_op = &VAR_40;
  else
   FUNC_12(VAR_45, VAR_45->i_mode, VAR_43->rdev);

  FUNC_13(&VAR_45->i_atime, 0, sizeof(VAR_45->i_atime));
  FUNC_13(&VAR_45->i_mtime, 0, sizeof(VAR_45->i_mtime));
  FUNC_13(&VAR_45->i_ctime, 0, sizeof(VAR_45->i_ctime));
  VAR_47->change_attr = 0;
  VAR_45->i_size = 0;
  VAR_45->i_nlink = 0;
  VAR_45->i_uid = -2;
  VAR_45->i_gid = -2;
  VAR_45->i_blocks = 0;
  FUNC_13(VAR_47->cookieverf, 0, sizeof(VAR_47->cookieverf));

  VAR_47->read_cache_jiffies = VAR_43->time_start;
  VAR_47->attr_gencount = VAR_43->gencount;
  if (VAR_43->valid & VAR_3)
   VAR_45->i_atime = VAR_43->atime;
  else if (FUNC_21(VAR_45, VAR_18))
   VAR_47->cache_validity |= VAR_26;
  if (VAR_43->valid & VAR_11)
   VAR_45->i_mtime = VAR_43->mtime;
  else if (FUNC_21(VAR_45, VAR_22))
   VAR_47->cache_validity |= VAR_26;
  if (VAR_43->valid & VAR_6)
   VAR_45->i_ctime = VAR_43->ctime;
  else if (FUNC_21(VAR_45, VAR_20))
   VAR_47->cache_validity |= VAR_26;
  if (VAR_43->valid & VAR_5)
   VAR_47->change_attr = VAR_43->change_attr;
  else if (FUNC_21(VAR_45, VAR_19))
   VAR_47->cache_validity |= VAR_26;
  if (VAR_43->valid & VAR_14)
   VAR_45->i_size = FUNC_22(VAR_43->size);
  else
   VAR_47->cache_validity |= VAR_26
    | VAR_27;
  if (VAR_43->valid & VAR_12)
   VAR_45->i_nlink = VAR_43->nlink;
  else if (FUNC_21(VAR_45, VAR_23))
   VAR_47->cache_validity |= VAR_26;
  if (VAR_43->valid & VAR_13)
   VAR_45->i_uid = VAR_43->uid;
  else if (FUNC_21(VAR_45, VAR_24))
   VAR_47->cache_validity |= VAR_26;
  if (VAR_43->valid & VAR_8)
   VAR_45->i_gid = VAR_43->gid;
  else if (FUNC_21(VAR_45, VAR_25))
   VAR_47->cache_validity |= VAR_26;
  if (VAR_43->valid & VAR_4)
   VAR_45->i_blocks = VAR_43->du.nfs2.blocks;
  if (VAR_43->valid & VAR_15) {



   VAR_45->i_blocks = FUNC_16(VAR_43->du.nfs3.used);
  }
  VAR_47->attrtimeo = FUNC_3(VAR_45);
  VAR_47->attrtimeo_timestamp = VAR_48;
  VAR_47->access_cache = VAR_28;

  FUNC_19(VAR_45);

  FUNC_24(VAR_45);
 } else
  FUNC_20(VAR_45, VAR_43);
 FUNC_10("NFS: nfs_fhget(%s/%Ld fh_crc=0x%08x ct=%d)\n",
  VAR_45->i_sb->s_id,
  (long long)FUNC_1(VAR_45),
  FUNC_17(VAR_42),
  FUNC_9(&VAR_45->i_count));

out:
 return VAR_45;

out_no_inode:
 FUNC_10("nfs_fhget: iget failed with error %ld\n", FUNC_5(VAR_45));
 goto out;
}
