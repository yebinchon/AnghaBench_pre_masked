
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(unsigned char VAR_0, int VAR_1)
{
 static int VAR_2 = 0;
 static int VAR_3 = 0;

 if (VAR_1) {



  if (VAR_2 && VAR_3 < 8)
   return 1;


  VAR_3 = 0;
  VAR_2 = 1;
  return 2;
 }
 if (VAR_2) {
  VAR_3++;
  if (VAR_0 == 0x87) {

   VAR_2 = 0;
  }
  return 1;
 }
 return 0;
}
