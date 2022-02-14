
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mutex; TYPE_1__* i_pipe; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int readers; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3 = -VAR_0;

 FUNC_0(&VAR_1->i_mutex);

 if (VAR_1->i_pipe) {
  VAR_3 = 0;
  VAR_1->i_pipe->readers++;
 }

 FUNC_1(&VAR_1->i_mutex);

 return VAR_3;
}
