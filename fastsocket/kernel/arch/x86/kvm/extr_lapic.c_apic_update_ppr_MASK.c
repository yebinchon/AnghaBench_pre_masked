
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_lapic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct kvm_lapic*,int,int,int) ;
 int FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*,int ) ;
 int FUNC_3 (struct kvm_lapic*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct kvm_lapic *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 int VAR_6;

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 VAR_6 = FUNC_1(VAR_2);
 VAR_4 = (VAR_6 != -1) ? VAR_6 : 0;

 if ((VAR_3 & 0xf0) >= (VAR_4 & 0xf0))
  VAR_5 = VAR_3 & 0xff;
 else
  VAR_5 = VAR_4 & 0xf0;

 FUNC_0("vlapic %p, ppr 0x%x, isr 0x%x, isrv 0x%x",
     VAR_2, VAR_5, VAR_6, VAR_4);

 FUNC_3(VAR_2, VAR_0, VAR_5);
}
