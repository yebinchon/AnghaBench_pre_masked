
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int * buffer; } ;
struct pipe {TYPE_1__ pipe_buffer; } ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,int) ;

__attribute__((used)) static void
FUNC_2(struct pipe *VAR_2)
{
 if (VAR_2->pipe_buffer.buffer != ((void*)0)) {
  FUNC_0(-(VAR_2->pipe_buffer.size), &VAR_0);
  FUNC_0(-1, &VAR_1);
  FUNC_1((void *)VAR_2->pipe_buffer.buffer,
     VAR_2->pipe_buffer.size);
  VAR_2->pipe_buffer.buffer = ((void*)0);
  VAR_2->pipe_buffer.size = 0;
 }
}
