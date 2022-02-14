
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u16_t ;
struct TYPE_3__ {size_t* ssidLen; size_t** ssid; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,size_t) ;

u16_t FUNC_2(zdev_t* VAR_2, zbuf_t* VAR_3, u16_t VAR_4, u16_t VAR_5)
{
    u16_t VAR_6;

    FUNC_0(VAR_2);


    FUNC_1(VAR_2, VAR_3, VAR_4++, VAR_0);


    FUNC_1(VAR_2, VAR_3, VAR_4++, VAR_1->ap.ssidLen[VAR_5]);


    for (VAR_6=0; VAR_6<VAR_1->ap.ssidLen[VAR_5]; VAR_6++)
    {
        FUNC_1(VAR_2, VAR_3, VAR_4++, VAR_1->ap.ssid[VAR_5][VAR_6]);
    }

    return VAR_4;
}
