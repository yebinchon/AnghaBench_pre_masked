
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int next_merged; struct TYPE_4__* next; } ;
typedef TYPE_1__ mbedtls_x509_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char**,unsigned char const*,size_t*,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (unsigned char**,unsigned char const*,TYPE_1__*) ;

int FUNC_3( unsigned char **VAR_4, const unsigned char *VAR_5,
                   mbedtls_x509_name *VAR_6 )
{
    int VAR_7;
    size_t VAR_8;
    const unsigned char *VAR_9;


    while( 1 )
    {



        if( ( VAR_7 = FUNC_0( VAR_4, VAR_5, &VAR_8,
                VAR_0 | VAR_1 ) ) != 0 )
            return( VAR_3 + VAR_7 );

        VAR_9 = *VAR_4 + VAR_8;

        while( 1 )
        {
            if( ( VAR_7 = FUNC_2( VAR_4, VAR_9, VAR_6 ) ) != 0 )
                return( VAR_7 );

            if( *VAR_4 == VAR_9 )
                break;


            VAR_6->next_merged = 1;

            VAR_6->next = FUNC_1( 1, sizeof( mbedtls_x509_name ) );

            if( VAR_6->next == ((void*)0) )
                return( VAR_2 );

            VAR_6 = VAR_6->next;
        }




        if( *VAR_4 == VAR_5 )
            return( 0 );

        VAR_6->next = FUNC_1( 1, sizeof( mbedtls_x509_name ) );

        if( VAR_6->next == ((void*)0) )
            return( VAR_2 );

        VAR_6 = VAR_6->next;
    }
}
