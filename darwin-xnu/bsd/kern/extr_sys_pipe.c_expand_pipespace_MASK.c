
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int size; scalar_t__ cnt; scalar_t__ in; scalar_t__ out; int * buffer; } ;
struct pipe {TYPE_1__ pipe_buffer; } ;


 int FUNC_0 (int *,int *,unsigned int) ;
 int FUNC_1 (struct pipe*) ;
 int FUNC_2 (struct pipe*,int) ;

__attribute__((used)) static int
FUNC_3(struct pipe *VAR_0, int VAR_1)
{
 struct pipe VAR_2, VAR_3;
 int VAR_4;
 VAR_2.pipe_buffer.buffer = 0;

 if (VAR_0->pipe_buffer.size >= (unsigned) VAR_1) {
  return 0;
 }


 VAR_4 = FUNC_2(&VAR_2, VAR_1);
 if (VAR_4 != 0)
  return (VAR_4);

 VAR_3.pipe_buffer.buffer = VAR_0->pipe_buffer.buffer;
 VAR_3.pipe_buffer.size = VAR_0->pipe_buffer.size;

 FUNC_0(VAR_2.pipe_buffer.buffer, VAR_0->pipe_buffer.buffer, VAR_0->pipe_buffer.size);
 if (VAR_0->pipe_buffer.cnt > 0 && VAR_0->pipe_buffer.in <= VAR_0->pipe_buffer.out ){

  FUNC_0(&VAR_2.pipe_buffer.buffer[VAR_0->pipe_buffer.size], VAR_0->pipe_buffer.buffer, VAR_0->pipe_buffer.size);
  VAR_0->pipe_buffer.in += VAR_0->pipe_buffer.size;
 }

 VAR_0->pipe_buffer.buffer = VAR_2.pipe_buffer.buffer;
 VAR_0->pipe_buffer.size = VAR_2.pipe_buffer.size;


 FUNC_1(&VAR_3);
 return 0;
}
