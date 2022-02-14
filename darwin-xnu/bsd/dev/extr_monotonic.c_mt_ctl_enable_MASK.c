
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int user_addr_t ;
struct TYPE_5__ {int enable; } ;
union monotonic_ctl_enable {TYPE_1__ in; } ;
typedef TYPE_2__* mt_device_t ;
typedef int ctl ;
struct TYPE_6__ {int (* mtd_enable ) (int ) ;} ;


 int FUNC_0 (int ,union monotonic_ctl_enable*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(mt_device_t VAR_0, user_addr_t VAR_1)
{
 int VAR_2;
 union monotonic_ctl_enable VAR_3;

 FUNC_1(VAR_0);

 VAR_2 = FUNC_0(VAR_1, &VAR_3, sizeof(VAR_3));
 if (VAR_2) {
  return VAR_2;
 }

 VAR_0->mtd_enable(VAR_3.in.enable);

 return 0;
}
