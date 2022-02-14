
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(pgd_t *VAR_9)
{
 unsigned long VAR_10;
 pgd_t *VAR_11;
 pmd_t *VAR_12;
 pte_t *VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = FUNC_2(VAR_3);
 VAR_11 = VAR_9 + VAR_14;
 VAR_10 = 0;

 for (; VAR_14 < VAR_4; VAR_11++, VAR_14++) {
  VAR_12 = FUNC_4(VAR_11);
  if (!VAR_12)
   return -VAR_0;

  if (VAR_10 >= VAR_8)
   continue;

  for (VAR_15 = 0; VAR_15 < VAR_5; VAR_12++, VAR_15++) {
   if (VAR_10 >= VAR_8)
    break;





   if (VAR_7) {
    FUNC_6(VAR_12, FUNC_0(VAR_10, VAR_2));
    VAR_10 += VAR_6;
   } else {
    pte_t *VAR_16;

    VAR_13 = FUNC_5(VAR_12);
    if (!VAR_13)
     return -VAR_0;

    VAR_16 = VAR_13 + VAR_6;
    for (; VAR_13 < VAR_16; VAR_13++, VAR_10++) {
     if (VAR_10 >= VAR_8)
      break;

     FUNC_7(VAR_13, FUNC_1(VAR_10, VAR_1));
    }
   }
  }
 }

 FUNC_3(VAR_9);

 return 0;
}
