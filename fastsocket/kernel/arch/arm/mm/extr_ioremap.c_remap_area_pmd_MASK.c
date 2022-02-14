
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_type {int dummy; } ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int * FUNC_1 (int *,int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long,unsigned long,unsigned long,struct mem_type const*) ;

__attribute__((used)) static inline int FUNC_3(pgd_t *VAR_2, unsigned long VAR_3,
     unsigned long VAR_4, unsigned long VAR_5,
     const struct mem_type *VAR_6)
{
 unsigned long VAR_7;
 pmd_t *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_1(&VAR_1, VAR_2, VAR_3);
 if (!VAR_8)
  return -VAR_0;

 do {
  VAR_7 = FUNC_0(VAR_3, VAR_4);
  VAR_9 = FUNC_2(VAR_8, VAR_3, VAR_7, VAR_5, VAR_6);
  if (VAR_9)
   return VAR_9;
  VAR_5 += VAR_7 - VAR_3;
 } while (VAR_8++, VAR_3 = VAR_7, VAR_3 != VAR_4);
 return VAR_9;
}
