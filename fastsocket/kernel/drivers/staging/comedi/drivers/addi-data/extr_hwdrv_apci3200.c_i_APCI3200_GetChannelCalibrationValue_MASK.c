
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {size_t minor; } ;
struct TYPE_4__ {int i_ConnectionType; size_t i_ADDIDATAGain; TYPE_1__* s_Module; } ;
struct TYPE_3__ {unsigned int ul_CurrentSourceCJC; unsigned int* ul_CurrentSource; unsigned int* ul_GainFactor; } ;


 int FUNC_0 (char*,unsigned int) ;
 TYPE_2__* VAR_0 ;

int FUNC_1(struct comedi_device *VAR_1,
 unsigned int VAR_2, unsigned int *VAR_3,
 unsigned int *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;






 if (VAR_0[VAR_1->minor].i_ConnectionType == 1) {


  if ((VAR_2 >= 0) && (VAR_2 <= 1))
   VAR_6 = VAR_2, VAR_7 = 0;
  else if ((VAR_2 >= 2) && (VAR_2 <= 3))
   VAR_6 = VAR_2 - 2, VAR_7 = 1;
  else if ((VAR_2 >= 4) && (VAR_2 <= 5))
   VAR_6 = VAR_2 - 4, VAR_7 = 2;
  else if ((VAR_2 >= 6) && (VAR_2 <= 7))
   VAR_6 = VAR_2 - 6, VAR_7 = 3;

 } else {

  if ((VAR_2 == 0) || (VAR_2 == 1))
   VAR_6 = 0, VAR_7 = 0;
  else if ((VAR_2 == 2) || (VAR_2 == 3))
   VAR_6 = 1, VAR_7 = 0;
  else if ((VAR_2 == 4) || (VAR_2 == 5))
   VAR_6 = 0, VAR_7 = 1;
  else if ((VAR_2 == 6) || (VAR_2 == 7))
   VAR_6 = 1, VAR_7 = 1;
  else if ((VAR_2 == 8) || (VAR_2 == 9))
   VAR_6 = 0, VAR_7 = 2;
  else if ((VAR_2 == 10) || (VAR_2 == 11))
   VAR_6 = 1, VAR_7 = 2;
  else if ((VAR_2 == 12) || (VAR_2 == 13))
   VAR_6 = 0, VAR_7 = 3;
  else if ((VAR_2 == 14) || (VAR_2 == 15))
   VAR_6 = 1, VAR_7 = 3;
 }


 *VAR_3 =
  VAR_0[VAR_1->minor].s_Module[VAR_7].ul_CurrentSourceCJC;




 *VAR_4 =
  VAR_0[VAR_1->minor].s_Module[VAR_7].
  ul_CurrentSource[VAR_6];







 *VAR_5 =
  VAR_0[VAR_1->minor].s_Module[VAR_7].
  ul_GainFactor[VAR_0[VAR_1->minor].i_ADDIDATAGain];





 return 0;
}
