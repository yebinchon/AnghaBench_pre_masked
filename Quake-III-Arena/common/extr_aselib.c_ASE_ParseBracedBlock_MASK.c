
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 char const* VAR_1 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3( void (*VAR_2)( const char *VAR_3 ) )
{
 int VAR_4 = 0;

 while ( FUNC_0( VAR_0 ) )
 {
  if ( !FUNC_2( VAR_1, "{" ) )
  {
   VAR_4++;
  }
  else if ( !FUNC_2( VAR_1, "}" ) )
  {
   --VAR_4;
   if ( VAR_4 == 0 )
    break;
   else if ( VAR_4 < 0 )
    FUNC_1( "Unexpected '}'" );
  }
  else
  {
   if ( VAR_2 )
    VAR_2( VAR_1 );
  }
 }
}
