
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_lapic {int divide_count; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct kvm_lapic*,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_lapic *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 VAR_2 = VAR_4 & 0xf;
 VAR_3 = ((VAR_2 & 0x3) | ((VAR_2 & 0x8) >> 1)) + 1;
 VAR_1->divide_count = 0x1 << (VAR_3 & 0x7);

 FUNC_0("timer divide count is 0x%x\n",
       VAR_1->divide_count);
}
