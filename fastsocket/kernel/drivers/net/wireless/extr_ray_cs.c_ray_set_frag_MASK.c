
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; scalar_t__ disabled; } ;
struct TYPE_5__ {int* a_frag_threshold; } ;
struct TYPE_6__ {TYPE_1__ b5; } ;
struct TYPE_7__ {scalar_t__ card_status; TYPE_2__ sparm; } ;
typedef TYPE_3__ ray_dev_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_4,
   struct iw_request_info *VAR_5,
   struct iw_param *VAR_6, char *VAR_7)
{
 ray_dev_t *VAR_8 = FUNC_0(VAR_4);
 int VAR_9 = VAR_6->value;


 if (VAR_8->card_status != VAR_0)
  return -VAR_1;


 if (VAR_6->disabled)
  VAR_9 = 32767;
 else {
  if ((VAR_9 < 256) || (VAR_9 > 2347))
   return -VAR_3;
 }
 VAR_8->sparm.b5.a_frag_threshold[0] = (VAR_9 >> 8) & 0xFF;
 VAR_8->sparm.b5.a_frag_threshold[1] = VAR_9 & 0xFF;

 return -VAR_2;
}
