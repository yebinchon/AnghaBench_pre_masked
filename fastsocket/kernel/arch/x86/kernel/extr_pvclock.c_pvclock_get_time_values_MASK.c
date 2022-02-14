
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvclock_vcpu_time_info {int version; int flags; int tsc_shift; int tsc_to_system_mul; int system_time; int tsc_timestamp; } ;
struct pvclock_shadow_time {int version; int flags; int tsc_shift; int tsc_to_nsec_mul; int system_timestamp; int tsc_timestamp; } ;


 int FUNC_0 () ;

__attribute__((used)) static unsigned FUNC_1(struct pvclock_shadow_time *VAR_0,
     struct pvclock_vcpu_time_info *VAR_1)
{
 do {
  VAR_0->version = VAR_1->version;
  FUNC_0();
  VAR_0->tsc_timestamp = VAR_1->tsc_timestamp;
  VAR_0->system_timestamp = VAR_1->system_time;
  VAR_0->tsc_to_nsec_mul = VAR_1->tsc_to_system_mul;
  VAR_0->tsc_shift = VAR_1->tsc_shift;
  VAR_0->flags = VAR_1->flags;
  FUNC_0();
 } while ((VAR_1->version & 1) || (VAR_0->version != VAR_1->version));

 return VAR_0->version;
}
