
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct x86_emulate_ctxt {int vcpu; } ;
struct msr_data {int host_initiated; int index; int data; } ;


 int FUNC_0 (int ,struct msr_data*) ;

__attribute__((used)) static int FUNC_1(struct x86_emulate_ctxt *VAR_0,
       u32 VAR_1, u64 VAR_2)
{
 struct msr_data VAR_3;

 VAR_3.data = VAR_2;
 VAR_3.index = VAR_1;
 VAR_3.host_initiated = 0;
 return FUNC_0(VAR_0->vcpu, &VAR_3);
}
