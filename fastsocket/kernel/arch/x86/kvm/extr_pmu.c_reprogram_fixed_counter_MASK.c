
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct kvm_pmc {int dummy; } ;
struct TYPE_2__ {int event_type; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_0 (struct kvm_pmc*) ;
 int FUNC_1 (struct kvm_pmc*,int ,int ,int,int,int) ;
 int FUNC_2 (struct kvm_pmc*) ;

__attribute__((used)) static void FUNC_3(struct kvm_pmc *VAR_3, u8 VAR_4, int VAR_5)
{
 unsigned VAR_6 = VAR_4 & 0x3;
 bool VAR_7 = VAR_4 & 0x8;

 FUNC_2(VAR_3);

 if (!VAR_6 || !FUNC_0(VAR_3))
  return;

 FUNC_1(VAR_3, VAR_0,
   VAR_1[VAR_2[VAR_5]].event_type,
   !(VAR_6 & 0x2),
   !(VAR_6 & 0x1),
   VAR_7);
}
