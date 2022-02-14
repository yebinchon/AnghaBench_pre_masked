
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int disable_multicast_decryption; } ;
struct ipw_priv {TYPE_2__ sys_config; TYPE_1__* ieee; } ;
struct TYPE_3__ {scalar_t__ host_encrypt; } ;







__attribute__((used)) static void FUNC_0(struct ipw_priv *VAR_0, int VAR_1)
{
 if (VAR_0->ieee->host_encrypt)
  return;

 switch (VAR_1) {
 case 128:
  VAR_0->sys_config.disable_multicast_decryption = 0;
  break;
 case 129:
  VAR_0->sys_config.disable_multicast_decryption = 1;
  break;
 case 130:
  VAR_0->sys_config.disable_multicast_decryption = 0;
  break;
 case 131:
  VAR_0->sys_config.disable_multicast_decryption = 1;
  break;
 default:
  break;
 }
}
