
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int base; int limit; int selector; int type; int present; int dpl; int s; int unusable; int avl; int g; int l; int db; } ;
struct TYPE_2__ {int (* set_segment ) (struct kvm_vcpu*,struct kvm_segment*,int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_2, u16 VAR_3, int VAR_4)
{
 struct kvm_segment VAR_5 = {
  .base = VAR_3 << 4,
  .limit = 0xffff,
  .selector = VAR_3,
  .type = 3,
  .present = 1,
  .dpl = 3,
  .db = 0,
  .s = 1,
  .l = 0,
  .g = 0,
  .avl = 0,
  .unusable = 0,
 };
 VAR_1->set_segment(VAR_2, &VAR_5, VAR_4);
 return VAR_0;
}
