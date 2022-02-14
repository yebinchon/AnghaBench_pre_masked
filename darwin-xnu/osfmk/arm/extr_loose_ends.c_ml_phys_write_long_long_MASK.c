
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
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (int ,unsigned int) ;
 unsigned int FUNC_5 (int,int,unsigned int) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static void
FUNC_7(pmap_paddr_t VAR_4, unsigned long long VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 ppnum_t VAR_8 = (VAR_4 >> VAR_1);

 FUNC_1();
 VAR_7 = FUNC_3(VAR_8);
 VAR_6 = FUNC_5(VAR_8, VAR_2|VAR_3, VAR_7);

 *(volatile unsigned long long *)(FUNC_4(FUNC_0(), VAR_6)
                         | ((uint32_t)VAR_4 & VAR_0)) = VAR_5;

 FUNC_6(VAR_6);
 FUNC_2();
}
