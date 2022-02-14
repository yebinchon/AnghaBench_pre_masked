
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msr_autoload {unsigned int nr; int * host; TYPE_1__* guest; } ;
struct vcpu_vmx {struct msr_autoload msr_autoload; } ;
struct TYPE_2__ {unsigned int index; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,size_t) ;

__attribute__((used)) static void FUNC_2(struct vcpu_vmx *VAR_5, unsigned VAR_6)
{
 unsigned VAR_7;
 struct msr_autoload *VAR_8 = &VAR_5->msr_autoload;

 switch (VAR_6) {
 case 128:
  if (VAR_4) {
   FUNC_0(
     VAR_0,
     VAR_2);
   return;
  }
  break;
 }

 for (VAR_7 = 0; VAR_7 < VAR_8->nr; ++VAR_7)
  if (VAR_8->guest[VAR_7].index == VAR_6)
   break;

 if (VAR_7 == VAR_8->nr)
  return;
 --VAR_8->nr;
 VAR_8->guest[VAR_7] = VAR_8->guest[VAR_8->nr];
 VAR_8->host[VAR_7] = VAR_8->host[VAR_8->nr];
 FUNC_1(VAR_1, VAR_8->nr);
 FUNC_1(VAR_3, VAR_8->nr);
}
