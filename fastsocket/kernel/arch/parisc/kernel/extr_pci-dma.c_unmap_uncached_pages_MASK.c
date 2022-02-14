
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgd_t ;


 unsigned long VAR_0 ;
 int * FUNC_0 (unsigned long) ;
 int FUNC_1 (int *,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1, unsigned long VAR_2)
{
 pgd_t * VAR_3;
 unsigned long VAR_4 = VAR_1 + VAR_2;

 VAR_3 = FUNC_0(VAR_1);
 do {
  FUNC_1(VAR_3, VAR_1, VAR_4 - VAR_1);
  VAR_1 = VAR_1 + VAR_0;
  VAR_3++;
 } while (VAR_1 && (VAR_1 < VAR_4));
}
