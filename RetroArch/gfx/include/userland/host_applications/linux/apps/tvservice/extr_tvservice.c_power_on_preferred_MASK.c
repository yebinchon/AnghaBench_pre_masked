
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3( void )
{
   int VAR_0;

   FUNC_1( "Powering on HDMI with preferred settings" );

   VAR_0 = FUNC_2();
   if ( VAR_0 != 0 )
   {
      FUNC_0( "Failed to power on HDMI with preferred settings" );
   }

   return VAR_0;
}
