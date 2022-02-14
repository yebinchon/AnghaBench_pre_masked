
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pvclock_shadow_time {int tsc_shift; int tsc_to_nsec_mul; scalar_t__ tsc_timestamp; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static u64 FUNC_2(struct pvclock_shadow_time *VAR_0)
{
 u64 VAR_1 = FUNC_0() - VAR_0->tsc_timestamp;
 return FUNC_1(VAR_1, VAR_0->tsc_to_nsec_mul,
       VAR_0->tsc_shift);
}
