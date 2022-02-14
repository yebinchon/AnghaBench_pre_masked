
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int force; int enable; int drefh; int drefm; int drefl; int tieh; } ;
typedef TYPE_1__ rtc_vddsdio_config_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_1(rtc_vddsdio_config_t VAR_8)
{
    uint32_t VAR_9 = 0;
    VAR_9 |= (VAR_8.force << VAR_4);
    VAR_9 |= (VAR_8.enable << VAR_7);
    VAR_9 |= (VAR_8.drefh << VAR_0);
    VAR_9 |= (VAR_8.drefm << VAR_2);
    VAR_9 |= (VAR_8.drefl << VAR_1);
    VAR_9 |= (VAR_8.tieh << VAR_6);
    VAR_9 |= VAR_5;
    FUNC_0(VAR_3, VAR_9);
}
