
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ppnum_t ;
typedef int pmap_paddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (int ,unsigned int) ;
 unsigned int FUNC_5 (int,int ,unsigned int) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static unsigned long long
FUNC_7(pmap_paddr_t VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 ppnum_t VAR_7 = (VAR_3 >> VAR_1);

 FUNC_1();
 VAR_6 = FUNC_3(VAR_7);
 VAR_4 = FUNC_5(VAR_7, VAR_2, VAR_6);

 VAR_5 = *(volatile unsigned long long *)(FUNC_4(FUNC_0(), VAR_4)
                           | ((uint32_t)VAR_3 & VAR_0));

 FUNC_6(VAR_4);
 FUNC_2();

 return VAR_5;
}
