
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float day_length; } ;


 TYPE_1__* VAR_0 ;
 float FUNC_0 () ;

float FUNC_1() {
    if (VAR_0->day_length <= 0) {
        return 0.5;
    }
    float VAR_1;
    VAR_1 = FUNC_0();
    VAR_1 = VAR_1 / VAR_0->day_length;
    VAR_1 = VAR_1 - (int)VAR_1;
    return VAR_1;
}
