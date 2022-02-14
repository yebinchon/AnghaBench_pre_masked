
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; scalar_t__ fixed; } ;
struct TYPE_3__ {int net_default_tx_rate; } ;
typedef TYPE_1__ ray_dev_t ;


 TYPE_1__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
   struct iw_request_info *VAR_1,
   struct iw_param *VAR_2, char *VAR_3)
{
 ray_dev_t *VAR_4 = FUNC_0(VAR_0);

 if (VAR_4->net_default_tx_rate == 3)
  VAR_2->value = 2000000;
 else
  VAR_2->value = VAR_4->net_default_tx_rate * 500000;
 VAR_2->fixed = 0;

 return 0;
}
