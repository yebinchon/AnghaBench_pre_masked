
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* realm; } ;
typedef TYPE_1__ HTTPAuthState ;


 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_1(HTTPAuthState *VAR_0, const char *VAR_1,
                                int VAR_2, char **VAR_3, int *VAR_4)
{
    if (!FUNC_0(VAR_1, "realm=", VAR_2)) {
        *VAR_3 = VAR_0->realm;
        *VAR_4 = sizeof(VAR_0->realm);
    }
}
