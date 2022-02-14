
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct file {int f_mode; } ;
struct TYPE_3__ {scalar_t__ flush; } ;
struct TYPE_4__ {TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct inode*,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct file *VAR_4)
{
 if ((VAR_4->f_mode & VAR_1) &&
      FUNC_0(VAR_3->i_sb)->options.flush) {
  FUNC_2(VAR_3->i_sb, VAR_3, ((void*)0));
  FUNC_1(VAR_0, VAR_2/10);
 }
 return 0;
}
