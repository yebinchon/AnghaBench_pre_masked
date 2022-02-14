
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int ) ;

void FUNC_11(void)
{
 extern __u32 VAR_5;
 __u32 VAR_6 = VAR_5;
 int VAR_7 = 0;

 FUNC_3();
 FUNC_1();
 if (FUNC_5()) {
  FUNC_2();
  FUNC_4();
  return;
 }






 while (VAR_4) {







  VAR_7 = 1;
  break;
 }







 if (FUNC_7())
  VAR_6 &= ~(1 << 6);




 if ((VAR_6 != ~0) || !VAR_7) {

  __u32 VAR_8 = FUNC_8(VAR_0);
  if (FUNC_0())
   VAR_6 &= VAR_2;
  else
   VAR_6 &= VAR_3;
  FUNC_10(VAR_6, VAR_0);
  __asm__ volatile ("mcr	p15, 0, r0, c7, c0, 4");
  FUNC_10(VAR_8, VAR_0);

  FUNC_2();
  FUNC_4();
  return;
 }
 FUNC_9(FUNC_8(VAR_0),
     FUNC_8(VAR_1));

 FUNC_2();
 FUNC_4();
}
