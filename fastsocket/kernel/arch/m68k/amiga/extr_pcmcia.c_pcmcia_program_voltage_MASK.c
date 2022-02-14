
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;



 int VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_0(int VAR_5)
{
 unsigned char VAR_6;

 switch (VAR_5) {
 case 130:
  VAR_6 = VAR_0;
  break;
 case 128:
  VAR_6 = VAR_2;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 default:
  VAR_6 = VAR_0;
 }

 VAR_3 = (VAR_3 & 0xfc) | VAR_6;
 VAR_4.config = VAR_3;

}
