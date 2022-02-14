
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int entropy_len; scalar_t__ (* f_entropy ) (int ,unsigned char*,int) ;int reseed_counter; int p_entropy; } ;
typedef TYPE_1__ mbedtls_ctr_drbg_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_1 (TYPE_1__*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_4 (int ,unsigned char*,int) ;

int FUNC_5( mbedtls_ctr_drbg_context *VAR_3,
                     const unsigned char *VAR_4, size_t VAR_5 )
{
    unsigned char VAR_6[VAR_0];
    size_t VAR_7 = 0;

    if( VAR_3->entropy_len > VAR_0 ||
        VAR_5 > VAR_0 - VAR_3->entropy_len )
        return( VAR_2 );

    FUNC_3( VAR_6, 0, VAR_0 );




    if( 0 != VAR_3->f_entropy( VAR_3->p_entropy, VAR_6,
                             VAR_3->entropy_len ) )
    {
        return( VAR_1 );
    }

    VAR_7 += VAR_3->entropy_len;




    if( VAR_4 && VAR_5 )
    {
        FUNC_2( VAR_6 + VAR_7, VAR_4, VAR_5 );
        VAR_7 += VAR_5;
    }




    FUNC_0( VAR_6, VAR_6, VAR_7 );




    FUNC_1( VAR_3, VAR_6 );
    VAR_3->reseed_counter = 1;

    return( 0 );
}
