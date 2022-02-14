
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clocks; int* ToneFreqVals; int* Registers; int* ToneFreqPos; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(int VAR_3, int VAR_4)
{
  int VAR_5;


  FUNC_0(VAR_3, VAR_2);


  VAR_5 = VAR_2[VAR_3];


  while (VAR_5 < VAR_4)
  {
    if (VAR_2[VAR_3*2]>VAR_0) {

      VAR_2[VAR_3] = -VAR_2[VAR_3];
    } else {

      VAR_2[VAR_3] = 1;
    }
    FUNC_0(VAR_3, VAR_5);


    VAR_5 += VAR_2[VAR_3*2] * VAR_1;
  }


  VAR_2[VAR_3] = VAR_5;
}
