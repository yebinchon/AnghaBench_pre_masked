
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_sb; int i_mapping; } ;
struct TYPE_7__ {int Capability; } ;
struct cifs_tcon {scalar_t__ unix_ext; TYPE_3__ fsUnixInfo; TYPE_2__* ses; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; int mnt_file_mode; } ;
struct cifsInodeInfo {int dummy; } ;
struct cifsFileInfo {int invalidHandle; unsigned int f_flags; int fh_mutex; int netfid; TYPE_4__* dentry; int tlink; } ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_8__ {struct inode* d_inode; } ;
struct TYPE_6__ {int capabilities; TYPE_1__* server; } ;
struct TYPE_5__ {scalar_t__ oplocks; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct cifs_tcon*,char*,int,int,int,int *,int*,int *,int ,int) ;
 struct cifsInodeInfo* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (struct cifs_sb_info*) ;
 char* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (struct inode**,char*,int *,int ,int,int *) ;
 int FUNC_10 (struct inode**,char*,int ,int) ;
 int FUNC_11 (char*,int *,int ,int ,unsigned int,int*,int *,int) ;
 int FUNC_12 (struct cifsFileInfo*) ;
 int FUNC_13 (struct cifsInodeInfo*,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 struct cifs_tcon* FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(struct cifsFileInfo *VAR_12, bool VAR_13)
{
 int VAR_14 = -VAR_5;
 int VAR_15;
 __u32 VAR_16;
 struct cifs_sb_info *VAR_17;
 struct cifs_tcon *VAR_18;
 struct cifsInodeInfo *VAR_19;
 struct inode *VAR_20;
 char *VAR_21 = ((void*)0);
 int VAR_22;
 int VAR_23 = VAR_7;
 int VAR_24 = VAR_3;
 __u16 VAR_25;

 VAR_15 = FUNC_4();
 FUNC_18(&VAR_12->fh_mutex);
 if (!VAR_12->invalidHandle) {
  FUNC_19(&VAR_12->fh_mutex);
  VAR_14 = 0;
  FUNC_3(VAR_15);
  return VAR_14;
 }

 VAR_20 = VAR_12->dentry->d_inode;
 VAR_17 = FUNC_2(VAR_20->i_sb);
 VAR_18 = FUNC_20(VAR_12->tlink);





 VAR_21 = FUNC_6(VAR_12->dentry);
 if (VAR_21 == ((void*)0)) {
  VAR_14 = -VAR_6;
  FUNC_19(&VAR_12->fh_mutex);
  FUNC_3(VAR_15);
  return VAR_14;
 }

 FUNC_7(1, "inode = 0x%p file flags 0x%x for %s",
   VAR_20, VAR_12->f_flags, VAR_21);

 if (VAR_18->ses->server->oplocks)
  VAR_16 = VAR_11;
 else
  VAR_16 = 0;

 if (VAR_18->unix_ext && (VAR_18->ses->capabilities & VAR_0) &&
     (VAR_2 &
   FUNC_16(VAR_18->fsUnixInfo.Capability))) {





  unsigned int VAR_26 = VAR_12->f_flags &
      ~(VAR_8 | VAR_9 | VAR_10);

  VAR_14 = FUNC_11(VAR_21, ((void*)0), VAR_20->i_sb,
    VAR_17->mnt_file_mode ,
    VAR_26, &VAR_16, &VAR_25, VAR_15);
  if (VAR_14 == 0) {
   FUNC_7(1, "posix reopen succeeded");
   goto reopen_success;
  }


 }

 VAR_22 = FUNC_8(VAR_12->f_flags);

 if (FUNC_5(VAR_17))
  VAR_24 |= VAR_4;







 VAR_14 = FUNC_0(VAR_15, VAR_18, VAR_21, VAR_23, VAR_22,
    VAR_24, &VAR_25, &VAR_16, ((void*)0),
    VAR_17->local_nls, VAR_17->mnt_cifs_flags &
    VAR_1);
 if (VAR_14) {
  FUNC_19(&VAR_12->fh_mutex);
  FUNC_7(1, "cifs_open returned 0x%x", VAR_14);
  FUNC_7(1, "oplock: %d", VAR_16);
  goto reopen_error_exit;
 }

reopen_success:
 VAR_12->netfid = VAR_25;
 VAR_12->invalidHandle = 0;
 FUNC_19(&VAR_12->fh_mutex);
 VAR_19 = FUNC_1(VAR_20);

 if (VAR_13) {
  VAR_14 = FUNC_14(VAR_20->i_mapping);
  FUNC_17(VAR_20->i_mapping, VAR_14);

  if (VAR_18->unix_ext)
   VAR_14 = FUNC_10(&VAR_20,
    VAR_21, VAR_20->i_sb, VAR_15);
  else
   VAR_14 = FUNC_9(&VAR_20,
    VAR_21, ((void*)0), VAR_20->i_sb,
    VAR_15, ((void*)0));
 }






 FUNC_13(VAR_19, VAR_16);

 FUNC_12(VAR_12);

reopen_error_exit:
 FUNC_15(VAR_21);
 FUNC_3(VAR_15);
 return VAR_14;
}
