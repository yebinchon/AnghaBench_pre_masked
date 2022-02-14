
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* m32; } ;
struct fp_ext {TYPE_1__ mant; } ;



__attribute__((used)) static inline int FUNC_0(struct fp_ext *VAR_0)
{
 int VAR_1;

 if (VAR_0->mant.m32[0]) {
  asm ("bfffo %1{#0,#32},%0" : "=d" (VAR_1) : "dm" (VAR_0->mant.m32[0]));
  VAR_0->mant.m32[0] = (VAR_0->mant.m32[0] << VAR_1) | (VAR_0->mant.m32[1] >> (32 - VAR_1));
  VAR_0->mant.m32[1] = (VAR_0->mant.m32[1] << VAR_1);
 } else {
  asm ("bfffo %1{#0,#32},%0" : "=d" (VAR_1) : "dm" (VAR_0->mant.m32[1]));
  VAR_0->mant.m32[0] = (VAR_0->mant.m32[1] << VAR_1);
  VAR_0->mant.m32[1] = 0;
  VAR_1 += 32;
 }

 return VAR_1;
}
