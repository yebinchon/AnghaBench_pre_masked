
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int host_roaming; int dev; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

int FUNC_1(local_info_t *VAR_4)
{
 u16 VAR_5;

 switch (VAR_4->host_roaming) {
 case 1:
  VAR_5 = VAR_3;
  break;
 case 2:
  VAR_5 = VAR_1;
  break;
 case 0:
 default:
  VAR_5 = VAR_2;
  break;
 }

 return FUNC_0(VAR_4->dev, VAR_0, VAR_5);
}
