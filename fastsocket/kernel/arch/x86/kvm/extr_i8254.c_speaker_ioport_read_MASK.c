
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_kpit_state {int speaker_data_on; int lock; } ;
struct kvm_pit {struct kvm* kvm; struct kvm_kpit_state pit_state; } ;
struct kvm_io_device {int dummy; } ;
struct kvm {int dummy; } ;
typedef int ret ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kvm*,int) ;
 int FUNC_6 (struct kvm*,int) ;
 struct kvm_pit* FUNC_7 (struct kvm_io_device*) ;

__attribute__((used)) static int FUNC_8(struct kvm_io_device *VAR_2,
          gpa_t VAR_3, int VAR_4, void *VAR_5)
{
 struct kvm_pit *VAR_6 = FUNC_7(VAR_2);
 struct kvm_kpit_state *VAR_7 = &VAR_6->pit_state;
 struct kvm *VAR_8 = VAR_6->kvm;
 unsigned int VAR_9;
 int VAR_10;
 if (VAR_3 != VAR_1)
  return -VAR_0;


 VAR_9 = ((unsigned int)FUNC_1(FUNC_0()) >> 14) & 1;

 FUNC_3(&VAR_7->lock);
 VAR_10 = ((VAR_7->speaker_data_on << 1) | FUNC_5(VAR_8, 2) |
  (FUNC_6(VAR_8, 2) << 5) | (VAR_9 << 4));
 if (VAR_4 > sizeof(VAR_10))
  VAR_4 = sizeof(VAR_10);
 FUNC_2(VAR_5, (char *)&VAR_10, VAR_4);
 FUNC_4(&VAR_7->lock);
 return 0;
}
