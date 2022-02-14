
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suspend_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int (*) (),int ,int ) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_12(suspend_state_t VAR_9)
{
 FUNC_1();
 FUNC_3();

 FUNC_7("AT91: PM - wake mask %08x, pm state %d\n",

   (FUNC_5(VAR_4)
     | (1 << VAR_2)
     | (1 << VAR_3)
     | (VAR_5))
    & FUNC_5(VAR_0),
   VAR_9);

 switch (VAR_9) {





  case 130:



   if (!FUNC_4())
    goto error;





   if (&FUNC_11) {




    FUNC_11();
    break;
   } else {
    FUNC_8("AT91: PM - no slow clock mode enabled ...\n");

   }







  case 128:





   asm("b 1f; .align 5; 1:");
   asm("mcr p15, 0, r0, c7, c10, 4");
   FUNC_10();
   asm("mcr p15, 0, r0, c7, c0, 4");
   FUNC_9();
   break;

  case 129:
   asm("mcr p15, 0, r0, c7, c0, 4");
   break;

  default:
   FUNC_7("AT91: PM - bogus suspend state %d\n", VAR_9);
   goto error;
 }

 FUNC_7("AT91: PM - wakeup %08x\n",
   FUNC_5(VAR_1) & FUNC_5(VAR_0));

error:
 VAR_8 = 129;
 FUNC_2();
 FUNC_0();
 return 0;
}
