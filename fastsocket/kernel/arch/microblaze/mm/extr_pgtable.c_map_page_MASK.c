
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned long,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned long) ;
 int * FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long,int *,int ) ;

int FUNC_8(unsigned long VAR_4, phys_addr_t VAR_5, int VAR_6)
{
 pmd_t *VAR_7;
 pte_t *VAR_8;
 int VAR_9 = -VAR_0;


 VAR_7 = FUNC_4(FUNC_3(VAR_4), VAR_4);

 VAR_8 = FUNC_6(VAR_7, VAR_4);


 if (VAR_8 != ((void*)0)) {
  VAR_9 = 0;
  FUNC_7(&VAR_2, VAR_4, VAR_8, FUNC_2(VAR_5 >> VAR_1,
    FUNC_0(VAR_6)));
  if (VAR_3)
   FUNC_1(0, VAR_4, FUNC_5(*VAR_7));


 }

 return VAR_9;
}
