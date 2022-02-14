
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char s32 ;



s32 FUNC_0(const char *VAR_0,s32 *VAR_1)
{
 s32 VAR_2;

 VAR_2 = *VAR_0;
 if(VAR_2>='0' && VAR_2<='9') {
  *VAR_1 = VAR_2 - '0';
  return 1;
 }
 if(VAR_2>='a' && VAR_2<='f') {
  *VAR_1 = VAR_2 - 'a' + 10;
  return 1;
 }
 if(VAR_2>='A' && VAR_2<='F') {
  *VAR_1 = VAR_2 - 'A' + 10;
  return 1;
 }
 return 0;
}
