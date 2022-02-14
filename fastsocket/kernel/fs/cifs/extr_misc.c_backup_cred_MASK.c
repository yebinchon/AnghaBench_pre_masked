
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_sb_info {int mnt_cifs_flags; scalar_t__ mnt_backupuid; int mnt_backupgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;

bool
FUNC_2(struct cifs_sb_info *VAR_2)
{
 if (VAR_2->mnt_cifs_flags & VAR_1) {
  if (VAR_2->mnt_backupuid == FUNC_0())
   return 1;
 }
 if (VAR_2->mnt_cifs_flags & VAR_0) {
  if (FUNC_1(VAR_2->mnt_backupgid))
   return 1;
 }

 return 0;
}
