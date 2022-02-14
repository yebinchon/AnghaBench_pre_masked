
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_writecount; int i_mapping; } ;
struct file {int f_mode; scalar_t__ private_data; } ;
struct TYPE_2__ {int i_state; int truncate_mutex; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8 (struct inode * VAR_2, struct file * VAR_3)
{
 if (FUNC_0(VAR_2)->i_state & VAR_0) {
  FUNC_4(VAR_2->i_mapping);
  FUNC_0(VAR_2)->i_state &= ~VAR_0;
 }

 if ((VAR_3->f_mode & VAR_1) &&
   (FUNC_1(&VAR_2->i_writecount) == 1))
 {
  FUNC_6(&FUNC_0(VAR_2)->truncate_mutex);
  FUNC_2(VAR_2);
  FUNC_7(&FUNC_0(VAR_2)->truncate_mutex);
 }
 if (FUNC_5(VAR_2) && VAR_3->private_data)
  FUNC_3(VAR_3->private_data);

 return 0;
}
