
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int,int,char*,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int (*) (int *,int ,int )) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (double) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int) ;
 scalar_t__ FUNC_17 (int *) ;
 int VAR_5 ;
 int FUNC_18 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_19 (int *,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

int FUNC_20( void )
{
   GLFWwindow* VAR_11;


   if( !FUNC_5() )
      FUNC_1( VAR_0 );

   FUNC_16(VAR_2, 16);

   VAR_11 = FUNC_2( 400, 400, "Boing (classic Amiga demo)", ((void*)0), ((void*)0) );
   if (!VAR_11)
   {
       FUNC_15();
       FUNC_1( VAR_0 );
   }

   FUNC_9(VAR_11, FUNC_19);
   FUNC_10(VAR_11, VAR_6);
   FUNC_11(VAR_11, VAR_7);
   FUNC_8(VAR_11, VAR_3);

   FUNC_6(VAR_11);
   FUNC_14( 1 );

   FUNC_3(VAR_11, &VAR_10, &VAR_5);
   FUNC_19(VAR_11, VAR_10, VAR_5);

   FUNC_12( 0.0 );

   FUNC_18();


   for (;;)
   {

       VAR_8 = FUNC_4();
       VAR_4 = VAR_8 - VAR_9;
       VAR_9 = VAR_8;


       FUNC_0();


       FUNC_13(VAR_11);
       FUNC_7();


       if (FUNC_17(VAR_11))
           break;
   }

   FUNC_15();
   FUNC_1( VAR_1 );
}
