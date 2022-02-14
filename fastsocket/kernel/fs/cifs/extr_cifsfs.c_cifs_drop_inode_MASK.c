
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;


 int VAR_0 ;
 struct cifs_sb_info* FUNC_0 (int ) ;
 void FUNC_1 (struct inode*) ;
 void FUNC_2 (struct inode*) ;

void FUNC_3(struct inode *VAR_1)
{
 struct cifs_sb_info *VAR_2 = FUNC_0(VAR_1->i_sb);

 if (VAR_2->mnt_cifs_flags & VAR_0)
  return FUNC_2(VAR_1);

 return FUNC_1(VAR_1);
}
