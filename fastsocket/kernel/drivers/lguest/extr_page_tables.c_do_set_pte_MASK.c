
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg_cpu {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lg_cpu*,int ) ;
 int FUNC_2 (struct lg_cpu*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (struct lg_cpu*,int,unsigned long) ;
 int * FUNC_9 (struct lg_cpu*,int ,unsigned long) ;
 int * FUNC_10 (struct lg_cpu*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct lg_cpu *VAR_3, int VAR_4,
         unsigned long VAR_5, pte_t VAR_6)
{

 pgd_t *VAR_7 = FUNC_8(VAR_3, VAR_4, VAR_5);





 if (FUNC_3(*VAR_7) & VAR_2) {





   pte_t *VAR_8 = FUNC_10(VAR_3, *VAR_7, VAR_5);
   FUNC_6(*VAR_8);







   if (FUNC_5(VAR_6) & (VAR_1 | VAR_0)) {
    FUNC_1(VAR_3, VAR_6);
    FUNC_7(VAR_8,
     FUNC_2(VAR_3, VAR_6,
      FUNC_5(VAR_6) & VAR_1));
   } else {




    FUNC_7(VAR_8, FUNC_0(0));
   }



 }
}
