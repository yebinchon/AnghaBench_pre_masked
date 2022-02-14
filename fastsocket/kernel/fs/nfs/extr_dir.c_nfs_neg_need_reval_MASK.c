
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 scalar_t__ FUNC_2 (struct nameidata*,int ) ;

__attribute__((used)) static inline
int FUNC_3(struct inode *VAR_2, struct dentry *VAR_3,
         struct nameidata *VAR_4)
{

 if (VAR_4 != ((void*)0) && FUNC_2(VAR_4, VAR_0) != 0)
  return 0;
 if (FUNC_0(VAR_2)->flags & VAR_1)
  return 1;
 return !FUNC_1(VAR_2, VAR_3);
}
