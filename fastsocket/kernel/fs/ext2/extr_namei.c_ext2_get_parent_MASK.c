
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {char* name; int len; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct dentry* FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 unsigned long FUNC_3 (TYPE_1__*,struct qstr*) ;

struct dentry *FUNC_4(struct dentry *VAR_1)
{
 struct qstr VAR_2 = {.name = "..", .len = 2};
 unsigned long VAR_3 = FUNC_3(VAR_1->d_inode, &VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);
 return FUNC_1(FUNC_2(VAR_1->d_inode->i_sb, VAR_3));
}
