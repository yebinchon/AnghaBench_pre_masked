
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t buflen; unsigned char const* buf; } ;
typedef TYPE_1__ blake2b_state ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char const*) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (unsigned char const*,unsigned char const*,size_t) ;

int FUNC_3( blake2b_state *VAR_1, const void *VAR_2, size_t VAR_3 )
{
  const unsigned char * VAR_4 = (const unsigned char *)VAR_2;
  if( VAR_3 > 0 )
  {
    size_t VAR_5 = VAR_1->buflen;
    size_t VAR_6 = VAR_0 - VAR_5;
    if( VAR_3 > VAR_6 )
    {
      VAR_1->buflen = 0;
      FUNC_2( VAR_1->buf + VAR_5, VAR_4, VAR_6 );
      FUNC_1( VAR_1, VAR_0 );
      FUNC_0( VAR_1, VAR_1->buf );
      VAR_4 += VAR_6; VAR_3 -= VAR_6;
      while(VAR_3 > VAR_0) {
        FUNC_1(VAR_1, VAR_0);
        FUNC_0( VAR_1, VAR_4 );
        VAR_4 += VAR_0;
        VAR_3 -= VAR_0;
      }
    }
    FUNC_2( VAR_1->buf + VAR_1->buflen, VAR_4, VAR_3 );
    VAR_1->buflen += VAR_3;
  }
  return 0;
}
