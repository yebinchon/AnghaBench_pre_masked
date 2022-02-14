
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0 (const char* VAR_0,const char* VAR_1)
{
 for (;;)
 {
  char VAR_2=*(VAR_0++);
  char VAR_3=*(VAR_1++);
  if ((VAR_2>='a') && (VAR_2<='z'))
   VAR_2 -= 0x20;
  if ((VAR_3>='a') && (VAR_3<='z'))
   VAR_3 -= 0x20;
  if (VAR_2=='\0')
   return ((VAR_3=='\0') ? 0 : -1);
  if (VAR_3=='\0')
   return 1;
  if (VAR_2<VAR_3)
   return -1;
  if (VAR_2>VAR_3)
   return 1;
 }
}
