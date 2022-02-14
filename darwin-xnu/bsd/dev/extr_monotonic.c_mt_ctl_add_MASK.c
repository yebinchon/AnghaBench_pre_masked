
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int user_addr_t ;
struct TYPE_7__ {int ctr; } ;
struct TYPE_6__ {int config; } ;
union monotonic_ctl_add {TYPE_2__ out; TYPE_1__ in; } ;
typedef int uint32_t ;
typedef TYPE_3__* mt_device_t ;
struct TYPE_8__ {int (* mtd_add ) (int *,int *) ;} ;


 int FUNC_0 (int ,union monotonic_ctl_add*,int) ;
 int FUNC_1 (union monotonic_ctl_add*,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(mt_device_t VAR_0, user_addr_t VAR_1)
{
 int VAR_2;
 uint32_t VAR_3;
 union monotonic_ctl_add VAR_4;

 FUNC_2(VAR_0);

 VAR_2 = FUNC_0(VAR_1, &VAR_4, sizeof(VAR_4.in));
 if (VAR_2) {
  return VAR_2;
 }

 VAR_2 = VAR_0->mtd_add(&VAR_4.in.config, &VAR_3);
 if (VAR_2) {
  return VAR_2;
 }

 VAR_4.out.ctr = VAR_3;

 VAR_2 = FUNC_1(&VAR_4, VAR_1, sizeof(VAR_4.out));
 if (VAR_2) {
  return VAR_2;
 }

 return 0;
}
