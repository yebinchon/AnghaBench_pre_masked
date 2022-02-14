
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (void const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(const void *VAR_0, uint32_t *VAR_1)
{
 unsigned long VAR_2;
 uint32_t VAR_3;

 if (!FUNC_0(VAR_0))
  return 0;

 asm volatile("	movgs	gr0,brr	\n"
       "	ld%I2	%M2,%0	\n"
       "	movsg	brr,%1	\n"
       : "=r"(VAR_3), "=r"(VAR_2)
       : "m"(*(uint32_t *) VAR_0));
 *VAR_1 = VAR_3;
 FUNC_1();
 return FUNC_2(!VAR_2);
}
