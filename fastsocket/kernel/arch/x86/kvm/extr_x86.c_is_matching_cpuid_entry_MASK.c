
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct kvm_cpuid_entry2 {scalar_t__ function; int flags; scalar_t__ index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct kvm_cpuid_entry2 *VAR_3,
 u32 VAR_4, u32 VAR_5)
{
 if (VAR_3->function != VAR_4)
  return 0;
 if ((VAR_3->flags & VAR_0) && VAR_3->index != VAR_5)
  return 0;
 if ((VAR_3->flags & VAR_1) &&
     !(VAR_3->flags & VAR_2))
  return 0;
 return 1;
}
