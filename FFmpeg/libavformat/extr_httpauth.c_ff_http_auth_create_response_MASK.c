
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ auth_type; scalar_t__ stale; } ;
typedef TYPE_1__ HTTPAuthState ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (TYPE_1__*,char*,char*,char const*,char const*) ;
 int FUNC_7 (char*,int,char*) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char*) ;

char *FUNC_10(HTTPAuthState *VAR_2, const char *VAR_3,
                                   const char *VAR_4, const char *VAR_5)
{
    char *VAR_6 = ((void*)0);



    VAR_2->stale = 0;
    if (!VAR_3 || !FUNC_8(VAR_3, ':'))
        return ((void*)0);

    if (VAR_2->auth_type == VAR_0) {
        int VAR_7, VAR_8;
        char *VAR_9, *VAR_10 = FUNC_5(VAR_3);

        if (!VAR_10)
            return ((void*)0);

        VAR_7 = FUNC_0(FUNC_9(VAR_10));
        VAR_8 = VAR_7 + 30;

        VAR_6 = FUNC_3(VAR_8);
        if (!VAR_6) {
            FUNC_2(VAR_10);
            return ((void*)0);
        }

        FUNC_7(VAR_6, VAR_8, "Authorization: Basic ");
        VAR_9 = VAR_6 + FUNC_9(VAR_6);
        FUNC_1(VAR_9, VAR_7, VAR_10, FUNC_9(VAR_10));
        FUNC_4(VAR_9, "\r\n", VAR_8 - (VAR_9 - VAR_6));
        FUNC_2(VAR_10);
    } else if (VAR_2->auth_type == VAR_1) {
        char *VAR_11 = FUNC_5(VAR_3), *VAR_12;

        if (!VAR_11)
            return ((void*)0);

        if ((VAR_12 = FUNC_8(VAR_11, ':'))) {
            *VAR_12++ = 0;
            VAR_6 = FUNC_6(VAR_2, VAR_11, VAR_12, VAR_4, VAR_5);
        }
        FUNC_2(VAR_11);
    }
    return VAR_6;
}
