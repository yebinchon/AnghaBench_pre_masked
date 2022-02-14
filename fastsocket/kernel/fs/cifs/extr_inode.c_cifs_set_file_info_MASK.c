
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct iattr {int ia_valid; int ia_ctime; int ia_mtime; int ia_atime; } ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct cifsInodeInfo {void* cifsAttrs; } ;
struct cifsFileInfo {struct tcon_link* tlink; void* pid; int netfid; } ;
typedef void* __u32 ;
typedef int __u16 ;
struct TYPE_8__ {void* tgid; } ;
struct TYPE_7__ {int Attributes; scalar_t__ CreationTime; void* ChangeTime; void* LastWriteTime; void* LastAccessTime; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ FILE_BASIC_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct cifs_tcon*,int ) ;
 int FUNC_1 (int,struct cifs_tcon*,char*,int ,int,int ,int *,int*,int *,int ,int) ;
 int FUNC_2 (int,struct cifs_tcon*,TYPE_2__*,int ,void*) ;
 int FUNC_3 (int,struct cifs_tcon*,char*,TYPE_2__*,int ,int) ;
 struct cifsInodeInfo* FUNC_4 (struct inode*) ;
 int VAR_3 ;
 struct cifs_sb_info* FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (struct tcon_link*) ;
 int FUNC_7 (struct tcon_link*) ;
 int VAR_11 ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (struct cifsFileInfo*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct tcon_link*) ;
 struct tcon_link* FUNC_12 (struct cifs_sb_info*) ;
 int FUNC_13 (void*) ;
 void* FUNC_14 (int ) ;
 TYPE_3__* VAR_12 ;
 struct cifsFileInfo* FUNC_15 (struct cifsInodeInfo*,int) ;
 struct cifs_tcon* FUNC_16 (struct tcon_link*) ;

__attribute__((used)) static int
FUNC_17(struct inode *VAR_13, struct iattr *VAR_14, int VAR_15,
      char *VAR_16, __u32 VAR_17)
{
 int VAR_18;
 int VAR_19 = 0;
 __u16 VAR_20;
 __u32 VAR_21;
 bool VAR_22 = 0;
 struct cifsFileInfo *VAR_23;
 struct cifsInodeInfo *VAR_24 = FUNC_4(VAR_13);
 struct cifs_sb_info *VAR_25 = FUNC_5(VAR_13->i_sb);
 struct tcon_link *VAR_26 = ((void*)0);
 struct cifs_tcon *VAR_27;
 FILE_BASIC_INFO VAR_28;

 if (VAR_14 == ((void*)0))
  return -VAR_6;

 if (VAR_14->ia_valid & VAR_0) {
  VAR_22 = 1;
  VAR_28.LastAccessTime =
   FUNC_14(FUNC_10(VAR_14->ia_atime));
 } else
  VAR_28.LastAccessTime = 0;

 if (VAR_14->ia_valid & VAR_2) {
  VAR_22 = 1;
  VAR_28.LastWriteTime =
      FUNC_14(FUNC_10(VAR_14->ia_mtime));
 } else
  VAR_28.LastWriteTime = 0;







 if (VAR_22 && (VAR_14->ia_valid & VAR_1)) {
  FUNC_8(1, "CIFS - CTIME changed");
  VAR_28.ChangeTime =
      FUNC_14(FUNC_10(VAR_14->ia_ctime));
 } else
  VAR_28.ChangeTime = 0;

 VAR_28.CreationTime = 0;
 VAR_28.Attributes = FUNC_13(VAR_17);




 VAR_23 = FUNC_15(VAR_24, 1);
 if (VAR_23) {
  VAR_20 = VAR_23->netfid;
  VAR_21 = VAR_23->pid;
  VAR_27 = FUNC_16(VAR_23->tlink);
  goto set_via_filehandle;
 }

 VAR_26 = FUNC_12(VAR_25);
 if (FUNC_6(VAR_26)) {
  VAR_18 = FUNC_7(VAR_26);
  VAR_26 = ((void*)0);
  goto out;
 }
 VAR_27 = FUNC_16(VAR_26);





 if (!(VAR_27->ses->flags & VAR_4)) {
  VAR_18 = FUNC_3(VAR_15, VAR_27, VAR_16,
         &VAR_28, VAR_25->local_nls,
         VAR_25->mnt_cifs_flags &
     VAR_3);
  if (VAR_18 == 0) {
   VAR_24->cifsAttrs = VAR_17;
   goto out;
  } else if (VAR_18 != -VAR_8 && VAR_18 != -VAR_6)
   goto out;
 }

 FUNC_8(1, "calling SetFileInfo since SetPathInfo for "
   "times not supported by this server");
 VAR_18 = FUNC_1(VAR_15, VAR_27, VAR_16, VAR_9,
    VAR_11 | VAR_10,
    VAR_5, &VAR_20, &VAR_19,
    ((void*)0), VAR_25->local_nls,
    VAR_25->mnt_cifs_flags &
    VAR_3);

 if (VAR_18 != 0) {
  if (VAR_18 == -VAR_7)
   VAR_18 = -VAR_6;
  goto out;
 }

 VAR_21 = VAR_12->tgid;

set_via_filehandle:
 VAR_18 = FUNC_2(VAR_15, VAR_27, &VAR_28, VAR_20, VAR_21);
 if (!VAR_18)
  VAR_24->cifsAttrs = VAR_17;

 if (VAR_23 == ((void*)0))
  FUNC_0(VAR_15, VAR_27, VAR_20);
 else
  FUNC_9(VAR_23);
out:
 if (VAR_26 != ((void*)0))
  FUNC_11(VAR_26);
 return VAR_18;
}
