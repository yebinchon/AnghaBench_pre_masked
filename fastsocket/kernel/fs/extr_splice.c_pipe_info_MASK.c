
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct inode {struct pipe_inode_info* i_pipe; int i_mode; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline struct pipe_inode_info *FUNC_1(struct inode *VAR_0)
{
 if (FUNC_0(VAR_0->i_mode))
  return VAR_0->i_pipe;

 return ((void*)0);
}
