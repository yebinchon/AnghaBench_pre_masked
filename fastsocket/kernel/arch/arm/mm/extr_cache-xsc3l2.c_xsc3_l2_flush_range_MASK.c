
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4;

 if (VAR_1 == 0 && VAR_2 == -1ul) {
  FUNC_5();
  return;
 }

 VAR_3 = -1;
 FUNC_2(VAR_4);

 VAR_1 &= ~(VAR_0 - 1);
 while (VAR_1 < VAR_2) {
  VAR_3 = FUNC_3(VAR_1, VAR_3, VAR_4);
  FUNC_4(VAR_3);
  FUNC_6(VAR_3);
  VAR_1 += VAR_0;
 }

 FUNC_1(VAR_4);

 FUNC_0();
}
