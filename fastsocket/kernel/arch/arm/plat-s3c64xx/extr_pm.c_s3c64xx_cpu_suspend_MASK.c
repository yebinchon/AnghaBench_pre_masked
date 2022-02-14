
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_4;



 VAR_4 = FUNC_0(VAR_2);
 VAR_4 &= ~VAR_0;
 VAR_4 |= VAR_1;
 FUNC_1(VAR_4, VAR_2);



 FUNC_1(FUNC_0(VAR_3),
       VAR_3);


 FUNC_3(3 << 1, 0xf);




 VAR_4 = 0;

 asm("b 1f\n\t"
     ".align 5\n\t"
     "1:\n\t"
     "mcr p15, 0, %0, c7, c10, 5\n\t"
     "mcr p15, 0, %0, c7, c10, 4\n\t"
     "mcr p15, 0, %0, c7, c0, 4" :: "r" (VAR_4));



 FUNC_2("sleep resumed to originator?");
}
