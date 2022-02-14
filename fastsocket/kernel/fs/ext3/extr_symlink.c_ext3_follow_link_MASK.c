
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct ext3_inode_info {scalar_t__ i_data; } ;
struct dentry {int d_inode; } ;


 struct ext3_inode_info* FUNC_0 (int ) ;
 int FUNC_1 (struct nameidata*,char*) ;

__attribute__((used)) static void * FUNC_2(struct dentry *VAR_0, struct nameidata *VAR_1)
{
 struct ext3_inode_info *VAR_2 = FUNC_0(VAR_0->d_inode);
 FUNC_1(VAR_1, (char*)VAR_2->i_data);
 return ((void*)0);
}
