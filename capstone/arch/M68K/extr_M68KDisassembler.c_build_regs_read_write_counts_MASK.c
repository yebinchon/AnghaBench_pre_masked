
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int op_count; int * operands; } ;
struct TYPE_6__ {TYPE_1__ extension; } ;
typedef TYPE_2__ m68k_info ;


 int FUNC_0 (TYPE_2__*,int *,int) ;

__attribute__((used)) static void FUNC_1(m68k_info *VAR_0)
{
 int VAR_1;

 if (!VAR_0->extension.op_count)
  return;

 if (VAR_0->extension.op_count == 1) {
  FUNC_0(VAR_0, &VAR_0->extension.operands[0], 1);
 } else {

  FUNC_0(VAR_0, &VAR_0->extension.operands[0], 0);


  for (VAR_1 = 1; VAR_1 < VAR_0->extension.op_count; ++VAR_1)
   FUNC_0(VAR_0, &VAR_0->extension.operands[VAR_1], 1);
 }
}
