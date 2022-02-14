
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0)
{
 volatile int VAR_1 = 3, VAR_2, VAR_3;

 for(VAR_2 = 2; VAR_2 <= VAR_0; ) {
  for(VAR_3 = 2; VAR_3 <= VAR_1; VAR_3++) {
   if(VAR_1%VAR_3 == 0) {
    break;
   }
  }
  if(VAR_3 == VAR_1) {
   VAR_2++;
  }
  VAR_1++;
 }
}
