
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_private; } ;


 int FUNC_0 (struct nameidata*,int ) ;

__attribute__((used)) static void *FUNC_1(struct dentry *VAR_0, struct nameidata *VAR_1)
{
 FUNC_0(VAR_1, VAR_0->d_inode->i_private);
 return ((void*)0);
}
