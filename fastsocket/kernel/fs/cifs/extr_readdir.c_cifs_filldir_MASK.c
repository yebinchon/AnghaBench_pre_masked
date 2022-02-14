
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct qstr {char* name; int len; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {int f_pos; int f_dentry; TYPE_2__ f_path; struct cifsFileInfo* private_data; } ;
struct dentry {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifs_fattr {int cf_dtype; scalar_t__ cf_uniqueid; int cf_flags; } ;
struct TYPE_7__ {scalar_t__ info_level; int unicode; } ;
struct cifsFileInfo {TYPE_3__ srch_inf; } ;
typedef int ino_t ;
typedef int (* filldir_t ) (void*,char*,int ,int ,int ,int ) ;
struct TYPE_8__ {int basic; } ;
struct TYPE_5__ {struct super_block* d_sb; } ;
typedef int FIND_FILE_STANDARD_INFO ;
typedef TYPE_4__ FILE_UNIX_INFO ;
typedef int FILE_DIRECTORY_INFO ;


 scalar_t__ FUNC_0 (struct cifs_fattr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cifs_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (struct cifs_sb_info*) ;
 int FUNC_4 (struct cifs_fattr*,int *,struct cifs_sb_info*) ;
 int FUNC_5 (char*,struct cifsFileInfo*) ;
 int FUNC_6 (struct qstr*,char*,scalar_t__,int ,struct cifs_sb_info*,unsigned int,scalar_t__*) ;
 struct dentry* FUNC_7 (int ,struct qstr*,struct cifs_fattr*) ;
 int FUNC_8 (struct cifs_fattr*,int *,struct cifs_sb_info*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct cifs_fattr*,int *,struct cifs_sb_info*) ;
 int FUNC_11 (struct dentry*) ;
 scalar_t__ FUNC_12 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_13(char *VAR_9, struct file *VAR_10, filldir_t VAR_11,
   void *VAR_12, char *VAR_13, unsigned int VAR_14)
{
 int VAR_15 = 0;
 struct qstr VAR_16;
 struct cifsFileInfo *VAR_17;
 u64 VAR_18;
 ino_t VAR_19;
 struct super_block *VAR_20;
 struct cifs_sb_info *VAR_21;
 struct dentry *VAR_22;
 struct cifs_fattr VAR_23;




 if ((VAR_12 == ((void*)0)) || (VAR_10 == ((void*)0)))
  return -VAR_3;

 VAR_17 = VAR_10->private_data;

 if ((VAR_13 == ((void*)0)) || (VAR_9 == ((void*)0)) || (VAR_17 == ((void*)0)))
  return -VAR_4;

 VAR_15 = FUNC_5(VAR_9, VAR_17);

 if (VAR_15 != 0)
  return 0;

 VAR_20 = VAR_10->f_path.dentry->d_sb;
 VAR_21 = FUNC_1(VAR_20);

 VAR_16.name = VAR_13;
 VAR_15 = FUNC_6(&VAR_16, VAR_9,
   VAR_17->srch_inf.info_level,
   VAR_17->srch_inf.unicode, VAR_21,
   VAR_14, &VAR_18 );

 if (VAR_15)
  return VAR_15;

 if (VAR_17->srch_inf.info_level == VAR_8)
  FUNC_10(&VAR_23,
     &((FILE_UNIX_INFO *) VAR_9)->basic,
     VAR_21);
 else if (VAR_17->srch_inf.info_level == VAR_7)
  FUNC_8(&VAR_23, (FIND_FILE_STANDARD_INFO *)
     VAR_9, VAR_21);
 else
  FUNC_4(&VAR_23, (FILE_DIRECTORY_INFO *)
     VAR_9, VAR_21);

 if (VAR_18 && (VAR_21->mnt_cifs_flags & VAR_2)) {
  VAR_23.cf_uniqueid = VAR_18;
 } else {
  VAR_23.cf_uniqueid = FUNC_12(VAR_20, VAR_6);
  FUNC_3(VAR_21);
 }

 if ((VAR_21->mnt_cifs_flags & VAR_1) &&
     FUNC_0(&VAR_23))





  VAR_23.cf_flags |= VAR_0;

 VAR_19 = FUNC_9(VAR_23.cf_uniqueid);
 VAR_22 = FUNC_7(VAR_10->f_dentry, &VAR_16, &VAR_23);

 VAR_15 = VAR_11(VAR_12, VAR_16.name, VAR_16.len, VAR_10->f_pos,
       VAR_19, VAR_23.cf_dtype);
 if (VAR_15) {
  FUNC_2(1, "filldir rc = %d", VAR_15);
  VAR_15 = -VAR_5;
 }
 FUNC_11(VAR_22);
 return VAR_15;
}
