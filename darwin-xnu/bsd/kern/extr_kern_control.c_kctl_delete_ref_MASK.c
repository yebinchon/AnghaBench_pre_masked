
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kctl {scalar_t__ kctlref; } ;
typedef scalar_t__ kern_ctl_ref ;
struct TYPE_2__ {int kcs_bad_kctlref; } ;


 uintptr_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kctl** VAR_3 ;
 int VAR_4 ;
 uintptr_t VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(kern_ctl_ref VAR_7)
{



 uintptr_t VAR_8 = (((uintptr_t)VAR_7) & VAR_0) - 1;

 FUNC_0(VAR_2, VAR_1);

 if (VAR_8 < VAR_5) {
  struct kctl *VAR_9 = VAR_3[VAR_8];

  if (VAR_9->kctlref == VAR_7) {
   VAR_3[VAR_8] = ((void*)0);
   VAR_4--;
  } else {
   VAR_6.kcs_bad_kctlref++;
  }
 } else {
  VAR_6.kcs_bad_kctlref++;
 }
}
