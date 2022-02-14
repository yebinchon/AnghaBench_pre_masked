
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IP ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;

bool FUNC_4(IP *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(VAR_0))
 {
  return 0;
 }

 VAR_1 = FUNC_0(VAR_0);

 if (FUNC_2())
 {
  VAR_1 = FUNC_3(VAR_1);
 }

 switch (VAR_1)
 {
 case 0x00000000:
 case 0x80000000:
 case 0xC0000000:
 case 0xE0000000:
 case 0xF0000000:
 case 0xF8000000:
 case 0xFC000000:
 case 0xFE000000:
 case 0xFF000000:
 case 0xFF800000:
 case 0xFFC00000:
 case 0xFFE00000:
 case 0xFFF00000:
 case 0xFFF80000:
 case 0xFFFC0000:
 case 0xFFFE0000:
 case 0xFFFF0000:
 case 0xFFFF8000:
 case 0xFFFFC000:
 case 0xFFFFE000:
 case 0xFFFFF000:
 case 0xFFFFF800:
 case 0xFFFFFC00:
 case 0xFFFFFE00:
 case 0xFFFFFF00:
 case 0xFFFFFF80:
 case 0xFFFFFFC0:
 case 0xFFFFFFE0:
 case 0xFFFFFFF0:
 case 0xFFFFFFF8:
 case 0xFFFFFFFC:
 case 0xFFFFFFFE:
 case 0xFFFFFFFF:
  return 1;
 }

 return 0;
}
