
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ clock_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2( void )
{
 int const VAR_1 = 4;
 static clock_t VAR_2;
 static int VAR_3;
 if ( !VAR_3 )
 {
  clock_t VAR_4 = FUNC_0();
  while ( FUNC_0() == VAR_4 ) { }
  if ( FUNC_0() - VAR_4 > VAR_0 )
  {

   FUNC_1( "Insufficient time resolution\n" );
   return 0;
  }
  VAR_2 = FUNC_0() + VAR_0 * VAR_1;
 }
 else if ( FUNC_0() >= VAR_2 )
 {
  int VAR_5 = VAR_3 / VAR_1;
  FUNC_1( "Performance: %d frames per second, which would use %d%% CPU at 60 FPS\n",
    VAR_5, 60 * 100 / VAR_5 );
  return 0;
 }
 VAR_3++;

 return 1;
}
