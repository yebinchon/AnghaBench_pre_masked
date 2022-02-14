
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_operations {void (* drop_inode ) (struct inode*) ;} ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct super_operations* s_op; } ;


 void FUNC_0 (struct inode*) ;

__attribute__((used)) static inline void FUNC_1(struct inode *VAR_0)
{
 const struct super_operations *VAR_1 = VAR_0->i_sb->s_op;
 void (*VAR_2)(struct inode *) = FUNC_0;

 if (VAR_1 && VAR_1->drop_inode)
  VAR_2 = VAR_1->drop_inode;
 VAR_2(VAR_0);
}
