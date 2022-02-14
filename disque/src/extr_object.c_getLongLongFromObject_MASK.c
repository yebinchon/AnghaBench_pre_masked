
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (char*) ;
 long long FUNC_4 (scalar_t__,char**,int) ;

int FUNC_5(robj *VAR_6, long long *VAR_7) {
    long long VAR_8;
    char *VAR_9;

    if (VAR_6 == ((void*)0)) {
        VAR_8 = 0;
    } else {
        FUNC_2(((void*)0),VAR_6,VAR_6->type == VAR_4);
        if (FUNC_1(VAR_6)) {
            VAR_5 = 0;
            VAR_8 = FUNC_4(VAR_6->ptr, &VAR_9, 10);
            if (FUNC_0(((char*)VAR_6->ptr)[0]) || VAR_9[0] != '\0' ||
                VAR_5 == VAR_2)
                return VAR_0;
        } else if (VAR_6->encoding == VAR_3) {
            VAR_8 = (long)VAR_6->ptr;
        } else {
            FUNC_3("Unknown string encoding");
        }
    }
    if (VAR_7) *VAR_7 = VAR_8;
    return VAR_1;
}
