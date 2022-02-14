
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {int cw_enable; int cw_width; void* cw_mode; } ;
struct TYPE_4__ {int wlanMode; TYPE_1__ cwm; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_4) {

    FUNC_0(VAR_4);

    switch (VAR_3->wlanMode) {
    case 131:
        VAR_3->cwm.cw_mode = VAR_0;
        VAR_3->cwm.cw_width = VAR_2;
        VAR_3->cwm.cw_enable = 1;
        break;
    case 129:
    case 128:
    case 130:
    default:
        VAR_3->cwm.cw_mode = VAR_0;
        VAR_3->cwm.cw_width = VAR_1;
        VAR_3->cwm.cw_enable = 1;
        break;
    }
}
