
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int pin; int GPIOx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (int) ;

uint32_t FUNC_4(void) {
    uint32_t VAR_6 = 0, VAR_7 = 0;
    int VAR_8;
    FUNC_2(VAR_1, VAR_3);

    FUNC_0(VAR_4, VAR_0);
    FUNC_3(5000);
    for(VAR_8 = VAR_0-1; VAR_8 >= 0; VAR_8--) {
        if( FUNC_1(VAR_4[VAR_8].GPIOx, VAR_4[VAR_8].pin) == VAR_2)
            VAR_6 = (VAR_6 << 1) | 1;
        else
            VAR_6 = (VAR_6 << 1);
    }
    FUNC_0(VAR_5, VAR_0);
    FUNC_3(5000);
    for(VAR_8 = VAR_0-1; VAR_8 >= 0; VAR_8--) {
        if( FUNC_1(VAR_5[VAR_8].GPIOx, VAR_5[VAR_8].pin) == VAR_2)
            VAR_7 = (VAR_7 << 1) | 1;
        else
            VAR_7 = (VAR_7 << 1);
    }
    if(VAR_6 == VAR_7)
        return VAR_7;
    else
        return 4;
}
