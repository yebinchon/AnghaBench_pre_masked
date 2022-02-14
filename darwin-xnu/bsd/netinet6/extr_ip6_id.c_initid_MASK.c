
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
typedef scalar_t__ time_t ;
struct randomtab {unsigned int ru_x; unsigned int ru_m; unsigned int ru_seed; int ru_bits; unsigned int ru_seed2; unsigned int ru_b; unsigned int ru_n; size_t* pfacts; unsigned int ru_msb; scalar_t__ ru_out; scalar_t__ ru_reseed; scalar_t__ ru_counter; int ru_gen; void* ru_g; int ru_agen; void* ru_a; } ;


 unsigned int FUNC_0 () ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,size_t,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct randomtab *VAR_0)
{
 time_t VAR_1 = (time_t)FUNC_1();
 u_int32_t VAR_2, VAR_3;
 int VAR_4 = 1;

 VAR_0->ru_x = FUNC_0() % VAR_0->ru_m;


 VAR_0->ru_seed = FUNC_0() & (~0U >> (32 - VAR_0->ru_bits + 1));
 VAR_0->ru_seed2 = FUNC_0() & (~0U >> (32 - VAR_0->ru_bits + 1));


 VAR_0->ru_b = (FUNC_0() & (~0U >> (32 - VAR_0->ru_bits))) | 1;
 VAR_0->ru_a = FUNC_2(VAR_0->ru_agen,
     (FUNC_0() & (~0U >> (32 - VAR_0->ru_bits))) & (~1U), VAR_0->ru_m);
 while (VAR_0->ru_b % 3 == 0)
  VAR_0->ru_b += 2;

 VAR_2 = FUNC_0() % VAR_0->ru_n;






 while (VAR_4) {
  for (VAR_3 = 0; VAR_0->pfacts[VAR_3] > 0; VAR_3++)
   if (VAR_2 % VAR_0->pfacts[VAR_3] == 0)
    break;

  if (VAR_0->pfacts[VAR_3] == 0)
   VAR_4 = 0;
  else
   VAR_2 = (VAR_2 + 1) % VAR_0->ru_n;
 }

 VAR_0->ru_g = FUNC_2(VAR_0->ru_gen, VAR_2, VAR_0->ru_n);
 VAR_0->ru_counter = 0;

 VAR_0->ru_reseed = VAR_1 + VAR_0->ru_out;
 VAR_0->ru_msb = VAR_0->ru_msb ? 0 : (1U << (VAR_0->ru_bits - 1));
}
