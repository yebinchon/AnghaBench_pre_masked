
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef void* u8_t ;
typedef int u16_t ;
struct TYPE_3__ {void** bssid; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,void**) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_1, u8_t* VAR_2)
{

    FUNC_1(VAR_1);




    VAR_0->sta.bssid[0] = VAR_2[0] + (((u16_t) VAR_2[1]) << 8);
    VAR_0->sta.bssid[1] = VAR_2[2] + (((u16_t) VAR_2[3]) << 8);
    VAR_0->sta.bssid[2] = VAR_2[4] + (((u16_t) VAR_2[5]) << 8);


    FUNC_0(VAR_1, VAR_2);

}
