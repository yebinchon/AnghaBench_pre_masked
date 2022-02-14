
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct megasas_instance {int max_mfi_cmds; int bar; int pdev; int reg_set; int reply_queue_h; scalar_t__ reply_queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct megasas_instance*) ;
 int FUNC_2 (int ,int,scalar_t__,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct megasas_instance *VAR_0)
{
 u32 VAR_1 = sizeof(u32) *(VAR_0->max_mfi_cmds + 1);

 if (VAR_0->reply_queue)
  FUNC_2(VAR_0->pdev, VAR_1,
       VAR_0->reply_queue, VAR_0->reply_queue_h);

 FUNC_1(VAR_0);

 FUNC_0(VAR_0->reg_set);

 FUNC_3(VAR_0->pdev, VAR_0->bar);
}
