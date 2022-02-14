
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;


 int FUNC_0 (int) ;

bool FUNC_1(UCHAR *VAR_0, UINT VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return 0;
 }

 if (VAR_1 >= 4)
 {
  USHORT VAR_2 = *((USHORT *)(VAR_0 + 2));

  VAR_2 = FUNC_0(VAR_2);

  if (((VAR_2 & 0x7800) >> 11) == 5)
  {
   return 1;
  }
 }

 return 0;
}
