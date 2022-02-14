
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;



bool FUNC_0(void *VAR_0, UINT VAR_1)
{
 UCHAR *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = (UCHAR *)VAR_0;
 if (VAR_1 >= 16)
 {
  if (VAR_2[12] == 0x08 && VAR_2[13] == 0x00 && VAR_2[15] != 0x00 && VAR_2[15] != 0x08)
  {

   return 1;
  }

  if (VAR_1 >= 34 && VAR_1 <= 128)
  {
   if (VAR_2[12] == 0x08 && VAR_2[13] == 0x00 && VAR_2[23] == 0x01)
   {

    return 1;
   }
  }
 }

 return 0;
}
