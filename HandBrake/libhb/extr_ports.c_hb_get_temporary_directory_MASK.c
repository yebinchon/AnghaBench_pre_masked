
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,int) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 char* FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (int) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

char * FUNC_11()
{
    char * VAR_1, * VAR_2, * VAR_3;
    if( (VAR_3 = FUNC_3( "TMPDIR" ) ) != ((void*)0) ||
        (VAR_3 = FUNC_3( "TEMP" ) ) != ((void*)0) )
        VAR_2 = FUNC_9(VAR_3);
    else
        VAR_2 = FUNC_9("/tmp");


    if( VAR_2[FUNC_10(VAR_2)-1] == '/' )
        VAR_2[FUNC_10(VAR_2)-1] = '\0';

    VAR_1 = FUNC_5("%s/hb.%d", VAR_2, (int)FUNC_4());
    FUNC_1(VAR_2);

    return VAR_1;
}
