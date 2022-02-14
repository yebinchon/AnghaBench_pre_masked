
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct dentry {struct inode* d_inode; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;

ssize_t FUNC_3(struct dentry *VAR_3, char *VAR_4, size_t VAR_5)
{
 struct inode *VAR_6 = VAR_3->d_inode;

 if (!FUNC_1(VAR_6->i_mode) || FUNC_0(VAR_6))
  return -VAR_0;

 if (!VAR_4 || !VAR_5)
  return VAR_2;
 if (VAR_5 < VAR_2)
  return -VAR_1;
 FUNC_2(VAR_4, "hfs.type");
 FUNC_2(VAR_4 + sizeof("hfs.type"), "hfs.creator");

 return VAR_2;
}
