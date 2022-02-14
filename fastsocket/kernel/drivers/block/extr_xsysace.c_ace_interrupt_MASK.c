
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ace_device {int in_irq; scalar_t__ fsm_task; scalar_t__ fsm_state; int data_count; int fsm_continue_flag; int lock; int dev; int data_result; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ace_device*) ;
 int FUNC_1 (struct ace_device*,int ) ;
 scalar_t__ FUNC_2 (struct ace_device*,int ) ;
 scalar_t__ FUNC_3 (struct ace_device*) ;
 int FUNC_4 (struct ace_device*,int ,int) ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 u16 VAR_8;
 struct ace_device *VAR_9 = VAR_7;


 FUNC_6(&VAR_9->lock);
 VAR_9->in_irq = 1;


 VAR_8 = FUNC_1(VAR_9, VAR_0);
 FUNC_4(VAR_9, VAR_0, VAR_8 | VAR_1);
 FUNC_4(VAR_9, VAR_0, VAR_8);


 if (FUNC_3(VAR_9))
  VAR_9->data_result = -VAR_4;

 if (VAR_9->fsm_task == 0) {
  FUNC_5(VAR_9->dev,
   "spurious irq; stat=%.8x ctrl=%.8x cmd=%.4x\n",
   FUNC_2(VAR_9, VAR_3), FUNC_2(VAR_9, VAR_0),
   FUNC_1(VAR_9, VAR_2));
  FUNC_5(VAR_9->dev, "fsm_task=%i fsm_state=%i data_count=%i\n",
   VAR_9->fsm_task, VAR_9->fsm_state, VAR_9->data_count);
 }


 VAR_9->fsm_continue_flag = 1;
 while (VAR_9->fsm_continue_flag)
  FUNC_0(VAR_9);


 VAR_9->in_irq = 0;
 FUNC_7(&VAR_9->lock);

 return VAR_5;
}
