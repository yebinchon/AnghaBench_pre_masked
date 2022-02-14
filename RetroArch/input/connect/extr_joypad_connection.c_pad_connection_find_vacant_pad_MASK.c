
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int connected; } ;
typedef TYPE_1__ joypad_connection_t ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(joypad_connection_t *VAR_0)
{
  unsigned VAR_1;

  if (!VAR_0)
    return -1;

  for (VAR_1 = 0; !FUNC_0(&VAR_0[VAR_1]); VAR_1++)
  {
    if(!VAR_0[VAR_1].connected)
      return VAR_1;
  }

  return -1;
}
