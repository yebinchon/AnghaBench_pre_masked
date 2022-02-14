
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_writecount; } ;
struct file {int f_mode; scalar_t__ private_data; } ;
struct TYPE_2__ {int i_data_sem; int i_reserved_data_blocks; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct inode*,int ) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_2, struct file *VAR_3)
{
 if (FUNC_7(VAR_2, VAR_0)) {
  FUNC_3(VAR_2);
  FUNC_4(VAR_2, VAR_0);
 }

 if ((VAR_3->f_mode & VAR_1) &&
   (FUNC_1(&VAR_2->i_writecount) == 1) &&
          !FUNC_0(VAR_2)->i_reserved_data_blocks)
 {
  FUNC_2(&FUNC_0(VAR_2)->i_data_sem);
  FUNC_5(VAR_2);
  FUNC_9(&FUNC_0(VAR_2)->i_data_sem);
 }
 if (FUNC_8(VAR_2) && VAR_3->private_data)
  FUNC_6(VAR_3->private_data);

 return 0;
}
