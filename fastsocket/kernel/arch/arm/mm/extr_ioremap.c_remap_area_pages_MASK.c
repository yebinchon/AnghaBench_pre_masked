
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_type {int dummy; } ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int * FUNC_3 (unsigned long) ;
 int FUNC_4 (int *,unsigned long,unsigned long,unsigned long,struct mem_type const*) ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_0, unsigned long VAR_1,
       size_t VAR_2, const struct mem_type *VAR_3)
{
 unsigned long VAR_4 = VAR_0;
 unsigned long VAR_5, VAR_6 = VAR_0 + VAR_2;
 unsigned long VAR_7 = FUNC_1(VAR_1);
 pgd_t *VAR_8;
 int VAR_9 = 0;

 FUNC_0(VAR_4 >= VAR_6);
 VAR_8 = FUNC_3(VAR_4);
 do {
  VAR_5 = FUNC_2(VAR_4, VAR_6);
  VAR_9 = FUNC_4(VAR_8, VAR_4, VAR_5, VAR_7, VAR_3);
  if (VAR_9)
   break;
  VAR_7 += VAR_5 - VAR_4;
 } while (VAR_8++, VAR_4 = VAR_5, VAR_4 != VAR_6);

 return VAR_9;
}
