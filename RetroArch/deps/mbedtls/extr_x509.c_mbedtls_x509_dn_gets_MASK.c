
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int s ;
struct TYPE_5__ {size_t len; unsigned char* p; } ;
struct TYPE_7__ {int p; } ;
struct TYPE_6__ {unsigned char next_merged; struct TYPE_6__* next; TYPE_1__ val; TYPE_4__ oid; } ;
typedef TYPE_2__ mbedtls_x509_name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,char const**) ;
 int FUNC_1 (char*,size_t,char*,...) ;
 int FUNC_2 (char*,int ,int) ;

int FUNC_3( char *VAR_2, size_t VAR_3, const mbedtls_x509_name *VAR_4 )
{
    int VAR_5;
    size_t VAR_6, VAR_7;
    unsigned char VAR_8, VAR_9 = 0;
    const mbedtls_x509_name *VAR_10;
    const char *VAR_11 = ((void*)0);
    char VAR_12[VAR_0], *VAR_13;

    FUNC_2( VAR_12, 0, sizeof( VAR_12 ) );

    VAR_10 = VAR_4;
    VAR_13 = VAR_2;
    VAR_7 = VAR_3;

    while( VAR_10 != ((void*)0) )
    {
        if( !VAR_10->oid.p )
        {
            VAR_10 = VAR_10->next;
            continue;
        }

        if( VAR_10 != VAR_4 )
        {
            VAR_5 = FUNC_1( VAR_13, VAR_7, VAR_9 ? " + " : ", " );
            VAR_1;
        }

        VAR_5 = FUNC_0( &VAR_10->oid, &VAR_11 );

        if( VAR_5 == 0 )
            VAR_5 = FUNC_1( VAR_13, VAR_7, "%s=", VAR_11 );
        else
            VAR_5 = FUNC_1( VAR_13, VAR_7, "\?\?=" );
        VAR_1;

        for( VAR_6 = 0; VAR_6 < VAR_10->val.len; VAR_6++ )
        {
            if( VAR_6 >= sizeof( VAR_12 ) - 1 )
                break;

            VAR_8 = VAR_10->val.p[VAR_6];
            if( VAR_8 < 32 || VAR_8 == 127 || ( VAR_8 > 128 && VAR_8 < 160 ) )
                 VAR_12[VAR_6] = '?';
            else VAR_12[VAR_6] = VAR_8;
        }
        VAR_12[VAR_6] = '\0';
        VAR_5 = FUNC_1( VAR_13, VAR_7, "%s", VAR_12 );
        VAR_1;

        VAR_9 = VAR_10->next_merged;
        VAR_10 = VAR_10->next;
    }

    return( (int) ( VAR_3 - VAR_7 ) );
}
