
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; } ;
struct TYPE_3__ {scalar_t__ card_status; int fw_ver; int net_default_tx_rate; } ;
typedef TYPE_1__ ray_dev_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3,
   struct iw_request_info *VAR_4,
   struct iw_param *VAR_5, char *VAR_6)
{
 ray_dev_t *VAR_7 = FUNC_0(VAR_3);


 if (VAR_7->card_status != VAR_0)
  return -VAR_1;


 if ((VAR_5->value != 1000000) && (VAR_5->value != 2000000))
  return -VAR_2;


 if ((VAR_7->fw_ver == 0x55) &&
     (VAR_5->value == 2000000))
  VAR_7->net_default_tx_rate = 3;
 else
  VAR_7->net_default_tx_rate = VAR_5->value / 500000;

 return 0;
}
