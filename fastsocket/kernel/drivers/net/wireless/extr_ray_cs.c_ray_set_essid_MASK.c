
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {scalar_t__ flags; int length; } ;
struct TYPE_6__ {int a_current_ess_id; } ;
struct TYPE_5__ {TYPE_2__ b5; } ;
struct TYPE_7__ {scalar_t__ card_status; TYPE_1__ sparm; } ;
typedef TYPE_3__ ray_dev_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_3__* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6,
    struct iw_request_info *VAR_7,
    struct iw_point *VAR_8, char *VAR_9)
{
 ray_dev_t *VAR_10 = FUNC_2(VAR_6);


 if (VAR_10->card_status != VAR_0)
  return -VAR_2;


 if (VAR_8->flags == 0) {

  return -VAR_4;
 } else {

  if (VAR_8->length > VAR_5) {
   return -VAR_1;
  }


  FUNC_1(VAR_10->sparm.b5.a_current_ess_id, 0, VAR_5);
  FUNC_0(VAR_10->sparm.b5.a_current_ess_id, VAR_9, VAR_8->length);
 }

 return -VAR_3;
}
