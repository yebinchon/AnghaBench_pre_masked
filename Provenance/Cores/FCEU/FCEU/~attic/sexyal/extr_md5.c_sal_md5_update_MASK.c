
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sal_md5_context {int* total; int * buffer; } ;


 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (struct sal_md5_context*,int *) ;

void FUNC_2( struct sal_md5_context *VAR_0, uint8_t *VAR_1, uint32_t VAR_2 )
{
    uint32_t VAR_3, VAR_4;

    if( ! VAR_2 ) return;

    VAR_3 = ( VAR_0->total[0] >> 3 ) & 0x3F;
    VAR_4 = 64 - VAR_3;

    VAR_0->total[0] += VAR_2 << 3;
    VAR_0->total[1] += VAR_2 >> 29;

    VAR_0->total[0] &= 0xFFFFFFFF;
    VAR_0->total[1] += VAR_0->total[0] < ( VAR_2 << 3 );

    if( VAR_3 && VAR_2 >= VAR_4 )
    {
        FUNC_0( (void *) (VAR_0->buffer + VAR_3), (void *) VAR_1, VAR_4 );
        FUNC_1( VAR_0, VAR_0->buffer );
        VAR_2 -= VAR_4;
        VAR_1 += VAR_4;
        VAR_3 = 0;
    }

    while( VAR_2 >= 64 )
    {
        FUNC_1( VAR_0, VAR_1 );
        VAR_2 -= 64;
        VAR_1 += 64;
    }

    if( VAR_2 )
    {
        FUNC_0( (void *) (VAR_0->buffer + VAR_3), (void *) VAR_1, VAR_2 );
    }
}
