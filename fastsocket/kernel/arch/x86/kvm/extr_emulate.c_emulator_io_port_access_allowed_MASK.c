
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u16 ;
struct x86_emulate_ops {int (* read_std ) (scalar_t__,int*,int,int ,int *) ;} ;
struct x86_emulate_ctxt {int vcpu; } ;
struct kvm_segment {int limit; scalar_t__ base; scalar_t__ unusable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct kvm_segment*,int ) ;
 int FUNC_1 (scalar_t__,int*,int,int ,int *) ;
 int FUNC_2 (scalar_t__,unsigned int*,int,int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct x86_emulate_ctxt *VAR_2,
         struct x86_emulate_ops *VAR_3,
         u16 VAR_4, u16 VAR_5)
{
 struct kvm_segment VAR_6;
 int VAR_7;
 u16 VAR_8;
 u8 VAR_9, VAR_10 = VAR_4 & 0x7;
 unsigned VAR_11 = (1 << VAR_5) - 1;

 FUNC_0(VAR_2->vcpu, &VAR_6, VAR_0);
 if (VAR_6.unusable)
  return 0;
 if (VAR_6.limit < 103)
  return 0;
 VAR_7 = VAR_3->read_std(VAR_6.base + 102, &VAR_8, 2, VAR_2->vcpu,
     ((void*)0));
 if (VAR_7 != VAR_1)
  return 0;
 if (VAR_8 + VAR_4/8 > VAR_6.limit)
  return 0;
 VAR_7 = VAR_3->read_std(VAR_6.base + VAR_8 + VAR_4/8, &VAR_9, 1,
     VAR_2->vcpu, ((void*)0));
 if (VAR_7 != VAR_1)
  return 0;
 if ((VAR_9 >> VAR_10) & VAR_11)
  return 0;
 return 1;
}
