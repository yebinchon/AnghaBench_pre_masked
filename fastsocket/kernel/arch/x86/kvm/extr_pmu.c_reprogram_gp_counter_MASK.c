
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct kvm_pmc {int eventsel; TYPE_2__* vcpu; } ;
struct TYPE_3__ {int pmu; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct kvm_pmc*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct kvm_pmc*,unsigned int,unsigned int,int,int,int) ;
 int FUNC_4 (struct kvm_pmc*) ;

__attribute__((used)) static void FUNC_5(struct kvm_pmc *VAR_14, u64 VAR_15)
{
 unsigned VAR_16, VAR_17 = VAR_12;
 u8 VAR_18, VAR_19;

 if (VAR_15 & VAR_7)
  FUNC_2("kvm pmu: pin control bit is ignored\n");

 VAR_14->eventsel = VAR_15;

 FUNC_4(VAR_14);

 if (!(VAR_15 & VAR_2) || !FUNC_1(VAR_14))
  return;

 VAR_18 = VAR_15 & VAR_3;
 VAR_19 = (VAR_15 & VAR_8) >> 8;

 if (!(VAR_15 & (VAR_1 |
    VAR_5 |
    VAR_0))) {
  VAR_16 = FUNC_0(&VAR_14->vcpu->arch.pmu, VAR_18,
    VAR_19);
  if (VAR_16 != VAR_10)
   VAR_17 = VAR_11;
 }

 if (VAR_17 == VAR_12)
  VAR_16 = VAR_15 & VAR_13;

 FUNC_3(VAR_14, VAR_17, VAR_16,
   !(VAR_15 & VAR_9),
   !(VAR_15 & VAR_6),
   VAR_15 & VAR_4);
}
