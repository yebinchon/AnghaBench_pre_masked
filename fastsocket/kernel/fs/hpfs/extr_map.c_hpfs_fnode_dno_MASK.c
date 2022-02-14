
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {TYPE_1__* external; } ;
struct fnode {TYPE_2__ u; } ;
struct buffer_head {int dummy; } ;
typedef int ino_t ;
typedef int dnode_secno ;
struct TYPE_3__ {int disk_secno; } ;


 int FUNC_0 (struct buffer_head*) ;
 struct fnode* FUNC_1 (struct super_block*,int ,struct buffer_head**) ;

dnode_secno FUNC_2(struct super_block *VAR_0, ino_t VAR_1)
{
 struct buffer_head *VAR_2;
 struct fnode *VAR_3;
 dnode_secno VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_2);
 if (!VAR_3)
  return 0;

 VAR_4 = VAR_3->u.external[0].disk_secno;
 FUNC_0(VAR_2);
 return VAR_4;
}
