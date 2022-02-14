
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int* total; unsigned char const* buffer; } ;
typedef TYPE_1__ mbedtls_sha512_context ;


 int FUNC_0 (TYPE_1__*,unsigned char const*) ;
 int FUNC_1 (void*,unsigned char const*,size_t) ;

void FUNC_2( mbedtls_sha512_context *VAR_0, const unsigned char *VAR_1,
                    size_t VAR_2 )
{
    size_t VAR_3;
    unsigned int VAR_4;

    if( VAR_2 == 0 )
        return;

    VAR_4 = (unsigned int) (VAR_0->total[0] & 0x7F);
    VAR_3 = 128 - VAR_4;

    VAR_0->total[0] += (uint64_t) VAR_2;

    if( VAR_0->total[0] < (uint64_t) VAR_2 )
        VAR_0->total[1]++;

    if( VAR_4 && VAR_2 >= VAR_3 )
    {
        FUNC_1( (void *) (VAR_0->buffer + VAR_4), VAR_1, VAR_3 );
        FUNC_0( VAR_0, VAR_0->buffer );
        VAR_1 += VAR_3;
        VAR_2 -= VAR_3;
        VAR_4 = 0;
    }

    while( VAR_2 >= 128 )
    {
        FUNC_0( VAR_0, VAR_1 );
        VAR_1 += 128;
        VAR_2 -= 128;
    }

    if( VAR_2 > 0 )
        FUNC_1( (void *) (VAR_0->buffer + VAR_4), VAR_1, VAR_2 );
}
