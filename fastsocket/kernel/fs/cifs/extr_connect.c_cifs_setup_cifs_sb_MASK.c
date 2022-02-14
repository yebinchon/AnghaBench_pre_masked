
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {scalar_t__ dynperm; scalar_t__ cifs_acl; scalar_t__ sfu_emul; scalar_t__ mfsymlinks; scalar_t__ direct_io; scalar_t__ strict_io; scalar_t__ multiuser; scalar_t__ fsc; scalar_t__ override_gid; scalar_t__ override_uid; int backupgid; scalar_t__ backupgid_specified; int backupuid; scalar_t__ backupuid_specified; scalar_t__ rwpidforward; scalar_t__ mand_lock; scalar_t__ nostrictsync; scalar_t__ nobrl; scalar_t__ no_xattr; scalar_t__ remap; scalar_t__ server_ino; scalar_t__ setuids; scalar_t__ noperm; int local_nls; int actimeo; int dir_mode; int file_mode; int linux_gid; int linux_uid; int * prepath; } ;
struct cifs_sb_info {int mnt_cifs_flags; int mnt_backupgid; int mnt_backupuid; int local_nls; int actimeo; int mnt_dir_mode; int mnt_file_mode; int mnt_gid; int mnt_uid; scalar_t__ prepathlen; int * prepath; int tlink_tree; int tlink_tree_lock; int prune_tlinks; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (int *,int ) ;
 int VAR_21 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_22 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(struct smb_vol *VAR_23,
   struct cifs_sb_info *VAR_24)
{
 FUNC_0(&VAR_24->prune_tlinks, VAR_22);

 FUNC_3(&VAR_24->tlink_tree_lock);
 VAR_24->tlink_tree = VAR_21;


 VAR_24->prepath = VAR_23->prepath;
 if (VAR_24->prepath) {
  VAR_24->prepathlen = FUNC_4(VAR_24->prepath);





  VAR_23->prepath = ((void*)0);
 } else
  VAR_24->prepathlen = 0;
 VAR_24->mnt_uid = VAR_23->linux_uid;
 VAR_24->mnt_gid = VAR_23->linux_gid;
 VAR_24->mnt_file_mode = VAR_23->file_mode;
 VAR_24->mnt_dir_mode = VAR_23->dir_mode;
 FUNC_2(1, "file mode: 0x%x  dir mode: 0x%x",
  VAR_24->mnt_file_mode, VAR_24->mnt_dir_mode);

 VAR_24->actimeo = VAR_23->actimeo;
 VAR_24->local_nls = VAR_23->local_nls;

 if (VAR_23->noperm)
  VAR_24->mnt_cifs_flags |= VAR_12;
 if (VAR_23->setuids)
  VAR_24->mnt_cifs_flags |= VAR_18;
 if (VAR_23->server_ino)
  VAR_24->mnt_cifs_flags |= VAR_17;
 if (VAR_23->remap)
  VAR_24->mnt_cifs_flags |= VAR_6;
 if (VAR_23->no_xattr)
  VAR_24->mnt_cifs_flags |= VAR_13;
 if (VAR_23->sfu_emul)
  VAR_24->mnt_cifs_flags |= VAR_20;
 if (VAR_23->nobrl)
  VAR_24->mnt_cifs_flags |= VAR_11;
 if (VAR_23->nostrictsync)
  VAR_24->mnt_cifs_flags |= VAR_10;
 if (VAR_23->mand_lock)
  VAR_24->mnt_cifs_flags |= VAR_9;
 if (VAR_23->rwpidforward)
  VAR_24->mnt_cifs_flags |= VAR_16;
 if (VAR_23->cifs_acl)
  VAR_24->mnt_cifs_flags |= VAR_0;
 if (VAR_23->backupuid_specified) {
  VAR_24->mnt_cifs_flags |= VAR_2;
  VAR_24->mnt_backupuid = VAR_23->backupuid;
 }
 if (VAR_23->backupgid_specified) {
  VAR_24->mnt_cifs_flags |= VAR_1;
  VAR_24->mnt_backupgid = VAR_23->backupgid;
 }
 if (VAR_23->override_uid)
  VAR_24->mnt_cifs_flags |= VAR_15;
 if (VAR_23->override_gid)
  VAR_24->mnt_cifs_flags |= VAR_14;
 if (VAR_23->dynperm)
  VAR_24->mnt_cifs_flags |= VAR_4;
 if (VAR_23->fsc)
  VAR_24->mnt_cifs_flags |= VAR_5;
 if (VAR_23->multiuser)
  VAR_24->mnt_cifs_flags |= (VAR_8 |
         VAR_12);
 if (VAR_23->strict_io)
  VAR_24->mnt_cifs_flags |= VAR_19;
 if (VAR_23->direct_io) {
  FUNC_2(1, "mounting share using direct i/o");
  VAR_24->mnt_cifs_flags |= VAR_3;
 }
 if (VAR_23->mfsymlinks) {
  if (VAR_23->sfu_emul) {
   FUNC_1(1, "mount option mfsymlinks ignored if sfu "
       "mount option is used");
  } else {
   VAR_24->mnt_cifs_flags |= VAR_7;
  }
 }

 if ((VAR_23->cifs_acl) && (VAR_23->dynperm))
  FUNC_1(1, "mount option dynperm ignored if cifsacl "
      "mount option supported");
}
