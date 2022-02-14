
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(unsigned int VAR_5)
{
 int VAR_6;
 uint64_t VAR_7;

 if ((VAR_5 < VAR_0) || (VAR_5 > VAR_1))
  FUNC_0("arch_teardown_msi_irq: Attempted to teardown illegal "
        "MSI interrupt (%d)", VAR_5);
 VAR_5 -= VAR_0;






 VAR_6 = 0;
 while ((VAR_5+VAR_6 < 64) &&
        (VAR_4 & (1ull << (VAR_5 + VAR_6))))
  VAR_6++;
 VAR_6++;

 VAR_7 = (1 << VAR_6) - 1;

 VAR_7 <<= VAR_5;
 if ((VAR_2 & VAR_7) != VAR_7)
  FUNC_0("arch_teardown_msi_irq: Attempted to teardown MSI "
        "interrupt (%d) not in use", VAR_5);


 FUNC_1(&VAR_3);
 VAR_2 &= ~VAR_7;
 VAR_4 &= ~VAR_7;
 FUNC_2(&VAR_3);
}
