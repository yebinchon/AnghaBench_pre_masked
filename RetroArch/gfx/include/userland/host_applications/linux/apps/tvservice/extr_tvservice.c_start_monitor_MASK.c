
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4( void )
{
   if ( FUNC_3( &VAR_4, "tvservice" ) != VAR_2 )
   {
      FUNC_0( "Failed to create quit event" );

      return -1;
   }


   FUNC_1( VAR_0, VAR_3 );
   FUNC_1( VAR_1, VAR_3 );

   FUNC_2( &VAR_5, ((void*)0) );

   return 0;
}
