
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int blake2b_state ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,void*,size_t) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 scalar_t__ FUNC_2 (int *,size_t,void const*,size_t) ;
 int FUNC_3 (int *,int const*,size_t) ;

int FUNC_4( void *VAR_2, size_t VAR_3, const void *VAR_4, size_t VAR_5, const void *VAR_6, size_t VAR_7 )
{
  blake2b_state VAR_8[1];


  if ( ((void*)0) == VAR_4 && VAR_5 > 0 ) return -1;

  if ( ((void*)0) == VAR_2 ) return -1;

  if( ((void*)0) == VAR_6 && VAR_7 > 0 ) return -1;

  if( !VAR_3 || VAR_3 > VAR_1 ) return -1;

  if( VAR_7 > VAR_0 ) return -1;

  if( VAR_7 > 0 )
  {
    if( FUNC_2( VAR_8, VAR_3, VAR_6, VAR_7 ) < 0 ) return -1;
  }
  else
  {
    if( FUNC_1( VAR_8, VAR_3 ) < 0 ) return -1;
  }

  FUNC_3( VAR_8, ( const uint8_t * )VAR_4, VAR_5 );
  FUNC_0( VAR_8, VAR_2, VAR_3 );
  return 0;
}
