
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static unsigned char *FUNC_1(u8 *VAR_1,
     unsigned char *VAR_2, int VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  switch (*VAR_1) {
  case 0:
   if (VAR_2[VAR_4] == 0xff)
    *VAR_1 = 1;
   break;
  case 1:
   if (VAR_2[VAR_4] == 0xff)
    *VAR_1 = 2;
   else
    *VAR_1 = 0;
   break;
  case 2:
   switch (VAR_2[VAR_4]) {
   case 0x00:
    *VAR_1 = 3;
    break;
   case 0xff:

    break;
   default:
    *VAR_1 = 0;
   }
   break;
  case 3:
   if (VAR_2[VAR_4] == 0xff)
    *VAR_1 = 4;
   else
    *VAR_1 = 0;
   break;
  case 4:
   switch (VAR_2[VAR_4]) {
   case 0x96:

    FUNC_0(VAR_0,
     "SOF found, bytes to analyze: %u."
     " Frame starts at byte #%u",
     VAR_3, VAR_4 + 1);
    *VAR_1 = 0;
    return VAR_2 + VAR_4 + 1;
    break;
   case 0xff:
    *VAR_1 = 2;
    break;
   default:
    *VAR_1 = 0;
   }
   break;
  default:
   *VAR_1 = 0;
  }
 }

 return ((void*)0);
}
