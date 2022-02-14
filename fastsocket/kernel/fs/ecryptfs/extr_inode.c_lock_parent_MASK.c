
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_mutex; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static struct dentry *FUNC_2(struct dentry *VAR_1)
{
 struct dentry *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_1(&(VAR_2->d_inode->i_mutex), VAR_0);
 return VAR_2;
}
