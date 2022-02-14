
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int VAR_4 ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9()
{
 u32 VAR_5;

 FUNC_1();

 if(VAR_4 > 0)
  FUNC_7("\n\tReloading in %d seconds\n", VAR_4/50);

 while ( 1 )
 {
  FUNC_2();

  int VAR_6 = FUNC_0(0);

  if( (VAR_6 & VAR_2) || FUNC_3() ||
   VAR_4 == 0 )
  {
   FUNC_7("\n\tReload\n\n\n");
   FUNC_5(VAR_5);
   FUNC_6 ();
  }

  if ( VAR_6 & VAR_1 )
  {
   FUNC_7("\n\tReset\n\n\n");



   FUNC_6 ();

  }

  FUNC_8(20000);
  if(VAR_4 > 0)
   VAR_4--;
 }
}
