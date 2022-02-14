
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; int i_mode; int i_sb; } ;
struct cifs_sb_info {scalar_t__ actimeo; int mnt_cifs_flags; } ;
struct cifsInodeInfo {scalar_t__ time; scalar_t__ clientCanCacheRead; } ;


 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_4(struct inode *VAR_3)
{
 struct cifsInodeInfo *VAR_4 = FUNC_0(VAR_3);
 struct cifs_sb_info *VAR_5 = FUNC_1(VAR_3->i_sb);

 if (VAR_4->clientCanCacheRead)
  return 0;

 if (!VAR_2)
  return 1;

 if (VAR_4->time == 0)
  return 1;

 if (!FUNC_3(VAR_1, VAR_4->time,
    VAR_4->time + VAR_5->actimeo))
  return 1;


 if (!(VAR_5->mnt_cifs_flags & VAR_0) &&
     FUNC_2(VAR_3->i_mode) && VAR_3->i_nlink != 1)
  return 1;

 return 0;
}
