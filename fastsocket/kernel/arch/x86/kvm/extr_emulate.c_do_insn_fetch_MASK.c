
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ops {int dummy; } ;
struct TYPE_2__ {unsigned int eip_orig; } ;
struct x86_emulate_ctxt {scalar_t__ cs_base; TYPE_1__ decode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct x86_emulate_ctxt*,struct x86_emulate_ops*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct x86_emulate_ctxt *VAR_2,
    struct x86_emulate_ops *VAR_3,
    unsigned long VAR_4, void *VAR_5, unsigned VAR_6)
{
 int VAR_7;


 if (VAR_4 + VAR_6 - VAR_2->decode.eip_orig > 15)
  return VAR_1;
 VAR_4 += VAR_2->cs_base;
 while (VAR_6--) {
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4++, VAR_5++);
  if (VAR_7 != VAR_0)
   return VAR_7;
 }
 return VAR_0;
}
