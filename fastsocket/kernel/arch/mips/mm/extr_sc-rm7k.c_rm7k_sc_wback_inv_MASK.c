
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5;

 FUNC_3("rm7k_sc_wback_inv[%08lx,%08lx]", VAR_2, VAR_3);


 FUNC_0(VAR_3 == 0);

 FUNC_1(VAR_2, VAR_2 + VAR_3);

 if (!VAR_0)
  return;

 VAR_5 = VAR_2 & ~(VAR_1 - 1);
 VAR_4 = (VAR_2 + VAR_3 - 1) & ~(VAR_1 - 1);
 while(1) {
  FUNC_2(VAR_5);
  if (VAR_5 == VAR_4)
   break;
  VAR_5 += VAR_1;
 }
}
