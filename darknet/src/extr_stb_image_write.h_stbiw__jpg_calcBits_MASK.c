
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0, unsigned short VAR_1[2]) {
   int VAR_2 = VAR_0 < 0 ? -VAR_0 : VAR_0;
   VAR_0 = VAR_0 < 0 ? VAR_0-1 : VAR_0;
   VAR_1[1] = 1;
   while(VAR_2 >>= 1) {
      ++VAR_1[1];
   }
   VAR_1[0] = VAR_0 & ((1<<VAR_1[1])-1);
}
