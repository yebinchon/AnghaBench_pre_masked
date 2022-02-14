
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct x86_emulate_ops {int dummy; } ;
struct x86_emulate_ctxt {int dummy; } ;


 scalar_t__ FUNC_0 (struct x86_emulate_ctxt*) ;
 int FUNC_1 (struct x86_emulate_ctxt*,struct x86_emulate_ops*,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct x86_emulate_ctxt *VAR_0,
     struct x86_emulate_ops *VAR_1,
     u16 VAR_2, u16 VAR_3)
{
 if (FUNC_0(VAR_0))
  if (!FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3))
   return 0;
 return 1;
}
