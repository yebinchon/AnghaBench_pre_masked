
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_mount_data {int mounted_uid; int uid; int gid; int file_mode; int dir_mode; } ;
struct compat_smb_mount_data {scalar_t__ version; int mounted_uid; int uid; int gid; int file_mode; int dir_mode; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void *FUNC_0(void *VAR_1)
{
 struct smb_mount_data *VAR_2 = VAR_1;
 struct compat_smb_mount_data *VAR_3 = VAR_1;

 if (VAR_3->version != VAR_0)
  goto out;
 VAR_2->dir_mode = VAR_3->dir_mode;
 VAR_2->file_mode = VAR_3->file_mode;
 VAR_2->gid = VAR_3->gid;
 VAR_2->uid = VAR_3->uid;
 VAR_2->mounted_uid = VAR_3->mounted_uid;
 out:
 return VAR_1;
}
