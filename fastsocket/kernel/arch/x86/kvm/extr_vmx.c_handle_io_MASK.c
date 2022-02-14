
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_exits; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int,int,unsigned int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4, VAR_5, VAR_6;
 unsigned VAR_7;

 ++VAR_2->stat.io_exits;
 VAR_3 = FUNC_3(VAR_1);
 VAR_6 = (VAR_3 & 16) != 0;

 if (VAR_6) {
  if (FUNC_0(VAR_2, 0) == VAR_0)
   return 0;
  return 1;
 }

 VAR_4 = (VAR_3 & 7) + 1;
 VAR_5 = (VAR_3 & 8) != 0;
 VAR_7 = VAR_3 >> 16;

 FUNC_2(VAR_2);
 return FUNC_1(VAR_2, VAR_5, VAR_4, VAR_7);
}
