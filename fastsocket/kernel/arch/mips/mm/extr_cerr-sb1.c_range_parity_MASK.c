
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static char FUNC_0(uint64_t VAR_0, int VAR_1, int VAR_2)
{
 char VAR_3 = 0;
 int VAR_4;
 VAR_0 >>= VAR_2;
 for (VAR_4=VAR_1-VAR_2; VAR_4>=0; VAR_4--) {
  if (VAR_0 & 0x1)
   VAR_3 = !VAR_3;
  VAR_0 >>= 1;
 }
 return VAR_3;
}
