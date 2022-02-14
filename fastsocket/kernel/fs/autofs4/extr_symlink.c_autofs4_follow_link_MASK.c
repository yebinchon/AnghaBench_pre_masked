
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ symlink; } ;
struct autofs_info {TYPE_1__ u; } ;


 struct autofs_info* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct nameidata*,char*) ;

__attribute__((used)) static void *FUNC_2(struct dentry *VAR_0, struct nameidata *VAR_1)
{
 struct autofs_info *VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, (char *)VAR_2->u.symlink);
 return ((void*)0);
}
