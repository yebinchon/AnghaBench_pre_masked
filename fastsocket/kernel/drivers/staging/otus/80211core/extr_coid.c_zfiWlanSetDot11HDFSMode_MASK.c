
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
struct TYPE_3__ {int * capability; scalar_t__ DFSEnable; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;

u8_t FUNC_1(zdev_t* VAR_2, u8_t VAR_3)
{
    FUNC_0(VAR_2);
    VAR_1->sta.DFSEnable = VAR_3;
    if (VAR_3)
        VAR_1->sta.capability[1] |= VAR_0;
    else
        VAR_1->sta.capability[1] &= (~VAR_0);

    return 0;
}
