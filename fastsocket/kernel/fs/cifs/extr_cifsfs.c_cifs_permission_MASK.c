
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;


 int VAR_0 ;
 struct cifs_sb_info* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, int VAR_4)
{
 struct cifs_sb_info *VAR_5;

 VAR_5 = FUNC_0(VAR_3->i_sb);

 if (VAR_5->mnt_cifs_flags & VAR_0) {
  if ((VAR_4 & VAR_2) && !FUNC_1(VAR_3))
   return -VAR_1;
  else
   return 0;
 } else



  return FUNC_2(VAR_3, VAR_4, ((void*)0));
}
