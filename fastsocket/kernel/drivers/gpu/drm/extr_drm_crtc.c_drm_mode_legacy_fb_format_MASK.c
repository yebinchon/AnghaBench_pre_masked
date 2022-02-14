
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

uint32_t FUNC_1(uint32_t VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9;

 switch (VAR_7) {
 case 8:
  VAR_9 = VAR_1;
  break;
 case 16:
  if (VAR_8 == 15)
   VAR_9 = VAR_4;
  else
   VAR_9 = VAR_2;
  break;
 case 24:
  VAR_9 = VAR_3;
  break;
 case 32:
  if (VAR_8 == 24)
   VAR_9 = VAR_6;
  else if (VAR_8 == 30)
   VAR_9 = VAR_5;
  else
   VAR_9 = VAR_0;
  break;
 default:
  FUNC_0("bad bpp, assuming x8r8g8b8 pixel format\n");
  VAR_9 = VAR_6;
  break;
 }

 return VAR_9;
}
