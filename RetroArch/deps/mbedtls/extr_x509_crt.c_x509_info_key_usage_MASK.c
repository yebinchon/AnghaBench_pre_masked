
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_1( char **VAR_9, size_t *VAR_10,
                                unsigned int VAR_11 )
{
    int VAR_12;
    size_t VAR_13 = *VAR_10;
    char *VAR_14 = *VAR_9;
    const char *VAR_15 = "";

    FUNC_0( VAR_3, "Digital Signature" );
    FUNC_0( VAR_8, "Non Repudiation" );
    FUNC_0( VAR_7, "Key Encipherment" );
    FUNC_0( VAR_1, "Data Encipherment" );
    FUNC_0( VAR_5, "Key Agreement" );
    FUNC_0( VAR_6, "Key Cert Sign" );
    FUNC_0( VAR_0, "CRL Sign" );
    FUNC_0( VAR_4, "Encipher Only" );
    FUNC_0( VAR_2, "Decipher Only" );

    *VAR_10 = VAR_13;
    *VAR_9 = VAR_14;

    return( 0 );
}
