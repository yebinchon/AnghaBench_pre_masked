
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {TYPE_3__* channel_group; } ;
struct TYPE_7__ {TYPE_2__* channel; } ;
struct TYPE_5__ {int duty; } ;
struct TYPE_6__ {TYPE_1__ duty; } ;


 TYPE_4__ VAR_0 ;

uint32_t FUNC_0(uint8_t VAR_1)
{
    if(VAR_1 > 15) {
        return 0;
    }
    return VAR_0.channel_group[VAR_1/8].channel[VAR_1%8].duty.duty >> 4;
}
