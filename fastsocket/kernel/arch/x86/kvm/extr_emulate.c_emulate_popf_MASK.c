
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ops {int dummy; } ;
struct x86_emulate_ctxt {int eflags; int mode; int vcpu; } ;
struct TYPE_2__ {int (* get_cpl ) (int ) ;} ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;




 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct x86_emulate_ctxt*,struct x86_emulate_ops*,unsigned long*,int) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_18 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct x86_emulate_ctxt *VAR_19,
         struct x86_emulate_ops *VAR_20,
         void *VAR_21, int VAR_22)
{
 int VAR_23;
 unsigned long VAR_24, VAR_25;
 int VAR_26 = (VAR_19->eflags & VAR_17) >> VAR_14;
 int VAR_27 = VAR_18->get_cpl(VAR_19->vcpu);

 VAR_23 = FUNC_0(VAR_19, VAR_20, &VAR_24, VAR_22);
 if (VAR_23 != VAR_15)
  return VAR_23;

 VAR_25 = VAR_2 | VAR_9 | VAR_1 | VAR_13 | VAR_11 | VAR_8
  | VAR_12 | VAR_3 | VAR_7 | VAR_10 | VAR_0 | VAR_4;

 switch(VAR_19->mode) {
 case 129:
 case 130:
 case 131:
  if (VAR_27 == 0)
   VAR_25 |= VAR_6;
  if (VAR_27 <= VAR_26)
   VAR_25 |= VAR_5;
  break;
 case 128:
  if (VAR_26 < 3) {
   FUNC_1(VAR_19->vcpu, 0);
   return VAR_16;
  }
  VAR_25 |= VAR_5;
  break;
 default:
  VAR_25 |= (VAR_6 | VAR_5);
  break;
 }

 *(unsigned long *)VAR_21 =
  (VAR_19->eflags & ~VAR_25) | (VAR_24 & VAR_25);

 return VAR_23;
}
