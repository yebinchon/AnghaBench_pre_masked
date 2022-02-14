
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(void *VAR_0, uint16_t VAR_1)
{
 unsigned long VAR_2;

 if (!FUNC_0(VAR_0))
  return 0;

 asm volatile("	movgs	gr0,brr	\n"
       "	sth%I2	%1,%M2	\n"
       "	movsg	brr,%0	\n"
       : "=r"(VAR_2)
       : "r"(VAR_1), "m"(*(uint16_t *) VAR_0));
 FUNC_1();
 return FUNC_2(!VAR_2);
}
