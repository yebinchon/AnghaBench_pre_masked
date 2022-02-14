
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct TYPE_5__ {TYPE_3__* dentry; } ;
struct file {int f_pos; TYPE_1__ f_path; struct cifsFileInfo* private_data; } ;
struct cifs_tcon {TYPE_2__* ses; scalar_t__ unix_ext; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct TYPE_8__ {int endOfSearch; int info_level; } ;
struct cifsFileInfo {int invalidHandle; TYPE_4__ srch_inf; int netfid; struct tcon_link* tlink; } ;
struct TYPE_7__ {int d_sb; } ;
struct TYPE_6__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,struct cifs_tcon*,char*,int ,int *,TYPE_4__*,int,int ) ;
 int FUNC_1 (struct cifs_sb_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct tcon_link*) ;
 int FUNC_4 (struct tcon_link*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int,char*,char*,int ) ;
 struct tcon_link* FUNC_7 (struct tcon_link*) ;
 int FUNC_8 (struct tcon_link*) ;
 struct tcon_link* FUNC_9 (struct cifs_sb_info*) ;
 int FUNC_10 (char*) ;
 struct cifsFileInfo* FUNC_11 (int,int ) ;
 struct cifs_tcon* FUNC_12 (struct tcon_link*) ;

__attribute__((used)) static int FUNC_13(const int VAR_11, struct file *VAR_12)
{
 int VAR_13 = 0;
 char *VAR_14 = ((void*)0);
 struct cifsFileInfo *VAR_15;
 struct cifs_sb_info *VAR_16 = FUNC_2(VAR_12->f_path.dentry->d_sb);
 struct tcon_link *VAR_17 = ((void*)0);
 struct cifs_tcon *VAR_18;

 if (VAR_12->private_data == ((void*)0)) {
  VAR_17 = FUNC_9(VAR_16);
  if (FUNC_3(VAR_17))
   return FUNC_4(VAR_17);

  VAR_15 = FUNC_11(sizeof(struct cifsFileInfo), VAR_6);
  if (VAR_15 == ((void*)0)) {
   VAR_13 = -VAR_4;
   goto error_exit;
  }
  VAR_12->private_data = VAR_15;
  VAR_15->tlink = FUNC_7(VAR_17);
  VAR_18 = FUNC_12(VAR_17);
 } else {
  VAR_15 = VAR_12->private_data;
  VAR_18 = FUNC_12(VAR_15->tlink);
 }

 VAR_15->invalidHandle = 1;
 VAR_15->srch_inf.endOfSearch = 0;

 VAR_14 = FUNC_5(VAR_12->f_path.dentry);
 if (VAR_14 == ((void*)0)) {
  VAR_13 = -VAR_4;
  goto error_exit;
 }

 FUNC_6(1, "Full path: %s start at: %lld", VAR_14, VAR_12->f_pos);

ffirst_retry:



 if (VAR_18->unix_ext)
  VAR_15->srch_inf.info_level = VAR_10;
 else if ((VAR_18->ses->capabilities &
   (VAR_1 | VAR_0)) == 0) {
  VAR_15->srch_inf.info_level = VAR_9;
 } else if (VAR_16->mnt_cifs_flags & VAR_3) {
  VAR_15->srch_inf.info_level = VAR_8;
 } else {
  VAR_15->srch_inf.info_level = VAR_7;
 }

 VAR_13 = FUNC_0(VAR_11, VAR_18, VAR_14, VAR_16->local_nls,
  &VAR_15->netfid, &VAR_15->srch_inf,
  VAR_16->mnt_cifs_flags &
   VAR_2, FUNC_1(VAR_16));
 if (VAR_13 == 0)
  VAR_15->invalidHandle = 0;



 else if ((VAR_13 == -VAR_5) &&
  (VAR_16->mnt_cifs_flags & VAR_3)) {
  VAR_16->mnt_cifs_flags &= ~VAR_3;
  goto ffirst_retry;
 }
error_exit:
 FUNC_10(VAR_14);
 FUNC_8(VAR_17);
 return VAR_13;
}
