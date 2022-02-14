
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t len; int * p; } ;
struct TYPE_5__ {struct TYPE_5__* next; TYPE_1__ buf; } ;
typedef TYPE_2__ mbedtls_x509_sequence ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0( char **VAR_1, size_t *VAR_2,
                                       const mbedtls_x509_sequence *VAR_3 )
{
    size_t VAR_4;
    size_t VAR_5 = *VAR_2;
    char *VAR_6 = *VAR_1;
    const mbedtls_x509_sequence *VAR_7 = VAR_3;
    const char *VAR_8 = "";
    size_t VAR_9 = 0;

    while( VAR_7 != ((void*)0) )
    {
        if( VAR_7->buf.len + VAR_9 >= VAR_5 )
        {
            *VAR_6 = '\0';
            return( VAR_0 );
        }

        VAR_5 -= VAR_7->buf.len + VAR_9;
        for( VAR_4 = 0; VAR_4 < VAR_9; VAR_4++ )
            *VAR_6++ = VAR_8[VAR_4];
        for( VAR_4 = 0; VAR_4 < VAR_7->buf.len; VAR_4++ )
            *VAR_6++ = VAR_7->buf.p[VAR_4];

        VAR_8 = ", ";
        VAR_9 = 2;

        VAR_7 = VAR_7->next;
    }

    *VAR_6 = '\0';

    *VAR_2 = VAR_5;
    *VAR_1 = VAR_6;

    return( 0 );
}
