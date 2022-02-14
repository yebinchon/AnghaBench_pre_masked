
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_sb; } ;
struct seq_file {int dummy; } ;
struct adfs_sb_info {scalar_t__ s_uid; scalar_t__ s_gid; scalar_t__ s_owner_mask; scalar_t__ s_other_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct adfs_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, struct vfsmount *VAR_3)
{
 struct adfs_sb_info *VAR_4 = FUNC_0(VAR_3->mnt_sb);

 if (VAR_4->s_uid != 0)
  FUNC_1(VAR_2, ",uid=%u", VAR_4->s_uid);
 if (VAR_4->s_gid != 0)
  FUNC_1(VAR_2, ",gid=%u", VAR_4->s_gid);
 if (VAR_4->s_owner_mask != VAR_1)
  FUNC_1(VAR_2, ",ownmask=%o", VAR_4->s_owner_mask);
 if (VAR_4->s_other_mask != VAR_0)
  FUNC_1(VAR_2, ",othmask=%o", VAR_4->s_other_mask);

 return 0;
}
