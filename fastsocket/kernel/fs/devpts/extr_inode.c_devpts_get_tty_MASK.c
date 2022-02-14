
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct inode {scalar_t__ i_rdev; scalar_t__ i_private; TYPE_1__* i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_magic; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*) ;

struct tty_struct *FUNC_4(struct inode *VAR_3, int VAR_4)
{
 struct dentry *VAR_5;
 struct tty_struct *VAR_6;

 FUNC_0(VAR_3->i_rdev == FUNC_1(VAR_2, VAR_1));


 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = ((void*)0);
 if (VAR_3->i_sb->s_magic == VAR_0)
  VAR_6 = (struct tty_struct *)VAR_3->i_private;

 FUNC_3(VAR_5);

 return VAR_6;
}
