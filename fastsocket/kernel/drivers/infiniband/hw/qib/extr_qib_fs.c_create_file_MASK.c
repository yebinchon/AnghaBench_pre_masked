
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_operations {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
typedef int mode_t ;
struct TYPE_2__ {int i_mutex; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (char const*,struct dentry*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,struct dentry*,int ,struct file_operations const*,void*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_0, mode_t VAR_1,
         struct dentry *VAR_2, struct dentry **VAR_3,
         const struct file_operations *VAR_4, void *VAR_5)
{
 int VAR_6;

 *VAR_3 = ((void*)0);
 FUNC_3(&VAR_2->d_inode->i_mutex);
 *VAR_3 = FUNC_2(VAR_0, VAR_2, FUNC_6(VAR_0));
 if (!FUNC_0(*VAR_3))
  VAR_6 = FUNC_5(VAR_2->d_inode, *VAR_3,
        VAR_1, VAR_4, VAR_5);
 else
  VAR_6 = FUNC_1(*VAR_3);
 FUNC_4(&VAR_2->d_inode->i_mutex);

 return VAR_6;
}
