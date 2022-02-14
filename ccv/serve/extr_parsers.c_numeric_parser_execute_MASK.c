
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int result; int division; } ;
typedef TYPE_1__ numeric_parser_t ;







void FUNC_0(numeric_parser_t* VAR_0, const char* VAR_1, size_t VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  int VAR_4 = VAR_1[VAR_3] - '0';
  if ((VAR_4 < 0 || VAR_4 >= 10) && VAR_1[VAR_3] != '.')
   VAR_0->state = 129;
  switch (VAR_0->state)
  {
   case 128:
    VAR_0->result = 0;
    VAR_0->state = 130;

   case 130:
    if (VAR_1[VAR_3] != '.')
     VAR_0->result = VAR_0->result * 10 + VAR_4;
    else
     VAR_0->state = 131;
    break;
   case 131:
    if (VAR_1[VAR_3] == '.')
     VAR_0->state = 129;
    else {
     VAR_0->result += VAR_4 * VAR_0->division;
     VAR_0->division *= 0.1;
    }
    break;
   case 129:
    break;
  }
  if (VAR_0->state == 129)
   break;
 }
}
