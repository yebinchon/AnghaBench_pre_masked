
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long long,int ,unsigned long) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_4)
{
 unsigned long long VAR_5, VAR_6, VAR_7;
 int VAR_8;



 VAR_5 = VAR_2;
 for (VAR_8 = 0; VAR_8 < (1 << VAR_0); VAR_8++) {
  FUNC_1(VAR_5, FUNC_0(), VAR_4);

  VAR_6 = VAR_5;
  VAR_7 = VAR_6 + VAR_3;
  while (VAR_6 < VAR_7) {
   __asm__ __volatile__ ("ocbp %0, 0" : : "r" (VAR_6));
   VAR_6 += VAR_1;
  }

  FUNC_2();
  VAR_5 += VAR_3;
 }
}
