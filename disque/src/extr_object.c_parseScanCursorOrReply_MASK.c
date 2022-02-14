
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
typedef int client ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 unsigned long FUNC_2 (scalar_t__,char**,int) ;

int FUNC_3(client *VAR_4, robj *VAR_5, unsigned long *VAR_6) {
    char *VAR_7;



    VAR_3 = 0;
    *VAR_6 = FUNC_2(VAR_5->ptr, &VAR_7, 10);
    if (FUNC_1(((char*)VAR_5->ptr)[0]) || VAR_7[0] != '\0' || VAR_3 == VAR_2)
    {
        FUNC_0(VAR_4, "invalid cursor or option name");
        return VAR_0;
    }
    return VAR_1;
}
