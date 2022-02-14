
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecryptfs_crypt_stat {scalar_t__ file_version; int * mount_crypt_stat; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {int mount_crypt_stat; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ecryptfs_crypt_stat*,char*,struct dentry*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct ecryptfs_crypt_stat*,char*,int*) ;
 int FUNC_4 (struct ecryptfs_crypt_stat*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (struct ecryptfs_crypt_stat*,char*,int*,int) ;
 int FUNC_7 (struct ecryptfs_crypt_stat*) ;

__attribute__((used)) static int FUNC_8(char *VAR_5,
          struct ecryptfs_crypt_stat *VAR_6,
          struct dentry *VAR_7,
          int VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;

 FUNC_4(VAR_6);
 VAR_6->mount_crypt_stat = &FUNC_5(
  VAR_7->d_sb)->mount_crypt_stat;
 VAR_10 = VAR_0;
 VAR_9 = FUNC_0(VAR_5 + VAR_10);
 if (VAR_9 == 0) {
  VAR_9 = -VAR_2;
  goto out;
 }
 VAR_10 += VAR_4;
 VAR_9 = FUNC_3(VAR_6, (VAR_5 + VAR_10),
        &VAR_11);
 if (VAR_9) {
  FUNC_2(VAR_3, "Error processing flags\n");
  goto out;
 }
 if (VAR_6->file_version > VAR_1) {
  FUNC_2(VAR_3, "File version is [%d]; only "
    "file version [%d] is supported by this "
    "version of eCryptfs\n",
    VAR_6->file_version,
    VAR_1);
  VAR_9 = -VAR_2;
  goto out;
 }
 VAR_10 += VAR_11;
 if (VAR_6->file_version >= 1) {
  VAR_9 = FUNC_6(VAR_6, (VAR_5 + VAR_10),
        &VAR_11, VAR_8);
  if (VAR_9) {
   FUNC_2(VAR_3, "Error reading header "
     "metadata; rc = [%d]\n", VAR_9);
  }
  VAR_10 += VAR_11;
 } else
  FUNC_7(VAR_6);
 VAR_9 = FUNC_1(VAR_6, (VAR_5 + VAR_10),
           VAR_7);
out:
 return VAR_9;
}
