
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
struct TYPE_3__ {int EnableHT; } ;
struct TYPE_4__ {int BandWidth40; int ExtOffset; int frequency; TYPE_1__ sta; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int ,int,int,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t *VAR_1, u32_t VAR_2)
{
 FUNC_1(VAR_1);

 switch (VAR_2) {
 case 1:
  VAR_0->sta.EnableHT = 1;
  VAR_0->BandWidth40 = 1;
  VAR_0->ExtOffset = 1;
  break;
 case 3:
  VAR_0->sta.EnableHT = 1;
  VAR_0->BandWidth40 = 1;
  VAR_0->ExtOffset = 3;
  break;
 case 0:
  VAR_0->sta.EnableHT = 1;
  VAR_0->BandWidth40 = 0;
  VAR_0->ExtOffset = 0;
  break;
 default:
  VAR_0->BandWidth40 = 0;
  VAR_0->ExtOffset = 0;
  break;
 }

 FUNC_0(VAR_1, VAR_0->frequency, VAR_0->BandWidth40,
       VAR_0->ExtOffset, ((void*)0));
}
