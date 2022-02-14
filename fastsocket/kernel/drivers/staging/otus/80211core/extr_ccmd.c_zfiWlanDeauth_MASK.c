
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u16_t ;
struct TYPE_3__ {int* bssid; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *,int ,int*,int,int ,int ) ;
 int FUNC_1 (int *) ;

u16_t FUNC_2(zdev_t *VAR_3, u16_t *VAR_4, u16_t VAR_5)
{
 FUNC_1(VAR_3);

 if (VAR_2->wlanMode == VAR_0) {
  FUNC_0(VAR_3, VAR_1, VAR_4,
        VAR_5, 0, 0);
 } else
  FUNC_0(VAR_3, VAR_1,
      VAR_2->sta.bssid, 3, 0, 0);


 return 0;
}
