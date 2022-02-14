
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_inode; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char const*,void*,size_t) ;

ssize_t FUNC_1(struct dentry *VAR_0, const char *VAR_1, void *VAR_2,
       size_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->d_inode, VAR_1, VAR_2, VAR_3);

 return VAR_4;
}
