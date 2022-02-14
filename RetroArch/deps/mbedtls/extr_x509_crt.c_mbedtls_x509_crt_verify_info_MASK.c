
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct x509_crt_verify_string {int code; int * string; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,char const*,...) ;
 struct x509_crt_verify_string* VAR_1 ;

int FUNC_1( char *VAR_2, size_t VAR_3, const char *VAR_4,
                          uint32_t VAR_5 )
{
    int VAR_6;
    const struct x509_crt_verify_string *VAR_7;
    char *VAR_8 = VAR_2;
    size_t VAR_9 = VAR_3;

    for( VAR_7 = VAR_1; VAR_7->string != ((void*)0) ; VAR_7++ )
    {
        if( ( VAR_5 & VAR_7->code ) == 0 )
            continue;

        VAR_6 = FUNC_0( VAR_8, VAR_9, "%s%s\n", VAR_4, VAR_7->string );
        VAR_0;
        VAR_5 ^= VAR_7->code;
    }

    if( VAR_5 != 0 )
    {
        VAR_6 = FUNC_0( VAR_8, VAR_9, "%sUnknown reason "
                                       "(this should not happen)\n", VAR_4 );
        VAR_0;
    }

    return( (int) ( VAR_3 - VAR_9 ) );
}
