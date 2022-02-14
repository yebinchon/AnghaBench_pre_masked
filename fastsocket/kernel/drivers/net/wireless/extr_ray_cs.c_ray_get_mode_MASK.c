
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_5__ {scalar_t__ a_network_type; } ;
struct TYPE_6__ {TYPE_1__ b5; } ;
struct TYPE_7__ {TYPE_2__ sparm; } ;
typedef TYPE_3__ ray_dev_t ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
   struct iw_request_info *VAR_3, __u32 *VAR_4, char *VAR_5)
{
 ray_dev_t *VAR_6 = FUNC_0(VAR_2);

 if (VAR_6->sparm.b5.a_network_type)
  *VAR_4 = VAR_1;
 else
  *VAR_4 = VAR_0;

 return 0;
}
