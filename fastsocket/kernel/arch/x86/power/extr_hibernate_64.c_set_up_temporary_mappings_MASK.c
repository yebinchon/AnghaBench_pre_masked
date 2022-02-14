
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_7(void)
{
 unsigned long VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_6 = (pgd_t *)FUNC_1(VAR_1);
 if (!VAR_6)
  return -VAR_0;


 FUNC_6(VAR_6 + FUNC_4(VAR_3),
  VAR_4[FUNC_4(VAR_3)]);


 VAR_7 = (unsigned long)FUNC_3(0);
 VAR_8 = (unsigned long)FUNC_3(VAR_5);

 for (; VAR_7 < VAR_8; VAR_7 = VAR_9) {
  pud_t *VAR_11 = (pud_t *)FUNC_1(VAR_1);
  if (!VAR_11)
   return -VAR_0;
  VAR_9 = VAR_7 + VAR_2;
  if (VAR_9 > VAR_8)
   VAR_9 = VAR_8;
  if ((VAR_10 = FUNC_5(VAR_11, FUNC_0(VAR_7), FUNC_0(VAR_9))))
   return VAR_10;
  FUNC_6(VAR_6 + FUNC_4(VAR_7),
   FUNC_2(FUNC_0(VAR_11)));
 }
 return 0;
}
