
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct x86_emulate_ops {int (* read_std ) (unsigned long,unsigned long*,int,int ,int *) ;} ;
struct x86_emulate_ctxt {int vcpu; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long*,int,int ,int *) ;
 int FUNC_1 (unsigned long,unsigned long*,int,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct x86_emulate_ctxt *VAR_1,
      struct x86_emulate_ops *VAR_2,
      void *VAR_3,
      u16 *VAR_4, unsigned long *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_6 == 2)
  VAR_6 = 3;
 *VAR_5 = 0;
 VAR_7 = VAR_2->read_std((unsigned long)VAR_3, (unsigned long *)VAR_4, 2,
      VAR_1->vcpu, ((void*)0));
 if (VAR_7 != VAR_0)
  return VAR_7;
 VAR_7 = VAR_2->read_std((unsigned long)VAR_3 + 2, VAR_5, VAR_6,
      VAR_1->vcpu, ((void*)0));
 return VAR_7;
}
