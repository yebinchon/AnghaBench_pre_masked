
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int macmode; } ;
typedef TYPE_1__ wlandevice_t ;
struct iw_request_info {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ml_priv; } ;
typedef TYPE_2__ netdevice_t ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




__attribute__((used)) static int FUNC_0(netdevice_t *VAR_4,
         struct iw_request_info *VAR_5,
         __u32 *VAR_6, char *VAR_7)
{
 wlandevice_t *VAR_8 = VAR_4->ml_priv;

 switch (VAR_8->macmode) {
 case 128:
  *VAR_6 = VAR_0;
  break;
 case 129:
  *VAR_6 = VAR_2;
  break;
 case 130:
  *VAR_6 = VAR_3;
  break;
 default:

  *VAR_6 = VAR_1;
 }

 return 0;
}
