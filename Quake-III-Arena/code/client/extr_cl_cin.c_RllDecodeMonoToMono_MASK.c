
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* sqrTable; } ;


 TYPE_1__ VAR_0 ;

long FUNC_0(unsigned char *VAR_1,short *VAR_2,unsigned int VAR_3,char VAR_4 ,unsigned short VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_4)
  VAR_7 = VAR_5 - 0x8000;
 else
  VAR_7 = VAR_5;

 for (VAR_6=0;VAR_6<VAR_3;VAR_6++) {
  VAR_7 = VAR_2[VAR_6] = (short)(VAR_7 + VAR_0.sqrTable[VAR_1[VAR_6]]);
 }
 return VAR_3;
}
