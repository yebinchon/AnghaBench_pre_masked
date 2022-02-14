
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {scalar_t__ m; scalar_t__ e; } ;
struct TYPE_5__ {scalar_t__ a_hop_pattern; } ;
struct TYPE_6__ {TYPE_1__ b5; } ;
struct TYPE_7__ {scalar_t__ card_status; TYPE_2__ sparm; } ;
typedef TYPE_3__ ray_dev_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5,
   struct iw_request_info *VAR_6,
   struct iw_freq *VAR_7, char *VAR_8)
{
 ray_dev_t *VAR_9 = FUNC_0(VAR_5);
 int VAR_10 = -VAR_2;


 if (VAR_9->card_status != VAR_0)
  return -VAR_1;


 if ((VAR_7->m > VAR_4) || (VAR_7->e > 0))
  VAR_10 = -VAR_3;
 else
  VAR_9->sparm.b5.a_hop_pattern = VAR_7->m;

 return VAR_10;
}
