
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long long,int ,unsigned long) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_4,
             unsigned long VAR_5)
{
 unsigned long long VAR_6;
 unsigned long long VAR_7, VAR_8;

 VAR_6 = VAR_2 + (VAR_5 & VAR_0);



 FUNC_1(VAR_6, FUNC_0(), VAR_4);

 VAR_7 = VAR_6;
 VAR_8 = VAR_7 + VAR_3;

 while (VAR_7 < VAR_8) {



  __asm__ __volatile__ ("ocbp %0, 0" : : "r" (VAR_7));
  VAR_7 += VAR_1;
 }

 FUNC_2();
}
