
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_asn1_named_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **) ;
 int * FUNC_1 (int **,char const*,int,unsigned char*,int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,int) ;

int FUNC_4( mbedtls_asn1_named_data **VAR_4, const char *VAR_5 )
{
    int VAR_6 = 0;
    const char *VAR_7 = VAR_5, *VAR_8 = VAR_7;
    const char *VAR_9 = VAR_7 + FUNC_2( VAR_7 );
    const char *VAR_10 = ((void*)0);
    int VAR_11 = 1;
    char VAR_12[VAR_3];
    char *VAR_13 = VAR_12;


    FUNC_0( VAR_4 );

    while( VAR_8 <= VAR_9 )
    {
        if( VAR_11 && *VAR_8 == '=' )
        {
            if( ( VAR_10 = FUNC_3( VAR_7, VAR_8 - VAR_7 ) ) == ((void*)0) )
            {
                VAR_6 = VAR_2;
                goto exit;
            }

            VAR_7 = VAR_8 + 1;
            VAR_11 = 0;
            VAR_13 = VAR_12;
        }

        if( !VAR_11 && *VAR_8 == '\\' && VAR_8 != VAR_9 )
        {
            VAR_8++;


            if( VAR_8 == VAR_9 || *VAR_8 != ',' )
            {
                VAR_6 = VAR_1;
                goto exit;
            }
        }
        else if( !VAR_11 && ( *VAR_8 == ',' || VAR_8 == VAR_9 ) )
        {
            if( FUNC_1( VAR_4, VAR_10, FUNC_2( VAR_10 ),
                                       (unsigned char *) VAR_12,
                                       VAR_13 - VAR_12 ) == ((void*)0) )
            {
                return( VAR_0 );
            }

            while( VAR_8 < VAR_9 && *(VAR_8 + 1) == ' ' )
                VAR_8++;

            VAR_7 = VAR_8 + 1;
            VAR_11 = 1;
        }

        if( !VAR_11 && VAR_7 != VAR_8 + 1 )
        {
            *(VAR_13++) = *VAR_8;

            if( VAR_13 - VAR_12 == VAR_3 )
            {
                VAR_6 = VAR_1;
                goto exit;
            }
        }

        VAR_8++;
    }

exit:

    return( VAR_6 );
}
