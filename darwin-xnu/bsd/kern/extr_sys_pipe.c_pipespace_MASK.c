
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_2__ {int size; scalar_t__ cnt; scalar_t__ out; scalar_t__ in; scalar_t__ buffer; } ;
struct pipe {TYPE_1__ pipe_buffer; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct pipe*) ;

__attribute__((used)) static int
FUNC_3(struct pipe *VAR_4, int VAR_5)
{
 vm_offset_t VAR_6;

 if (VAR_5 <= 0)
  return(VAR_0);

 if ((VAR_6 = (vm_offset_t)FUNC_1(VAR_5)) == 0 )
  return(VAR_1);


 FUNC_2(VAR_4);
 VAR_4->pipe_buffer.buffer = (caddr_t)VAR_6;
 VAR_4->pipe_buffer.size = VAR_5;
 VAR_4->pipe_buffer.in = 0;
 VAR_4->pipe_buffer.out = 0;
 VAR_4->pipe_buffer.cnt = 0;

 FUNC_0(1, &VAR_3);
 FUNC_0(VAR_4->pipe_buffer.size, &VAR_2);

 return (0);
}
