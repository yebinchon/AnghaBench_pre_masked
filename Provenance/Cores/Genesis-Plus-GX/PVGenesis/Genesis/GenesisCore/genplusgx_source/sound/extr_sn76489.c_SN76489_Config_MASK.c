
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int clocks; int** PreAmp; int** Channel; size_t* Registers; } ;


 int* VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (unsigned int) ;

void FUNC_1(unsigned int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
  int VAR_7;


  if (VAR_3 > VAR_2)
  {

    FUNC_0(VAR_3);


    VAR_2 += ((VAR_3 - VAR_2 + VAR_1 - 1) / VAR_1) * VAR_1;
  }

  for (VAR_7=0; VAR_7<4; VAR_7++)
  {

    VAR_2[VAR_7][0] = VAR_4 * ((VAR_6 >> (VAR_7 + 4)) & 1);
    VAR_2[VAR_7][1] = VAR_4 * ((VAR_6 >> (VAR_7 + 0)) & 1);


    if (VAR_7 == 3)
    {
      VAR_2[3][0] = VAR_2[3][0] << VAR_5;
      VAR_2[3][1] = VAR_2[3][1] << VAR_5;
    }


    VAR_2[VAR_7][0]= (VAR_0[VAR_2[VAR_7*2 + 1]] * VAR_2[VAR_7][0]) / 100;
    VAR_2[VAR_7][1]= (VAR_0[VAR_2[VAR_7*2 + 1]] * VAR_2[VAR_7][1]) / 100;
  }
}
