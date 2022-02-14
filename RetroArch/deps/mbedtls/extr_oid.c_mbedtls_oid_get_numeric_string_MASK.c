
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int* p; } ;
typedef TYPE_1__ mbedtls_asn1_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char*,unsigned int,...) ;

int FUNC_1( char *VAR_2, size_t VAR_3,
                            const mbedtls_asn1_buf *VAR_4 )
{
    int VAR_5;
    size_t VAR_6, VAR_7;
    unsigned int VAR_8;
    char *VAR_9;

    VAR_9 = VAR_2;
    VAR_7 = VAR_3;


    if( VAR_4->len > 0 )
    {
        VAR_5 = FUNC_0( VAR_9, VAR_7, "%d.%d", VAR_4->p[0] / 40, VAR_4->p[0] % 40 );
        VAR_1;
    }

    VAR_8 = 0;
    for( VAR_6 = 1; VAR_6 < VAR_4->len; VAR_6++ )
    {

        if( ( ( VAR_8 << 7 ) >> 7 ) != VAR_8 )
            return( VAR_0 );

        VAR_8 <<= 7;
        VAR_8 += VAR_4->p[VAR_6] & 0x7F;

        if( !( VAR_4->p[VAR_6] & 0x80 ) )
        {

            VAR_5 = FUNC_0( VAR_9, VAR_7, ".%d", VAR_8 );
            VAR_1;
            VAR_8 = 0;
        }
    }

    return( (int) ( VAR_3 - VAR_7 ) );
}
