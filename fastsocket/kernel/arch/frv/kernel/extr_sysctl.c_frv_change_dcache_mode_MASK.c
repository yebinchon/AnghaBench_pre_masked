
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4;

 FUNC_3(VAR_3);

 VAR_4 = FUNC_0(0);
 VAR_4 &= ~VAR_1;
 FUNC_1(0, VAR_4);

 asm volatile("	dcef	@(gr0,gr0),#1	\n"
       "	membar			\n"
       : : : "memory"
       );

 VAR_4 = (VAR_4 & ~VAR_0) | VAR_2;
 FUNC_1(0, VAR_4);
 VAR_4 |= VAR_1;
 FUNC_1(0, VAR_4);

 FUNC_2(VAR_3);


}
