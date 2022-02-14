
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (char*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_0, unsigned long VAR_1,
      unsigned long VAR_2, unsigned long VAR_3,
      unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6;

 VAR_5 = (1 << VAR_2) - 1;
 VAR_6 = VAR_1 - ((VAR_3 + 1) * VAR_2);







 VAR_5 = ~(VAR_5 << VAR_6);
 VAR_4 = VAR_4 << VAR_6;

 switch (VAR_1) {
 case 8:
  FUNC_3((FUNC_0(VAR_0) & VAR_5) | VAR_4, VAR_0);
  break;
 case 16:
  FUNC_5((FUNC_2(VAR_0) & VAR_5) | VAR_4, VAR_0);
  break;
 case 32:
  FUNC_4((FUNC_1(VAR_0) & VAR_5) | VAR_4, VAR_0);
  break;
 }
}
