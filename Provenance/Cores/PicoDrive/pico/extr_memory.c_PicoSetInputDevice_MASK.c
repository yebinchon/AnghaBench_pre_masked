
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int port_read_func ;
typedef enum input_device { ____Placeholder_input_device } input_device ;




 int ** VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

void FUNC_0(int VAR_4, enum input_device VAR_5)
{
  port_read_func *VAR_6;

  if (VAR_4 < 0 || VAR_4 > 2)
    return;

  switch (VAR_5) {
  case 129:
    VAR_6 = VAR_2;
    break;

  case 128:
    VAR_6 = VAR_3;
    break;

  default:
    VAR_6 = VAR_1;
    break;
  }

  VAR_0[VAR_4] = VAR_6;
}
