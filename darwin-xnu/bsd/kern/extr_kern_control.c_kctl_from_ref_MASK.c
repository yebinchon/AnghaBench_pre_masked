
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
 uintptr_t VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static struct kctl *
FUNC_1(kern_ctl_ref VAR_6)
{



 uintptr_t VAR_7 = (((uintptr_t)VAR_6) & VAR_0) - 1;
 struct kctl *VAR_8 = ((void*)0);

 FUNC_0(VAR_2, VAR_1);

 if (VAR_7 >= VAR_4) {
  VAR_5.kcs_bad_kctlref++;
  return (((void*)0));
 }
 VAR_8 = VAR_3[VAR_7];
 if (VAR_8->kctlref != VAR_6) {
  VAR_5.kcs_bad_kctlref++;
  return (((void*)0));
 }
 return (VAR_8);
}
