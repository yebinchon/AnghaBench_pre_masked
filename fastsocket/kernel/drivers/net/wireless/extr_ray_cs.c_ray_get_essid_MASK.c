
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
struct TYPE_5__ {int a_current_ess_id; } ;
struct TYPE_6__ {TYPE_1__ b5; } ;
struct TYPE_7__ {TYPE_2__ sparm; } ;
typedef TYPE_3__ ray_dev_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 TYPE_3__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
    struct iw_request_info *VAR_2,
    struct iw_point *VAR_3, char *VAR_4)
{
 ray_dev_t *VAR_5 = FUNC_1(VAR_1);


 FUNC_0(VAR_4, VAR_5->sparm.b5.a_current_ess_id, VAR_0);


 VAR_3->length = FUNC_2(VAR_4);
 VAR_3->flags = 1;

 return 0;
}
