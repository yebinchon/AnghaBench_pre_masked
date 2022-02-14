
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int nmi_window_exits; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_2)
{
 u32 VAR_3;


 VAR_3 = FUNC_0(VAR_1);
 VAR_3 &= ~VAR_0;
 FUNC_1(VAR_1, VAR_3);
 ++VAR_2->stat.nmi_window_exits;

 return 1;
}
