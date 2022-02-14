
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(u16 VAR_0,u16 VAR_1)
{
 if (VAR_0 & 0x02) {
  if (VAR_1 & 0x01) {
   FUNC_0("auto search succeeded\n");
   return 1;
  } else {
   FUNC_0("auto search not successful\n");
   return 0;
  }
 } else if (VAR_0 & 0x01) {
  FUNC_0("auto search failed\n");
  return 0;
 }
 return -1;
}
