
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disable_unicast_decryption; } ;
struct ipw_priv {TYPE_1__ sys_config; TYPE_2__* ieee; } ;
struct TYPE_4__ {int host_decrypt; scalar_t__ host_encrypt; } ;







__attribute__((used)) static void FUNC_0(struct ipw_priv *VAR_0, int VAR_1)
{
 if (VAR_0->ieee->host_encrypt)
  return;

 switch (VAR_1) {
 case 128:
  VAR_0->sys_config.disable_unicast_decryption = 0;
  VAR_0->ieee->host_decrypt = 0;
  break;
 case 129:
  VAR_0->sys_config.disable_unicast_decryption = 1;
  VAR_0->ieee->host_decrypt = 1;
  break;
 case 130:
  VAR_0->sys_config.disable_unicast_decryption = 0;
  VAR_0->ieee->host_decrypt = 0;
  break;
 case 131:
  VAR_0->sys_config.disable_unicast_decryption = 1;
  break;
 default:
  break;
 }
}
