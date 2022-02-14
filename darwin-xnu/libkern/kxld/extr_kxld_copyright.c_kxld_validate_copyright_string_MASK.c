
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 char* FUNC_4 (char const*,int ) ;
 int FUNC_5 (char*,char const*,int) ;

boolean_t
FUNC_6(const char *VAR_4)
{
    boolean_t VAR_5 = VAR_0;
    const char *VAR_6 = ((void*)0);
    const char *VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0);
    u_long VAR_9 = 0;

    VAR_6 = FUNC_4(VAR_4, VAR_2);
    VAR_7 = FUNC_4(VAR_4, VAR_3);

    if (!VAR_6 || !VAR_7 || VAR_6 > VAR_7) goto finish;

    VAR_4 = VAR_6 + FUNC_0(VAR_2);

    VAR_9 = VAR_7 - VAR_4;
    VAR_8 = FUNC_2(VAR_9+1);
    if (!VAR_8) goto finish;

    FUNC_5(VAR_8, VAR_4, VAR_9);
    VAR_8[VAR_9] = '\0';

    if (!FUNC_1(VAR_8, VAR_9)) goto finish;

    VAR_5 = VAR_1;
finish:
    if (VAR_8) FUNC_3(VAR_8, VAR_9+1);
    return VAR_5;
}
