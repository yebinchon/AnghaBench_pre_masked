
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int flags; int page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ) ;

void FUNC_2(struct pipe_inode_info *VAR_2,
       struct pipe_buffer *VAR_3, void *VAR_4)
{
 if (VAR_3->flags & VAR_1) {
  VAR_3->flags &= ~VAR_1;
  FUNC_1(VAR_4, VAR_0);
 } else
  FUNC_0(VAR_3->page);
}
