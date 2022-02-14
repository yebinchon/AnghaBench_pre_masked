
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int dirty_log_lock_pa; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int spinlock_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct kvm_vcpu *VAR_3, u64 VAR_4, u64 VAR_5)
{
 u64 VAR_6, VAR_7 = 1;
 u64 VAR_8 = (VAR_4&VAR_2) >> VAR_1;
 spinlock_t *VAR_9 = FUNC_0(VAR_3->arch.dirty_log_lock_pa);
 void *VAR_10 = (void *)VAR_0;

 VAR_7 <<= VAR_5 <= VAR_1 ? 0 : VAR_5 - VAR_1;

 FUNC_3(VAR_9);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {

  if (!FUNC_2(VAR_8 + VAR_6, VAR_10))
   FUNC_1(VAR_8 + VAR_6 , VAR_10);
 }
 FUNC_4(VAR_9);
}
