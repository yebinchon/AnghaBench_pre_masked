
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct zsBssInfo {int dummy; } ;
struct TYPE_3__ {int ibssBssDesc; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_1, struct zsBssInfo *VAR_2)
{
    FUNC_1(VAR_1);

    FUNC_0((u8_t *)VAR_2, (u8_t *)&VAR_0->sta.ibssBssDesc, sizeof(struct zsBssInfo));
}
