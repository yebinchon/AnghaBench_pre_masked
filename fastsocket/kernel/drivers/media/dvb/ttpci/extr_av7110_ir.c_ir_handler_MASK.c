
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ir_tasklet; int ir_command; } ;
struct av7110 {TYPE_1__ ir; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct av7110 *VAR_0, u32 VAR_1)
{
 FUNC_0(4, "ir command = %08x\n", VAR_1);
 VAR_0->ir.ir_command = VAR_1;
 FUNC_1(&VAR_0->ir.ir_tasklet);
}
