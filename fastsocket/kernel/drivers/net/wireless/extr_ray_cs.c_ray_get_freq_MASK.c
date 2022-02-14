
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {scalar_t__ e; int m; } ;
struct TYPE_5__ {int a_hop_pattern; } ;
struct TYPE_6__ {TYPE_1__ b5; } ;
struct TYPE_7__ {TYPE_2__ sparm; } ;
typedef TYPE_3__ ray_dev_t ;


 TYPE_3__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
   struct iw_request_info *VAR_1,
   struct iw_freq *VAR_2, char *VAR_3)
{
 ray_dev_t *VAR_4 = FUNC_0(VAR_0);

 VAR_2->m = VAR_4->sparm.b5.a_hop_pattern;
 VAR_2->e = 0;
 return 0;
}
