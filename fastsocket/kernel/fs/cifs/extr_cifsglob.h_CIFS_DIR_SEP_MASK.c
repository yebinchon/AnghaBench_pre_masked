
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_sb_info {int mnt_cifs_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline char FUNC_0(const struct cifs_sb_info *VAR_1)
{
 if (VAR_1->mnt_cifs_flags & VAR_0)
  return '/';
 else
  return '\\';
}
