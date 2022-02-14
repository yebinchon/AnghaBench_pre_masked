
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ apb_change_ev_t ;
struct TYPE_5__ {int clk_en; } ;
struct TYPE_6__ {TYPE_2__ cg; TYPE_1__* channel; } ;
struct TYPE_4__ {int prescale; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_2(void * VAR_2, apb_change_ev_t VAR_3, uint32_t VAR_4, uint32_t VAR_5){
    if(VAR_4 == VAR_5){
        return;
    }
    uint32_t VAR_6 = (uint32_t)VAR_2;
    uint8_t VAR_7 = VAR_6;
    if(VAR_3 == VAR_0){
        VAR_1.cg.clk_en = 0;
    } else {
        VAR_4 /= 1000000;
        VAR_5 /= 1000000;
        FUNC_0();
        uint32_t VAR_8 = VAR_1.channel[VAR_7].prescale + 1;
        VAR_1.channel[VAR_7].prescale = ((VAR_5 * VAR_8) / VAR_4) - 1;
        VAR_1.cg.clk_en = 0;
        VAR_1.cg.clk_en = 1;
        FUNC_1();
    }
}
