
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static __inline void FUNC_0(unsigned int VAR_0, void *VAR_1, unsigned int VAR_2)
{

 unsigned char *VAR_3 = (unsigned char*)VAR_1;

 switch (VAR_2)
 {
  case 4:
   *VAR_3 = (unsigned char)VAR_0;
   *(VAR_3 + 1) = (unsigned char)(VAR_0 >> 8);
   *(VAR_3 + 2) = (unsigned char)(VAR_0 >> 16);
   *(VAR_3 + 3) = (unsigned char)(VAR_0 >> 24);
   return;
  case 3:
   *VAR_3 = (unsigned char)VAR_0;
   *(VAR_3 + 1) = (unsigned char)(VAR_0 >> 8);
   *(VAR_3 + 2) = (unsigned char)(VAR_0 >> 16);
   return;
  case 2:
   *VAR_3 = (unsigned char)VAR_0;
   *(VAR_3 + 1) = (unsigned char)(VAR_0 >> 8);
   return;
  case 1:
   *VAR_3 = (unsigned char)VAR_0;
   return;
 }
}
