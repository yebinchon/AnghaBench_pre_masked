
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pvclock_vcpu_time_info {unsigned int version; } ;
struct pvclock_shadow_time {scalar_t__ system_timestamp; int flags; } ;
typedef scalar_t__ cycle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct pvclock_shadow_time*) ;
 unsigned int FUNC_4 (struct pvclock_shadow_time*,struct pvclock_vcpu_time_info*) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_2 ;

cycle_t FUNC_6(struct pvclock_vcpu_time_info *VAR_3)
{
 struct pvclock_shadow_time VAR_4;
 unsigned VAR_5;
 cycle_t VAR_6, VAR_7;
 u64 VAR_8;

 do {
  VAR_5 = FUNC_4(&VAR_4, VAR_3);
  FUNC_2();
  VAR_7 = FUNC_3(&VAR_4);
  VAR_6 = VAR_4.system_timestamp + VAR_7;
  FUNC_2();
 } while (VAR_5 != VAR_3->version);

 if ((VAR_2 & VAR_0) &&
  (VAR_4.flags & VAR_0))
  return VAR_6;
 VAR_8 = FUNC_1(&VAR_1);
 do {
  if (VAR_6 < VAR_8)
   return VAR_8;
  VAR_8 = FUNC_0(&VAR_1, VAR_8, VAR_6);
 } while (FUNC_5(VAR_8 != VAR_6));

 return VAR_6;
}
