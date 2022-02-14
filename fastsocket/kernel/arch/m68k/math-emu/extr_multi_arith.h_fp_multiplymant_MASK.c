
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union fp_mant64 {int * m32; } ;
union fp_mant128 {int * m32; } ;
struct TYPE_2__ {int * m32; } ;
struct fp_ext {TYPE_1__ mant; } ;


 int FUNC_0 (union fp_mant128*,union fp_mant64) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(union fp_mant128 *VAR_0, struct fp_ext *VAR_1,
       struct fp_ext *VAR_2)
{
 union fp_mant64 VAR_3;

 FUNC_1(VAR_0->m32[0], VAR_0->m32[1], VAR_1->mant.m32[0], VAR_2->mant.m32[0]);
 FUNC_1(VAR_0->m32[2], VAR_0->m32[3], VAR_1->mant.m32[1], VAR_2->mant.m32[1]);

 FUNC_1(VAR_3.m32[0], VAR_3.m32[1], VAR_1->mant.m32[0], VAR_2->mant.m32[1]);
 FUNC_0(VAR_0, VAR_3);

 FUNC_1(VAR_3.m32[0], VAR_3.m32[1], VAR_1->mant.m32[1], VAR_2->mant.m32[0]);
 FUNC_0(VAR_0, VAR_3);
}
