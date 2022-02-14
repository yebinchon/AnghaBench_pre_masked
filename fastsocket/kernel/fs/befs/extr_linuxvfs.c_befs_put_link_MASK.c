
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct dentry {int d_inode; } ;
struct TYPE_3__ {int i_flags; } ;
typedef TYPE_1__ befs_inode_info ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct nameidata*) ;

__attribute__((used)) static void FUNC_4(struct dentry *VAR_1, struct nameidata *VAR_2, void *VAR_3)
{
 befs_inode_info *VAR_4 = FUNC_0(VAR_1->d_inode);
 if (VAR_4->i_flags & VAR_0) {
  char *VAR_5 = FUNC_3(VAR_2);
  if (!FUNC_1(VAR_5))
   FUNC_2(VAR_5);
 }
}
