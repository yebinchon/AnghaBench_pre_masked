
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etrax_recv_buffer {int error; scalar_t__ length; int * next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct etrax_recv_buffer* FUNC_0 (int,int ) ;

__attribute__((used)) static struct etrax_recv_buffer *
FUNC_1(unsigned int VAR_2)
{
 struct etrax_recv_buffer *VAR_3;

 if (!(VAR_3 = FUNC_0(sizeof *VAR_3 + VAR_2, VAR_0)))
  return ((void*)0);

 VAR_3->next = ((void*)0);
 VAR_3->length = 0;
 VAR_3->error = VAR_1;

 return VAR_3;
}
