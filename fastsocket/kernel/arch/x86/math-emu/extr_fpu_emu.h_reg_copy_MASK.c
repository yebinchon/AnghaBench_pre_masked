
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sigl; int exp; } ;
typedef TYPE_1__ FPU_REG ;



__attribute__((used)) static inline void FUNC_0(FPU_REG const *VAR_0, FPU_REG *VAR_1)
{
 *(short *)&(VAR_1->exp) = *(const short *)&(VAR_0->exp);
 *(long long *)&(VAR_1->sigl) = *(const long long *)&(VAR_0->sigl);
}
