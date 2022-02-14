
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dacout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short* VAR_3 ;
 int* VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_0(int VAR_6)
{
  int VAR_7, VAR_8, VAR_9;
  int VAR_10 = VAR_5;
  int VAR_11 = VAR_2;

  if (VAR_6 >= 312)
    VAR_6 = 311;

  VAR_2 = VAR_6 + 1;

  VAR_7 =VAR_4[VAR_11]>>4;
  VAR_8=VAR_4[VAR_6];
  VAR_9 = ((VAR_8>>4)-VAR_7) + (VAR_8&0xf);
  if (!VAR_9) return;

  if (VAR_1 & VAR_0) {
    short *VAR_12 = VAR_3 + VAR_7*2;
    for (; VAR_9 > 0; VAR_9--, VAR_12+=2) *VAR_12 = VAR_10;
  } else {
    short *VAR_13 = VAR_3 + VAR_7;
    for (; VAR_9 > 0; VAR_9--, VAR_13++) *VAR_13 = VAR_10;
  }
}
