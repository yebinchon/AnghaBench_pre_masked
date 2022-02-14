
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int unusable; int dpl; int type; scalar_t__ s; int present; } ;
struct desc_struct {int type; } ;
struct TYPE_2__ {int (* get_cpl ) (struct kvm_vcpu*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int) ;
 int FUNC_1 (struct kvm_vcpu*,int,int) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned int,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,struct kvm_segment*,int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_5 (struct kvm_vcpu*,int,struct desc_struct*) ;
 int FUNC_6 (struct kvm_vcpu*,int,struct desc_struct*) ;
 int FUNC_7 (struct desc_struct*,int,struct kvm_segment*) ;
 int FUNC_8 (struct kvm_vcpu*) ;

int FUNC_9(struct kvm_vcpu *VAR_8, u16 VAR_9, int VAR_10)
{
 struct kvm_segment VAR_11;
 struct desc_struct VAR_12;
 u8 VAR_13, VAR_14, VAR_15;
 unsigned VAR_16 = VAR_0;
 u32 VAR_17 = 0;
 bool VAR_18 = !(VAR_9 & ~0x3);
 int VAR_19;

 if (FUNC_0(VAR_8, VAR_10) || !(FUNC_3(VAR_8, VAR_6)))
  return FUNC_1(VAR_8, VAR_9, VAR_10);


 if ((VAR_10 == 131 || VAR_10 == 129 || VAR_10 == 128)
     && VAR_18)
  goto exception;


 if (VAR_10 == 128 && (VAR_9 & (1 << 2)))
  goto exception;

 VAR_19 = FUNC_5(VAR_8, VAR_9, &VAR_12);
 if (VAR_19)
  return VAR_19;

 FUNC_7(&VAR_12, VAR_9, &VAR_11);

 if (VAR_18) {
  VAR_11.unusable = 1;
  goto load;
 }

 VAR_17 = VAR_9 & 0xfffc;
 VAR_16 = VAR_0;


 if (VAR_10 <= VAR_3 && !VAR_11.s)
  goto exception;

 if (!VAR_11.present) {
  VAR_16 = (VAR_10 == 129) ? VAR_2 : VAR_1;
  goto exception;
 }

 VAR_14 = VAR_9 & 3;
 VAR_13 = VAR_11.dpl;
 VAR_15 = VAR_7->get_cpl(VAR_8);

 switch (VAR_10) {
 case 129:




  if (VAR_14 != VAR_15 || (VAR_11.type & 0xa) != 0x2 || VAR_13 != VAR_15)
   goto exception;
  break;
 case 131:
  if (!(VAR_11.type & 8))
   goto exception;

  if (VAR_11.type & 4) {

   if (VAR_13 > VAR_15)
    goto exception;
  } else {

   if (VAR_14 > VAR_15 || VAR_13 != VAR_15)
    goto exception;
  }

  VAR_9 = (VAR_9 & 0xfffc) | VAR_15;
            break;
 case 128:
  if (VAR_11.s || (VAR_11.type != 1 && VAR_11.type != 9))
   goto exception;
  break;
 case 130:
  if (VAR_11.s || VAR_11.type != 2)
   goto exception;
  break;
 default:





  if ((VAR_11.type & 0xa) == 0x8 ||
      (((VAR_11.type & 0xc) != 0xc) && (VAR_14 > VAR_13 && VAR_15 > VAR_13)))
   goto exception;
  break;
 }

 if (!VAR_11.unusable && VAR_11.s) {

  VAR_11.type |= 1;
  VAR_12.type |= 1;
  FUNC_6(VAR_8, VAR_9, &VAR_12);
 }
load:
 FUNC_4(VAR_8, &VAR_11, VAR_10);
 return VAR_4;
exception:
 FUNC_2(VAR_8, VAR_16, VAR_17);
 return VAR_5;
}
