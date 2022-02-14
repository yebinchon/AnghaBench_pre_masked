
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct TYPE_10__ {TYPE_2__* file; } ;
struct TYPE_11__ {TYPE_3__ open; } ;
struct nameidata {int flags; TYPE_4__ intent; } ;
struct inode {int i_mode; scalar_t__ i_gid; scalar_t__ i_uid; int i_sb; } ;
typedef struct tcon_link file ;
struct dentry {int dummy; } ;
struct cifs_unix_set_info_args {int mode; void* ctime; void* atime; void* mtime; void* gid; void* uid; int device; } ;
struct TYPE_12__ {int Capability; } ;
struct cifs_tcon {scalar_t__ unix_ext; TYPE_6__* ses; TYPE_5__ fsUnixInfo; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct cifsFileInfo {int dummy; } ;
typedef void* __u64 ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_14__ {int tgid; } ;
struct TYPE_13__ {int capabilities; TYPE_1__* server; } ;
struct TYPE_9__ {int f_flags; } ;
struct TYPE_8__ {scalar_t__ oplocks; } ;
typedef char FILE_ALL_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct cifs_tcon*,int ) ;
 int FUNC_1 (int,struct cifs_tcon*,char*,int,int,int,int *,int*,char*,int ,int) ;
 int FUNC_2 (int,struct cifs_tcon*,struct cifs_unix_set_info_args*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cifs_sb_info* FUNC_3 (int ) ;
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
 int FUNC_4 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct tcon_link*) ;
 int VAR_24 ;
 void* VAR_25 ;
 int FUNC_7 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_8 (struct tcon_link*) ;
 int VAR_30 ;
 int FUNC_9 (int,struct cifs_tcon*,char*,int,int,int,int *,int*,char*,int ,int) ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_10 (struct cifs_sb_info*) ;
 char* FUNC_11 (struct dentry*) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (struct inode**,char*,char*,int ,int,int *) ;
 int FUNC_14 (struct inode**,char*,int ,int) ;
 struct cifsFileInfo* FUNC_15 (int ,struct tcon_link*,struct tcon_link*,int) ;
 int FUNC_16 (char*,struct inode**,int ,int,int,int*,int *,int) ;
 int FUNC_17 (struct tcon_link*) ;
 struct tcon_link* FUNC_18 (struct cifs_sb_info*) ;
 TYPE_7__* VAR_33 ;
 scalar_t__ FUNC_19 () ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (struct tcon_link*) ;
 int VAR_34 ;
 int FUNC_22 (char*) ;
 char* FUNC_23 (int,int ) ;
 int FUNC_24 (int ) ;
 struct tcon_link* FUNC_25 (struct nameidata*,struct dentry*,int ) ;
 int FUNC_26 (struct cifs_tcon*,struct dentry*,struct inode*) ;
 struct cifs_tcon* FUNC_27 (struct tcon_link*) ;

int
FUNC_28(struct inode *VAR_35, struct dentry *VAR_36, int VAR_37,
  struct nameidata *VAR_38)
{
 int VAR_39 = -VAR_12;
 int VAR_40;
 int VAR_41 = VAR_7;
 __u32 VAR_42 = 0;
 int VAR_43;







 int VAR_44 = VAR_21 | VAR_22;
 __u16 VAR_45;
 struct cifs_sb_info *VAR_46;
 struct tcon_link *VAR_47;
 struct cifs_tcon *VAR_48;
 char *VAR_49 = ((void*)0);
 FILE_ALL_INFO *VAR_50 = ((void*)0);
 struct inode *VAR_51 = ((void*)0);
 int VAR_52 = VAR_18;

 VAR_40 = FUNC_5();

 VAR_46 = FUNC_3(VAR_35->i_sb);
 VAR_47 = FUNC_18(VAR_46);
 if (FUNC_6(VAR_47)) {
  FUNC_4(VAR_40);
  return FUNC_8(VAR_47);
 }
 VAR_48 = FUNC_27(VAR_47);

 if (VAR_48->ses->server->oplocks)
  VAR_42 = VAR_30;

 if (VAR_38 && (VAR_38->flags & VAR_24))
  VAR_43 = VAR_38->intent.open.file->f_flags;
 else
  VAR_43 = VAR_28 | VAR_26;

 VAR_49 = FUNC_11(VAR_36);
 if (VAR_49 == ((void*)0)) {
  VAR_39 = -VAR_13;
  goto cifs_create_out;
 }

 if (VAR_48->unix_ext && (VAR_48->ses->capabilities & VAR_1) &&
     (VAR_6 &
   FUNC_24(VAR_48->fsUnixInfo.Capability))) {
  VAR_39 = FUNC_16(VAR_49, &VAR_51,
   VAR_35->i_sb, VAR_37, VAR_43, &VAR_42, &VAR_45, VAR_40);





  if (VAR_39 == 0) {
   if (VAR_51 == ((void*)0))
    goto cifs_create_get_file_info;
   else
    goto cifs_create_set_dentry;
  } else if ((VAR_39 != -VAR_11) && (VAR_39 != -VAR_15) &&
    (VAR_39 != -VAR_14) && (VAR_39 != -VAR_10))
   goto cifs_create_out;




 }

 if (VAR_38 && (VAR_38->flags & VAR_24)) {


  VAR_44 = 0;
  if (FUNC_7(VAR_43) & VAR_19)
   VAR_44 |= VAR_21;
  if (FUNC_7(VAR_43) & VAR_20)
   VAR_44 |= VAR_22;

  if ((VAR_43 & (VAR_26 | VAR_27)) == (VAR_26 | VAR_27))
   VAR_52 = VAR_16;
  else if ((VAR_43 & (VAR_26 | VAR_29)) == (VAR_26 | VAR_29))
   VAR_52 = VAR_18;
  else if ((VAR_43 & VAR_26) == VAR_26)
   VAR_52 = VAR_17;
  else
   FUNC_12(1, "Create flag not set in create function");
 }




 VAR_50 = FUNC_23(sizeof(FILE_ALL_INFO), VAR_23);
 if (VAR_50 == ((void*)0)) {
  VAR_39 = -VAR_13;
  goto cifs_create_out;
 }





 if (!VAR_48->unix_ext && (VAR_37 & VAR_32) == 0)
  VAR_41 |= VAR_9;

 if (FUNC_10(VAR_46))
  VAR_41 |= VAR_8;

 if (VAR_48->ses->capabilities & VAR_0)
  VAR_39 = FUNC_1(VAR_40, VAR_48, VAR_49, VAR_52,
    VAR_44, VAR_41,
    &VAR_45, &VAR_42, VAR_50, VAR_46->local_nls,
    VAR_46->mnt_cifs_flags & VAR_4);
 else
  VAR_39 = -VAR_11;

 if (VAR_39 == -VAR_11) {

  VAR_39 = FUNC_9(VAR_40, VAR_48, VAR_49, VAR_52,
   VAR_44, VAR_41,
   &VAR_45, &VAR_42, VAR_50, VAR_46->local_nls,
   VAR_46->mnt_cifs_flags & VAR_4);
 }
 if (VAR_39) {
  FUNC_12(1, "cifs_create returned 0x%x", VAR_39);
  goto cifs_create_out;
 }



 if ((VAR_48->unix_ext) && (VAR_42 & VAR_2)) {
  struct cifs_unix_set_info_args VAR_53 = {
    .mode = VAR_37,
    .ctime = VAR_25,
    .atime = VAR_25,
    .mtime = VAR_25,
    .device = 0,
  };

  if (VAR_46->mnt_cifs_flags & VAR_5) {
   VAR_53.uid = (__u64) FUNC_20();
   if (VAR_35->i_mode & VAR_31)
    VAR_53.gid = (__u64) VAR_35->i_gid;
   else
    VAR_53.gid = (__u64) FUNC_19();
  } else {
   VAR_53.uid = VAR_25;
   VAR_53.gid = VAR_25;
  }
  FUNC_2(VAR_40, VAR_48, &VAR_53, VAR_45,
     VAR_33->tgid);
 } else {





 }

cifs_create_get_file_info:

 if (VAR_48->unix_ext)
  VAR_39 = FUNC_14(&VAR_51, VAR_49,
           VAR_35->i_sb, VAR_40);
 else {
  VAR_39 = FUNC_13(&VAR_51, VAR_49, VAR_50,
      VAR_35->i_sb, VAR_40, &VAR_45);
  if (VAR_51) {
   if (VAR_46->mnt_cifs_flags & VAR_3)
    VAR_51->i_mode = VAR_37;
   if ((VAR_42 & VAR_2) &&
       (VAR_46->mnt_cifs_flags & VAR_5)) {
    VAR_51->i_uid = FUNC_20();
    if (VAR_35->i_mode & VAR_31)
     VAR_51->i_gid = VAR_35->i_gid;
    else
     VAR_51->i_gid = FUNC_19();
   }
  }
 }

cifs_create_set_dentry:
 if (VAR_39 == 0)
  FUNC_26(VAR_48, VAR_36, VAR_51);
 else
  FUNC_12(1, "Create worked, get_inode_info failed rc = %d", VAR_39);

 if (VAR_51 && VAR_38 && (VAR_38->flags & VAR_24)) {
  struct cifsFileInfo *VAR_54;
  struct file *VAR_55;

  VAR_55 = FUNC_25(VAR_38, VAR_36, VAR_34);
  if (FUNC_6(VAR_55)) {
   VAR_39 = FUNC_8(VAR_55);
   FUNC_0(VAR_40, VAR_48, VAR_45);
   goto cifs_create_out;
  }

  VAR_54 = FUNC_15(VAR_45, VAR_55, VAR_47, VAR_42);
  if (VAR_54 == ((void*)0)) {
   FUNC_21(VAR_55);
   FUNC_0(VAR_40, VAR_48, VAR_45);
   VAR_39 = -VAR_13;
  }
 } else {
  FUNC_0(VAR_40, VAR_48, VAR_45);
 }

cifs_create_out:
 FUNC_22(VAR_50);
 FUNC_22(VAR_49);
 FUNC_17(VAR_47);
 FUNC_4(VAR_40);
 return VAR_39;
}
