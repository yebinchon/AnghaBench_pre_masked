
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int r_counter; int w_counter; struct inode* inode; int wait; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pipe_inode_info* FUNC_1 (int,int ) ;

struct pipe_inode_info * FUNC_2(struct inode *VAR_1)
{
 struct pipe_inode_info *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct pipe_inode_info), VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_2->wait);
  VAR_2->r_counter = VAR_2->w_counter = 1;
  VAR_2->inode = VAR_1;
 }

 return VAR_2;
}
