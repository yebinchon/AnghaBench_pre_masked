
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int name; } ;
struct dentry {int d_sb; struct dentry* d_parent; TYPE_1__ d_name; } ;
struct cifs_tcon {int Flags; int treeName; } ;
struct cifs_sb_info {int prepathlen; int mnt_cifs_flags; int prepath; } ;


 char FUNC_0 (struct cifs_sb_info*) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int ,char*,char*) ;
 struct cifs_tcon* FUNC_5 (struct cifs_sb_info*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int,int ) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int ,scalar_t__) ;

char *
FUNC_10(struct dentry *VAR_4)
{
 struct dentry *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 char *VAR_9;
 char VAR_10;
 struct cifs_sb_info *VAR_11 = FUNC_1(VAR_4->d_sb);
 struct cifs_tcon *VAR_12 = FUNC_5(VAR_11);

 if (VAR_4 == ((void*)0))
  return ((void*)0);



 VAR_10 = FUNC_0(VAR_11);
 VAR_7 = VAR_11->prepathlen;
 if (VAR_12->Flags & VAR_3)
  VAR_8 = FUNC_9(VAR_12->treeName, VAR_2 + 1);
 else
  VAR_8 = 0;
cifs_bp_rename_retry:
 VAR_6 = VAR_7 + VAR_8;
 for (VAR_5 = VAR_4; !FUNC_2(VAR_5);) {
  VAR_6 += (1 + VAR_5->d_name.len);
  VAR_5 = VAR_5->d_parent;
  if (VAR_5 == ((void*)0)) {
   FUNC_3(1, "corrupt dentry");
   return ((void*)0);
  }
 }

 VAR_9 = FUNC_7(VAR_6+1, VAR_1);
 if (VAR_9 == ((void*)0))
  return VAR_9;
 VAR_9[VAR_6] = 0;
 for (VAR_5 = VAR_4; !FUNC_2(VAR_5);) {
  VAR_6 -= 1 + VAR_5->d_name.len;
  if (VAR_6 < 0) {
   break;
  } else {
   VAR_9[VAR_6] = VAR_10;
   FUNC_8(VAR_9 + VAR_6 + 1, VAR_5->d_name.name,
    VAR_5->d_name.len);
   FUNC_4(0, "name: %s", VAR_9 + VAR_6);
  }
  VAR_5 = VAR_5->d_parent;
  if (VAR_5 == ((void*)0)) {
   FUNC_3(1, "corrupt dentry");
   FUNC_6(VAR_9);
   return ((void*)0);
  }
 }
 if (VAR_6 != VAR_7 + VAR_8) {
  FUNC_3(1, "did not end path lookup where expected namelen is %d",
   VAR_6);



  FUNC_6(VAR_9);
  goto cifs_bp_rename_retry;
 }







 if (VAR_8) {
  FUNC_8(VAR_9, VAR_12->treeName, VAR_8);
  if (VAR_11->mnt_cifs_flags & VAR_0) {
   int VAR_13;
   for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
    if (VAR_9[VAR_13] == '\\')
     VAR_9[VAR_13] = '/';
   }
  }
 }
 FUNC_8(VAR_9 + VAR_8, FUNC_1(VAR_4->d_sb)->prepath, VAR_7);
 return VAR_9;
}
