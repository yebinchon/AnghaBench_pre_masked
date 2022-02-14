
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_1__* channel; } ;
struct TYPE_3__ {int duty; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__ VAR_0 ;

uint8_t FUNC_2(uint8_t VAR_1)
{
    if(VAR_1 > 7) {
        return 0;
    }
    FUNC_0();
    uint8_t VAR_2 = VAR_0.channel[VAR_1].duty + 128;
    FUNC_1();
    return VAR_2;
}
