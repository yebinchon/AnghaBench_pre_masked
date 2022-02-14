
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_kpit_state {int speaker_data_on; int lock; } ;
struct kvm_pit {struct kvm* kvm; struct kvm_kpit_state pit_state; } ;
struct kvm_io_device {int dummy; } ;
struct kvm {int dummy; } ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm*,int,int) ;
 struct kvm_pit* FUNC_3 (struct kvm_io_device*) ;

__attribute__((used)) static int FUNC_4(struct kvm_io_device *VAR_2,
    gpa_t VAR_3, int VAR_4, const void *VAR_5)
{
 struct kvm_pit *VAR_6 = FUNC_3(VAR_2);
 struct kvm_kpit_state *VAR_7 = &VAR_6->pit_state;
 struct kvm *VAR_8 = VAR_6->kvm;
 u32 VAR_9 = *(u32 *) VAR_5;
 if (VAR_3 != VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_7->lock);
 VAR_7->speaker_data_on = (VAR_9 >> 1) & 1;
 FUNC_2(VAR_8, 2, VAR_9 & 1);
 FUNC_1(&VAR_7->lock);
 return 0;
}
