
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int* gpr; } ;
struct TYPE_2__ {int audit_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int,int,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;
 scalar_t__ FUNC_4 (int ) ;

long FUNC_5(struct pt_regs *VAR_5)
{
 long VAR_6 = 0;

 FUNC_1(VAR_5->gpr[0]);

 if (FUNC_2(VAR_3) &&
     FUNC_3(VAR_5))





  VAR_6 = -1L;

 if (FUNC_4(VAR_4->audit_context)) {
   FUNC_0(VAR_0,
         VAR_5->gpr[0],
         VAR_5->gpr[3] & 0xffffffff,
         VAR_5->gpr[4] & 0xffffffff,
         VAR_5->gpr[5] & 0xffffffff,
         VAR_5->gpr[6] & 0xffffffff);
 }

 return VAR_6 ?: VAR_5->gpr[0];
}
