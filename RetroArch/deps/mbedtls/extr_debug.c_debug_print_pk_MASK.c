
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int name ;
typedef int mbedtls_ssl_context ;
struct TYPE_4__ {scalar_t__ type; int value; int name; } ;
typedef TYPE_1__ mbedtls_pk_debug_item ;
typedef int mbedtls_pk_context ;
typedef int items ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int const*,int,char const*,int,char*) ;
 int FUNC_1 (int const*,int,char const*,int,char*,int ) ;
 int FUNC_2 (int const*,int,char const*,int,char*,int ) ;
 scalar_t__ FUNC_3 (int const*,TYPE_1__*) ;
 int FUNC_4 (char*,int,char*,char const*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_6( const mbedtls_ssl_context *VAR_4, int VAR_5,
                            const char *VAR_6, int VAR_7,
                            const char *VAR_8, const mbedtls_pk_context *VAR_9 )
{
    size_t VAR_10;
    mbedtls_pk_debug_item VAR_11[VAR_1];
    char VAR_12[16];

    FUNC_5( VAR_11, 0, sizeof( VAR_11 ) );

    if( FUNC_3( VAR_9, VAR_11 ) != 0 )
    {
        FUNC_0( VAR_4, VAR_5, VAR_6, VAR_7,
                          "invalid PK context\n" );
        return;
    }

    for( VAR_10 = 0; VAR_10 < VAR_1; VAR_10++ )
    {
        if( VAR_11[VAR_10].type == VAR_3 )
            return;

        FUNC_4( VAR_12, sizeof( VAR_12 ), "%s%s", VAR_8, VAR_11[VAR_10].name );
        VAR_12[sizeof( VAR_12 ) - 1] = '\0';

        if( VAR_11[VAR_10].type == VAR_2 )
            FUNC_2( VAR_4, VAR_5, VAR_6, VAR_7, VAR_12, VAR_11[VAR_10].value );
        else





            FUNC_0( VAR_4, VAR_5, VAR_6, VAR_7,
                              "should not happen\n" );
    }
}
