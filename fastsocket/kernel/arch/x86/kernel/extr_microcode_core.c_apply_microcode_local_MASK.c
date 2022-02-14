
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apply_microcode_ctx {int err; } ;
struct TYPE_2__ {int (* apply_microcode ) (int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct apply_microcode_ctx *VAR_2 = VAR_1;

 VAR_2->err = VAR_0->apply_microcode(FUNC_0());
}
