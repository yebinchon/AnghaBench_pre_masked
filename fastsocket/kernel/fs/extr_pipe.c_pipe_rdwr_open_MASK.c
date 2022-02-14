
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mutex; TYPE_1__* i_pipe; } ;
struct file {int f_mode; } ;
struct TYPE_2__ {int writers; int readers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_0(&VAR_3->i_mutex);

 if (VAR_3->i_pipe) {
  VAR_5 = 0;
  if (VAR_4->f_mode & VAR_1)
   VAR_3->i_pipe->readers++;
  if (VAR_4->f_mode & VAR_2)
   VAR_3->i_pipe->writers++;
 }

 FUNC_1(&VAR_3->i_mutex);

 return VAR_5;
}
