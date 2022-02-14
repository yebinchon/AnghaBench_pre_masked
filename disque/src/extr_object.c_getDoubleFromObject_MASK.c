
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
 double VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int FUNC_4 (char*) ;
 double FUNC_5 (scalar_t__,char**) ;

int FUNC_6(robj *VAR_8, double *VAR_9) {
    double VAR_10;
    char *VAR_11;

    if (VAR_8 == ((void*)0)) {
        VAR_10 = 0;
    } else {
        FUNC_3(((void*)0),VAR_8,VAR_8->type == VAR_6);
        if (FUNC_2(VAR_8)) {
            VAR_7 = 0;
            VAR_10 = FUNC_5(VAR_8->ptr, &VAR_11);
            if (FUNC_1(((char*)VAR_8->ptr)[0]) ||
                VAR_11[0] != '\0' ||
                (VAR_7 == VAR_3 &&
                    (VAR_10 == VAR_4 || VAR_10 == -VAR_4 || VAR_10 == 0)) ||
                VAR_7 == VAR_2 ||
                FUNC_0(VAR_10))
                return VAR_0;
        } else if (VAR_8->encoding == VAR_5) {
            VAR_10 = (long)VAR_8->ptr;
        } else {
            FUNC_4("Unknown string encoding");
        }
    }
    *VAR_9 = VAR_10;
    return VAR_1;
}
