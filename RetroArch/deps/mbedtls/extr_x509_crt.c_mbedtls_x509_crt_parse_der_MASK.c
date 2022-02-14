
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ version; struct TYPE_7__* next; } ;
typedef TYPE_1__ mbedtls_x509_crt ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned char const*,size_t) ;

int FUNC_4( mbedtls_x509_crt *VAR_2, const unsigned char *VAR_3,
                        size_t VAR_4 )
{
    int VAR_5;
    mbedtls_x509_crt *VAR_6 = VAR_2, *VAR_7 = ((void*)0);




    if( VAR_6 == ((void*)0) || VAR_3 == ((void*)0) )
        return( VAR_1 );

    while( VAR_6->version != 0 && VAR_6->next != ((void*)0) )
    {
        VAR_7 = VAR_6;
        VAR_6 = VAR_6->next;
    }




    if( VAR_6->version != 0 && VAR_6->next == ((void*)0) )
    {
        VAR_6->next = FUNC_0( 1, sizeof( mbedtls_x509_crt ) );

        if( VAR_6->next == ((void*)0) )
            return( VAR_0 );

        VAR_7 = VAR_6;
        FUNC_2( VAR_6->next );
        VAR_6 = VAR_6->next;
    }

    if( ( VAR_5 = FUNC_3( VAR_6, VAR_3, VAR_4 ) ) != 0 )
    {
        if( VAR_7 )
            VAR_7->next = ((void*)0);

        if( VAR_6 != VAR_2 )
            FUNC_1( VAR_6 );

        return( VAR_5 );
    }

    return( 0 );
}
