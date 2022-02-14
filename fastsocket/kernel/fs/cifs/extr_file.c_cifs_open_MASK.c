
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct inode {int i_mode; int i_sb; } ;
struct TYPE_6__ {TYPE_5__* dentry; } ;
struct file {int f_flags; TYPE_1__ f_path; } ;
struct cifs_unix_set_info_args {int device; int mtime; int atime; int ctime; int gid; int uid; int mode; } ;
struct TYPE_8__ {int Capability; } ;
struct cifs_tcon {int broken_posix_open; scalar_t__ unix_ext; TYPE_4__* ses; TYPE_3__ fsUnixInfo; } ;
struct cifs_sb_info {int mnt_file_mode; } ;
struct cifsInodeInfo {int dummy; } ;
struct cifsFileInfo {int pid; } ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_10__ {int d_inode; } ;
struct TYPE_9__ {int capabilities; scalar_t__ serverNOS; int serverName; TYPE_2__* server; } ;
struct TYPE_7__ {scalar_t__ oplocks; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct cifs_tcon*,int ) ;
 int FUNC_1 (int,struct cifs_tcon*,struct cifs_unix_set_info_args*,int ,int ) ;
 int VAR_1 ;
 struct cifsInodeInfo* FUNC_2 (int ) ;
 struct cifs_sb_info* FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct tcon_link*) ;
 int VAR_9 ;
 int FUNC_7 (struct tcon_link*) ;
 int VAR_10 ;
 char* FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int,char*,int ,scalar_t__) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (struct inode*,struct file*) ;
 struct cifsFileInfo* FUNC_12 (int ,struct file*,struct tcon_link*,int) ;
 int FUNC_13 (char*,struct inode*,struct cifs_sb_info*,struct cifs_tcon*,int ,int*,int *,int) ;
 int FUNC_14 (char*,struct inode**,int ,int ,int ,int*,int *,int) ;
 int FUNC_15 (struct tcon_link*) ;
 struct tcon_link* FUNC_16 (struct cifs_sb_info*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ) ;
 struct cifs_tcon* FUNC_19 (struct tcon_link*) ;

int FUNC_20(struct inode *VAR_11, struct file *VAR_12)
{
 int VAR_13 = -VAR_3;
 int VAR_14;
 __u32 VAR_15;
 struct cifs_sb_info *VAR_16;
 struct cifs_tcon *VAR_17;
 struct tcon_link *VAR_18;
 struct cifsFileInfo *VAR_19 = ((void*)0);
 struct cifsInodeInfo *VAR_20;
 char *VAR_21 = ((void*)0);
 bool VAR_22 = 0;
 __u16 VAR_23;

 VAR_14 = FUNC_5();

 VAR_16 = FUNC_3(VAR_11->i_sb);
 VAR_18 = FUNC_16(VAR_16);
 if (FUNC_6(VAR_18)) {
  FUNC_4(VAR_14);
  return FUNC_7(VAR_18);
 }
 VAR_17 = FUNC_19(VAR_18);

 VAR_20 = FUNC_2(VAR_12->f_path.dentry->d_inode);

 VAR_21 = FUNC_8(VAR_12->f_path.dentry);
 if (VAR_21 == ((void*)0)) {
  VAR_13 = -VAR_6;
  goto out;
 }

 FUNC_10(1, "inode = 0x%p file flags are 0x%x for %s",
   VAR_11, VAR_12->f_flags, VAR_21);

 if (VAR_17->ses->server->oplocks)
  VAR_15 = VAR_10;
 else
  VAR_15 = 0;

 if (!VAR_17->broken_posix_open && VAR_17->unix_ext &&
     (VAR_17->ses->capabilities & VAR_0) &&
     (VAR_2 &
   FUNC_18(VAR_17->fsUnixInfo.Capability))) {

  VAR_13 = FUNC_14(VAR_21, &VAR_11, VAR_11->i_sb,
    VAR_16->mnt_file_mode ,
    VAR_12->f_flags, &VAR_15, &VAR_23, VAR_14);
  if (VAR_13 == 0) {
   FUNC_10(1, "posix open succeeded");
   VAR_22 = 1;
  } else if ((VAR_13 == -VAR_4) || (VAR_13 == -VAR_7)) {
   if (VAR_17->ses->serverNOS)
    FUNC_9(1, "server %s of type %s returned"
        " unexpected error on SMB posix open"
        ", disabling posix open support."
        " Check if server update available.",
        VAR_17->ses->serverName,
        VAR_17->ses->serverNOS);
   VAR_17->broken_posix_open = 1;
  } else if ((VAR_13 != -VAR_5) && (VAR_13 != -VAR_8) &&
    (VAR_13 != -VAR_7))
   goto out;


 }

 if (!VAR_22) {
  VAR_13 = FUNC_13(VAR_21, VAR_11, VAR_16, VAR_17,
      VAR_12->f_flags, &VAR_15, &VAR_23, VAR_14);
  if (VAR_13)
   goto out;
 }

 VAR_19 = FUNC_12(VAR_23, VAR_12, VAR_18, VAR_15);
 if (VAR_19 == ((void*)0)) {
  FUNC_0(VAR_14, VAR_17, VAR_23);
  VAR_13 = -VAR_6;
  goto out;
 }

 FUNC_11(VAR_11, VAR_12);

 if ((VAR_15 & VAR_1) && !VAR_22 && VAR_17->unix_ext) {


  struct cifs_unix_set_info_args VAR_24 = {
   .mode = VAR_11->i_mode,
   .uid = VAR_9,
   .gid = VAR_9,
   .ctime = VAR_9,
   .atime = VAR_9,
   .mtime = VAR_9,
   .device = 0,
  };
  FUNC_1(VAR_14, VAR_17, &VAR_24, VAR_23,
     VAR_19->pid);
 }

out:
 FUNC_17(VAR_21);
 FUNC_4(VAR_14);
 FUNC_15(VAR_18);
 return VAR_13;
}
