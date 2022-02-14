
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned long long VAR_1 ;
 long long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 unsigned long long FUNC_2 (char const*,char**,int) ;

long long int FUNC_3( const char* VAR_4, char** VAR_5, int VAR_6 ) {
  int VAR_7 = 0;
  unsigned long long int VAR_8;
  const char* VAR_9 = VAR_4;

  while ( FUNC_1( *VAR_4 ) ) {
      VAR_4++;
  }

  if ( *VAR_4 == '-' && FUNC_0( VAR_4[ 1 ] ) ) {
      VAR_7 = -1;
      VAR_4++;
  }

  VAR_8 = FUNC_2( VAR_4, VAR_5, VAR_6 );

  if ( VAR_5 && *VAR_5 == VAR_4 ) {
      *VAR_5 = ( char* )VAR_9;
  }

  if ( VAR_8 > VAR_1 ) {
    if ( VAR_8 == 0x8000000000000000ull && VAR_7 ) {
      VAR_3 = 0;
      return VAR_8;
    }

    VAR_3=VAR_0;

    return ( VAR_7 ? VAR_2 : VAR_1 );
  }

  return ( VAR_7 ? -VAR_8 : VAR_8 );
}
