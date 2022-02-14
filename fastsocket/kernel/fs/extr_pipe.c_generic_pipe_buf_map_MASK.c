
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int page; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;

void *FUNC_2(struct pipe_inode_info *VAR_2,
      struct pipe_buffer *VAR_3, int VAR_4)
{
 if (VAR_4) {
  VAR_3->flags |= VAR_1;
  return FUNC_1(VAR_3->page, VAR_0);
 }

 return FUNC_0(VAR_3->page);
}
