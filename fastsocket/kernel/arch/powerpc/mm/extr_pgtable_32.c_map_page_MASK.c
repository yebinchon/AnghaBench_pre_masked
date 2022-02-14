
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;
typedef int phys_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned long) ;
 int * FUNC_4 (int ,unsigned long) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int *,unsigned long,int *,int ) ;

int FUNC_9(unsigned long VAR_5, phys_addr_t VAR_6, int VAR_7)
{
 pmd_t *VAR_8;
 pte_t *VAR_9;
 int VAR_10 = -VAR_0;


 VAR_8 = FUNC_4(FUNC_7(FUNC_3(VAR_5), VAR_5), VAR_5);

 VAR_9 = FUNC_5(VAR_8, VAR_5);
 if (VAR_9 != 0) {
  VAR_10 = 0;



  FUNC_0((FUNC_6(*VAR_9) & (VAR_3 | VAR_2)) &&
         VAR_7);
  FUNC_8(&VAR_4, VAR_5, VAR_9, FUNC_2(VAR_6 >> VAR_1,
           FUNC_1(VAR_7)));
 }
 return VAR_10;
}
