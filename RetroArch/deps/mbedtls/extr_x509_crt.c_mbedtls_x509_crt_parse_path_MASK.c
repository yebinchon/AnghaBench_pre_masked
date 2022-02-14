
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int szDir ;
struct stat {int st_mode; } ;
struct dirent {int d_name; } ;
typedef int mbedtls_x509_crt ;
struct TYPE_4__ {int dwFileAttributes; int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef char WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DIR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,char*,int,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,char*,int,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,char const*,int ) ;
 int VAR_10 ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (char*,char const*,size_t) ;
 int FUNC_14 (char*,int ,size_t) ;
 int * FUNC_15 (char const*) ;
 struct dirent* FUNC_16 (int *) ;
 int FUNC_17 (char*,struct stat*) ;
 size_t FUNC_18 (char const*) ;

int FUNC_19( mbedtls_x509_crt *VAR_11, const char *VAR_12 )
{
    int VAR_13 = 0;
    int VAR_14;
    int VAR_15;
    struct stat VAR_16;
    struct dirent *VAR_17;
    char VAR_18[VAR_9];
    DIR *VAR_19 = FUNC_15( VAR_12 );

    if( VAR_19 == ((void*)0) )
        return( VAR_8 );
    while( ( VAR_17 = FUNC_16( VAR_19 ) ) != ((void*)0) )
    {
        VAR_15 = FUNC_11( VAR_18, sizeof VAR_18,
                                    "%s/%s", VAR_12, VAR_17->d_name );

        if( VAR_15 < 0 || (size_t)VAR_15 >= sizeof VAR_18 )
        {
            VAR_13 = VAR_7;
            goto cleanup;
        }
        else if( FUNC_17( VAR_18, &VAR_16 ) == -1 )
        {
            VAR_13 = VAR_8;
            goto cleanup;
        }

        if( !FUNC_5( VAR_16.st_mode ) )
            continue;


        VAR_14 = FUNC_12( VAR_11, VAR_18 );
        if( VAR_14 < 0 )
            VAR_13++;
        else
            VAR_13 += VAR_14;
    }

cleanup:
    FUNC_7( VAR_19 );
    return( VAR_13 );
}
