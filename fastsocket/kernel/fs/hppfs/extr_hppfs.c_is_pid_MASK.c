
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ s_root; } ;
struct TYPE_2__ {int len; int * name; } ;
struct dentry {scalar_t__ d_parent; TYPE_1__ d_name; struct super_block* d_sb; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_0)
{
 struct super_block *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->d_sb;
 if (VAR_0->d_parent != VAR_1->s_root)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->d_name.len; VAR_2++) {
  if (!FUNC_0(VAR_0->d_name.name[VAR_2]))
   return 0;
 }
 return 1;
}
