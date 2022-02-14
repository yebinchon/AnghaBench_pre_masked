
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int clk_en; } ;
struct TYPE_6__ {TYPE_2__ cg; TYPE_1__* channel; } ;
struct TYPE_4__ {int prescale; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

uint32_t FUNC_5(uint8_t VAR_3, uint32_t VAR_4)
{
    if(VAR_3 > 7) {
        return 0;
    }

    static bool VAR_5 = 0;
    if(!VAR_5) {
        VAR_5 = 1;
        VAR_2 = FUNC_4();
    }

    uint32_t VAR_6 = FUNC_3();
    uint32_t VAR_7 = (VAR_6/(VAR_4*256)) - 1;
    if(VAR_7 > 0xFF) {
        VAR_7 = 0xFF;
    }
    FUNC_0();
    VAR_0.channel[VAR_3].prescale = VAR_7;
    VAR_0.cg.clk_en = 0;
    VAR_0.cg.clk_en = 1;
    FUNC_1();
    uint32_t VAR_8 = VAR_3;
    FUNC_2((void*)VAR_8, VAR_1);
    return VAR_6/((VAR_7 + 1) * 256);
}
