
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u16_t ;
struct TYPE_5__ {int ChannelInfo; } ;
struct TYPE_6__ {TYPE_1__ HtInfo; } ;
struct TYPE_7__ {int EnableHT; int HT2040; TYPE_2__ ie; } ;
struct TYPE_8__ {TYPE_3__ sta; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t *VAR_2, u16_t VAR_3)
{
 FUNC_0(VAR_2);

 VAR_1->sta.ie.HtInfo.ChannelInfo |= VAR_0;
 VAR_1->sta.EnableHT = 1;

 switch (VAR_3) {
 case 0:
  VAR_1->sta.HT2040 = 0;



  break;
 case 1:
  VAR_1->sta.HT2040 = 1;



  break;
 default:
  VAR_1->sta.HT2040 = 0;



  break;
 }
}
