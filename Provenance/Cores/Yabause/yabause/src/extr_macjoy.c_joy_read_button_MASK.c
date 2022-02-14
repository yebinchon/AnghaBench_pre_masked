
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buttons_count; scalar_t__ buttons; } ;
typedef TYPE_1__ joydata_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;

int FUNC_1(joydata_t *VAR_0, int VAR_1) {

    --VAR_1;

    if(VAR_1 >= VAR_0->buttons_count) {
        return -1;
    }

    return FUNC_0(VAR_0, VAR_0->buttons + VAR_1);
}
