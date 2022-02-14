
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int,long) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

robj *FUNC_6(robj *VAR_2) {
    robj *VAR_3;

    if (FUNC_3(VAR_2)) {
        FUNC_1(VAR_2);
        return VAR_2;
    }
    if (VAR_2->type == VAR_1 && VAR_2->encoding == VAR_0) {
        char VAR_4[32];

        FUNC_2(VAR_4,32,(long)VAR_2->ptr);
        VAR_3 = FUNC_0(VAR_4,FUNC_5(VAR_4));
        return VAR_3;
    } else {
        FUNC_4("Unknown encoding type");
    }
}
