
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {TYPE_1__* inode; } ;
struct TYPE_2__ {int i_mutex; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct pipe_inode_info *VAR_0)
{
 if (VAR_0->inode)
  FUNC_0(&VAR_0->inode->i_mutex);
}
