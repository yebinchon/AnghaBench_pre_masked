
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 long FUNC_4 (unsigned long) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(pud_t *VAR_9, unsigned long VAR_10, unsigned long VAR_11)
{
 long VAR_12, VAR_13;

 VAR_12 = FUNC_4(VAR_10);
 VAR_9 = VAR_9 + VAR_12;
 for (; VAR_12 < VAR_4; VAR_9++, VAR_12++) {
  unsigned long VAR_14;
  pmd_t *VAR_15;

  VAR_14 = VAR_10 + VAR_12*VAR_5;
  if (VAR_14 >= VAR_11)
   break;

  VAR_15 = (pmd_t *)FUNC_3(VAR_1);
  if (!VAR_15)
   return -VAR_0;
  FUNC_6(VAR_9, FUNC_2(FUNC_0(VAR_15) | VAR_6));
  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_15++, VAR_13++, VAR_14 += VAR_2) {
   unsigned long VAR_16;

   if (VAR_14 >= VAR_11)
    break;
   VAR_16 = VAR_7 | VAR_14;
   VAR_16 &= VAR_8;
   FUNC_5(VAR_15, FUNC_1(VAR_16));
  }
 }
 return 0;
}
