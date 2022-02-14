
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {scalar_t__ tmp_page; struct pipe_buffer* bufs; } ;
struct pipe_buffer {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* release ) (struct pipe_inode_info*,struct pipe_buffer*) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pipe_inode_info*) ;
 int FUNC_2 (struct pipe_inode_info*,struct pipe_buffer*) ;

void FUNC_3(struct pipe_inode_info *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct pipe_buffer *VAR_3 = VAR_1->bufs + VAR_2;
  if (VAR_3->ops)
   VAR_3->ops->release(VAR_1, VAR_3);
 }
 if (VAR_1->tmp_page)
  FUNC_0(VAR_1->tmp_page);
 FUNC_1(VAR_1);
}
