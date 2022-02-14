
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct str_BoardInfos {TYPE_1__* s_Module; } ;
struct TYPE_2__ {unsigned short* w_GainValue; unsigned short* ul_GainFactor; unsigned short* ul_CurrentSource; unsigned short ul_CurrentSourceCJC; } ;


 int FUNC_0 (int,unsigned int,unsigned short,unsigned short*) ;
 int FUNC_1 (char*,unsigned short,...) ;

void FUNC_2(unsigned int VAR_0,
 struct str_BoardInfos *VAR_1)
{
 unsigned short VAR_2;
 unsigned short VAR_3;
 unsigned short VAR_4 = 0;
 unsigned short VAR_5[2];
 unsigned short VAR_6 = 0;
 unsigned short VAR_7 = 0;
 unsigned short VAR_8 = 0;
 unsigned short VAR_9 = 0;
 unsigned short VAR_10 = 0;
 unsigned short VAR_11 = 0;
 unsigned short VAR_12 = 0;
 unsigned short VAR_13 = 0;
 unsigned short VAR_14 = 0;
 unsigned short VAR_15[2];
 unsigned short VAR_16 = 0;
 unsigned short VAR_17 = 0;




 FUNC_0(1,
  VAR_0, 0x116,
  &VAR_2);




 VAR_2 = VAR_2 + 0x100;




 FUNC_0(1,
  VAR_0, VAR_2 + 0x02,
  &VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_4;
  VAR_6++) {



  VAR_3 =
   VAR_2 +
   (VAR_7 * VAR_6) + 0x04;




  FUNC_0(1,
   VAR_0, VAR_3,
   &VAR_7);

  VAR_7 = VAR_7 >> 4;




  FUNC_0(1,
   VAR_0, VAR_3 + 0x06,
   &VAR_8);

  VAR_8 = VAR_8 >> 4;




  FUNC_0(1,
   VAR_0, VAR_3 + 0x08,
   &VAR_9);

  VAR_9 = (VAR_9 >> 3) & 0x1;




  FUNC_0(1,
   VAR_0, VAR_3 + 0x44,
   &VAR_10);

  VAR_10 = VAR_10 & 0xFF;




  VAR_11 =
   VAR_3 + 0x46 +
   (((VAR_10 / 16) + 1) * 2) +
   (6 * VAR_10) +
   (4 * (((VAR_10 / 16) + 1) * 2));




  FUNC_0(1,
   VAR_0, VAR_11,
   &VAR_12);

  VAR_12 = VAR_12 >> 4;




  VAR_14 = VAR_3;

  for (VAR_16 = 0; VAR_16 < VAR_10;
   VAR_16++) {



   FUNC_0(1,
    VAR_0, VAR_3 + 70 + (2 * (1 + (VAR_10 / 16))) + (0x02 * VAR_16),
    &VAR_17);

   VAR_1->s_Module[VAR_6].
    w_GainValue[VAR_16] = VAR_17;
   FUNC_0(2,
    VAR_0, VAR_3 + 70 + ((2 * VAR_10) + (2 * (1 + (VAR_10 / 16)))) + (0x04 * VAR_16),
    VAR_15);

   VAR_1->s_Module[VAR_6].
    ul_GainFactor[VAR_16] =
    (VAR_15[1] << 16) +
    VAR_15[0];






  }




  for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {



   FUNC_0(2,
    VAR_0,
    (VAR_13 * VAR_12) +
    VAR_11 + 0x0C, VAR_5);




   VAR_1->s_Module[VAR_6].
    ul_CurrentSource[VAR_13] =
    (VAR_5[0] +
    ((VAR_5[1] & 0xFFF) << 16));






  }




  FUNC_0(2,
   VAR_0,
   (VAR_13 * VAR_12) + VAR_11 +
   0x0C, VAR_5);




  VAR_1->s_Module[VAR_6].
   ul_CurrentSourceCJC =
   (VAR_5[0] +
   ((VAR_5[1] & 0xFFF) << 16));






 }
}
