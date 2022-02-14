
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_kpit_channel_state {int count_load_time; } ;
struct kvm {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (struct kvm*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static s64 FUNC_4(struct kvm *VAR_0, struct kvm_kpit_channel_state *VAR_1,
   int VAR_2)
{
 if (VAR_2 == 0)
  return FUNC_0(VAR_0);

 return FUNC_3(FUNC_2(FUNC_1(), VAR_1->count_load_time));
}
