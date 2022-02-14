
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int duty_resolution; int tick_sel; scalar_t__ clock_divider; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__ FUNC_2 (int,int) ;
 int FUNC_3 () ;

__attribute__((used)) static double FUNC_4(uint8_t VAR_0)
{
    uint32_t VAR_1;
    uint8_t VAR_2;
    bool VAR_3;
    uint8_t VAR_4=(VAR_0/8), VAR_5=((VAR_0/2)%4);
    FUNC_0();
    VAR_1 = FUNC_2(VAR_4, VAR_5).conf.clock_divider;
    VAR_2 = FUNC_2(VAR_4, VAR_5).conf.duty_resolution;
    VAR_3 = FUNC_2(VAR_4, VAR_5).conf.tick_sel;
    FUNC_1();
    uint64_t VAR_6 = 1000000;
    if(VAR_3) {
        VAR_6 = FUNC_3();
    }
    VAR_6 <<= 8;
    return (VAR_6 >> VAR_2) / (double)VAR_1;
}
