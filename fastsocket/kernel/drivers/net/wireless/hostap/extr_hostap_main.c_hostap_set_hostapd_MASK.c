
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hostapd; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

int FUNC_2(local_info_t *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2 < 0 || VAR_2 > 1)
  return -VAR_0;

 if (VAR_1->hostapd == VAR_2)
  return 0;

 if (VAR_2) {
  VAR_4 = FUNC_1(VAR_1, VAR_3);
  if (VAR_4 == 0)
   VAR_1->hostapd = 1;
 } else {
  VAR_1->hostapd = 0;
  VAR_4 = FUNC_0(VAR_1, VAR_3);
  if (VAR_4 != 0)
   VAR_1->hostapd = 1;
 }

 return VAR_4;
}
