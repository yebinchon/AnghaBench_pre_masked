
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct workqueue {int dummy; } ;
struct TYPE_3__ {scalar_t__ idle_stamp; } ;
struct TYPE_4__ {TYPE_1__ uus_workq_park_data; } ;
struct uthread {TYPE_2__ uu_save; } ;


 scalar_t__ FUNC_0 (struct workqueue*) ;

__attribute__((used)) static inline bool
FUNC_1(struct workqueue *VAR_0, struct uthread *VAR_1,
  uint64_t VAR_2)
{
 uint64_t VAR_3 = FUNC_0(VAR_0);
 return VAR_2 - VAR_1->uu_save.uus_workq_park_data.idle_stamp > VAR_3;
}
