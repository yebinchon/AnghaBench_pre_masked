
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char tag; unsigned char* p; size_t len; } ;
struct TYPE_6__ {struct TYPE_6__* next; int entry_ext; int revocation_date; int serial; TYPE_1__ raw; } ;
typedef TYPE_2__ mbedtls_x509_crl_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char**,unsigned char const*,size_t*,int) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (unsigned char**,unsigned char const*,int *) ;
 int FUNC_3 (unsigned char**,unsigned char const*,int *) ;
 int FUNC_4 (unsigned char**,unsigned char const*,int *) ;

__attribute__((used)) static int FUNC_5( unsigned char **VAR_4,
                             const unsigned char *VAR_5,
                             mbedtls_x509_crl_entry *VAR_6 )
{
    int VAR_7;
    size_t VAR_8;
    mbedtls_x509_crl_entry *VAR_9 = VAR_6;

    if( *VAR_4 == VAR_5 )
        return( 0 );

    if( ( VAR_7 = FUNC_0( VAR_4, VAR_5, &VAR_8,
            VAR_1 | VAR_0 ) ) != 0 )
    {
        if( VAR_7 == VAR_2 )
            return( 0 );

        return( VAR_7 );
    }

    VAR_5 = *VAR_4 + VAR_8;

    while( *VAR_4 < VAR_5 )
    {
        size_t VAR_10;
        const unsigned char *VAR_11;

        if( ( VAR_7 = FUNC_0( VAR_4, VAR_5, &VAR_10,
                VAR_1 | VAR_0 ) ) != 0 )
        {
            return( VAR_7 );
        }

        VAR_9->raw.tag = **VAR_4;
        VAR_9->raw.p = *VAR_4;
        VAR_9->raw.len = VAR_10;
        VAR_11 = *VAR_4 + VAR_10;

        if( ( VAR_7 = FUNC_2( VAR_4, VAR_11, &VAR_9->serial ) ) != 0 )
            return( VAR_7 );

        if( ( VAR_7 = FUNC_3( VAR_4, VAR_11,
                                   &VAR_9->revocation_date ) ) != 0 )
            return( VAR_7 );

        if( ( VAR_7 = FUNC_4( VAR_4, VAR_11,
                                            &VAR_9->entry_ext ) ) != 0 )
            return( VAR_7 );

        if( *VAR_4 < VAR_5 )
        {
            VAR_9->next = FUNC_1( 1, sizeof( mbedtls_x509_crl_entry ) );

            if( VAR_9->next == ((void*)0) )
                return( VAR_3 );

            VAR_9 = VAR_9->next;
        }
    }

    return( 0 );
}
