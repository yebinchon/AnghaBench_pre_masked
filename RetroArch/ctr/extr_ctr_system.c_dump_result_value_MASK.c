
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; int description; int module; int summary; int level; } ;
typedef TYPE_1__ ctr_result_value ;
typedef int Result ;


 int FUNC_0 (char*,int) ;

void FUNC_1(Result VAR_0)
{
   ctr_result_value VAR_1;
   VAR_1.val = VAR_0;
   FUNC_0("result      : 0x%08X\n", VAR_0);
   FUNC_0("description : %u\n", VAR_1.description);
   FUNC_0("module      : %u\n", VAR_1.module);
   FUNC_0("summary     : %u\n", VAR_1.summary);
   FUNC_0("level       : %u\n", VAR_1.level);
}
