
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0 (const char * VAR_0)
{
 if (VAR_0[1] == '.') {
  return (VAR_0[0]-'0')*10000
   +(VAR_0[2]-'0')*1000
   +(VAR_0[3]-'0')*100;
 } else {
  return (VAR_0[0]-'0')*10000
   +(VAR_0[1]-'0')*1000
   +(VAR_0[2]-'0')*100 - 100
   +(VAR_0[3]-'@');
 }
}
