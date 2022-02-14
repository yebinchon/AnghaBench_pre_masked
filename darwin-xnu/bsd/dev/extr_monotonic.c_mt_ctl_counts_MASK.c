
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int user_addr_t ;
struct TYPE_5__ {scalar_t__ ctr_mask; } ;
union monotonic_ctl_counts {TYPE_1__ in; } ;
typedef int uint64_t ;
typedef TYPE_2__* mt_device_t ;
typedef int counts ;
struct TYPE_6__ {int mtd_nmonitors; int mtd_ncounters; int (* mtd_read ) (scalar_t__,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,union monotonic_ctl_counts*,int) ;
 int FUNC_1 (int ***,int ,int) ;
 int FUNC_2 (int **,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_5(mt_device_t VAR_1, user_addr_t VAR_2)
{
 int VAR_3;
 union monotonic_ctl_counts VAR_4;

 FUNC_3(VAR_1);

 VAR_3 = FUNC_0(VAR_2, &VAR_4, sizeof(VAR_4.in));
 if (VAR_3) {
  return VAR_3;
 }

 if (VAR_4.in.ctr_mask == 0) {
  return VAR_0;
 }

 {
  uint64_t VAR_5[VAR_1->mtd_nmonitors][VAR_1->mtd_ncounters];
  FUNC_2(VAR_5, 0,
    VAR_1->mtd_ncounters * VAR_1->mtd_nmonitors * sizeof(VAR_5[0][0]));
  VAR_3 = VAR_1->mtd_read(VAR_4.in.ctr_mask, (uint64_t *)VAR_5);
  if (VAR_3) {
   return VAR_3;
  }

  VAR_3 = FUNC_1(&VAR_5, VAR_2, sizeof(VAR_5));
  if (VAR_3) {
   return VAR_3;
  }
 }

 return 0;
}
