
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static __inline unsigned int FUNC_0(void const *VAR_0, unsigned int VAR_1)
{

 unsigned char *VAR_2 = (unsigned char*)VAR_0;
 switch (VAR_1)
 {
  case 4:
   return(*VAR_2 | *(VAR_2 + 1) << 8 | *(VAR_2 + 2) << 16 | *(VAR_2 + 3) << 24);
  case 3:
   return(*VAR_2 | *(VAR_2 + 1) << 8 | *(VAR_2 + 2) << 16);
  case 2:
   return(*VAR_2 | *(VAR_2 + 1) << 8);
  case 1:
   return(*VAR_2);
 }
 return 0;






}
