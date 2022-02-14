
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int flags; int page; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct pipe_inode_info *VAR_1,
     struct pipe_buffer *VAR_2)
{
 FUNC_0(VAR_2->page);
 VAR_2->flags &= ~VAR_0;
}
