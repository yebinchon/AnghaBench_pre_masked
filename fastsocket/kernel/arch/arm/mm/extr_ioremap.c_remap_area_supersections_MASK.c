
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_type {unsigned long prot_sect; } ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (unsigned long) ;
 int * FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (unsigned long,size_t) ;

__attribute__((used)) static int
FUNC_6(unsigned long VAR_4, unsigned long VAR_5,
    size_t VAR_6, const struct mem_type *VAR_7)
{
 unsigned long VAR_8 = VAR_4, VAR_9 = VAR_4 + VAR_6;
 pgd_t *VAR_10;





 FUNC_5(VAR_4, VAR_6);

 VAR_10 = FUNC_3(VAR_4);
 do {
  unsigned long VAR_11, VAR_12;

  VAR_11 = FUNC_0(VAR_5) | VAR_7->prot_sect |
    VAR_2;
  VAR_11 |= ((VAR_5 >> (32 - VAR_0)) & 0xf) << 20;

  for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
   pmd_t *VAR_13 = FUNC_4(VAR_10, VAR_8);

   VAR_13[0] = FUNC_1(VAR_11);
   VAR_13[1] = FUNC_1(VAR_11);
   FUNC_2(VAR_13);

   VAR_8 += VAR_1;
   VAR_10++;
  }

  VAR_5 += VAR_3 >> VAR_0;
 } while (VAR_8 < VAR_9);

 return 0;
}
