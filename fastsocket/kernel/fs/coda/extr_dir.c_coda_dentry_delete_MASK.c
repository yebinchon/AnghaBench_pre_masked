
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_inode; } ;
struct TYPE_2__ {int c_flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dentry * VAR_1)
{
 int VAR_2;

 if (!VAR_1->d_inode)
  return 0;

 VAR_2 = (FUNC_0(VAR_1->d_inode)->c_flags) & VAR_0;
 if (FUNC_1(VAR_1->d_inode) || VAR_2) {
  return 1;
 }
 return 0;
}
