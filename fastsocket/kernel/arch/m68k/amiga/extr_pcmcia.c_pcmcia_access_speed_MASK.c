
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;

void FUNC_0(int VAR_9)
{
 unsigned char VAR_10;

 if (VAR_9 <= VAR_4)
  VAR_10 = VAR_0;
 else if (VAR_9 <= VAR_5)
  VAR_10 = VAR_1;
 else if (VAR_9 <= VAR_6)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_3;

 VAR_7 = (VAR_7 & 0xf3) | VAR_10;
 VAR_8.config = VAR_7;
}
