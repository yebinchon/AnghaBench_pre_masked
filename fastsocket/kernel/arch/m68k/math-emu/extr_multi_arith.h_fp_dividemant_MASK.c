
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union fp_mant64 {unsigned long* m32; } ;
union fp_mant128 {unsigned long* m32; } ;
struct TYPE_3__ {scalar_t__ m64; int* m32; } ;
struct fp_ext {TYPE_1__ mant; } ;


 int FUNC_0 (unsigned long,unsigned long,int ,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long,int,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_3 (TYPE_1__,TYPE_1__) ;
 int FUNC_4 (union fp_mant128,int ,unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_5(union fp_mant128 *VAR_0, struct fp_ext *VAR_1,
     struct fp_ext *VAR_2)
{
 union fp_mant128 VAR_3;
 union fp_mant64 VAR_4;
 unsigned long *VAR_5 = VAR_0->m32;
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;



 if (VAR_1->mant.m64 >= VAR_2->mant.m64) {
  FUNC_3(VAR_1->mant, VAR_2->mant);
  *VAR_5 = 1;
 } else
  *VAR_5 = 0;
 VAR_5++;
 VAR_6 = 0x80000000;
 VAR_9 = VAR_2->mant.m32[1] / VAR_2->mant.m32[0] + 1;
 VAR_9 = (VAR_9 >> 1) | VAR_6;
 FUNC_1(VAR_6, VAR_9, VAR_6, 0, VAR_9);
 VAR_6--;

 for (VAR_10 = 0; VAR_10 < 3; VAR_10++, VAR_5++) {
  if (VAR_1->mant.m32[0] == VAR_2->mant.m32[0]) {
   FUNC_1(VAR_8, VAR_7, 0, VAR_1->mant.m32[1], VAR_2->mant.m32[0]);

   FUNC_2(*VAR_5, VAR_9, VAR_8, VAR_6);
   *VAR_5 += VAR_6;
  } else {
   FUNC_1(VAR_8, VAR_7, VAR_1->mant.m32[0], VAR_1->mant.m32[1], VAR_2->mant.m32[0]);

   FUNC_2(*VAR_5, VAR_9, VAR_8, VAR_6);
  }

  FUNC_2(VAR_3.m32[0], VAR_3.m32[1], VAR_2->mant.m32[0], VAR_8 - *VAR_5);
  FUNC_0(VAR_3.m32[0], VAR_3.m32[1], 0, VAR_7);
  VAR_3.m32[2] = 0;

  FUNC_2(VAR_4[0], VAR_4[1], *VAR_5, VAR_2->mant.m32[1]);
  FUNC_4(VAR_3, 0, VAR_4[0], VAR_4[1]);

  VAR_1->mant.m32[0] = VAR_3.m32[1];
  VAR_1->mant.m32[1] = VAR_3.m32[2];

  while (!FUNC_4(VAR_3, 0, VAR_2->mant.m32[0], VAR_2->mant.m32[1])) {
   VAR_1->mant.m32[0] = VAR_3.m32[1];
   VAR_1->mant.m32[1] = VAR_3.m32[2];
   *VAR_5 += 1;
  }
 }
}
