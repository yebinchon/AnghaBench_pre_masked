
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,char*,int ) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_1, struct inode *VAR_2,
  const char *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_2->i_sb, VAR_3,
   "Both inodes should not be NULL: "
   "inode1 NULL inode2 %lu", VAR_2->i_ino);
  VAR_4 = -VAR_0;
 } else if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_1->i_sb, VAR_3,
   "Both inodes should not be NULL: "
   "inode1 %lu inode2 NULL", VAR_1->i_ino);
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
