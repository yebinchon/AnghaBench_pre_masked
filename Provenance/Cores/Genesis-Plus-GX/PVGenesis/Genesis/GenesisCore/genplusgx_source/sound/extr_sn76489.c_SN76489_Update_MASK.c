
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int clocks; unsigned int* ToneFreqVals; } ;


 unsigned int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (unsigned int) ;

void FUNC_1(unsigned int VAR_2)
{
  int VAR_3;

  if (VAR_2 > VAR_1)
  {

    FUNC_0(VAR_2);


    VAR_1 += ((VAR_2 - VAR_1 + VAR_0 - 1) / VAR_0) * VAR_0;
  }


  VAR_1 -= VAR_2;


 for (VAR_3=0; VAR_3<4; ++VAR_3)
 {
  VAR_1[VAR_3] -= VAR_2;
 }
}
