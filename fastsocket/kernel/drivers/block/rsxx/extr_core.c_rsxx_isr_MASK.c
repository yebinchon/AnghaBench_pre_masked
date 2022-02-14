
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int done_work; int creg_wq; } ;
struct rsxx_cardinfo {unsigned int isr_mask; int n_targets; int ier_mask; int irq_lock; int event_work; int event_wq; TYPE_2__ creg_ctrl; TYPE_1__* ctrl; scalar_t__ regmap; int eeh_state; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int dma_done_work; int done_wq; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct rsxx_cardinfo*,int) ;
 int FUNC_6 (struct rsxx_cardinfo*,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_5, void *VAR_6)
{
 struct rsxx_cardinfo *VAR_7 = VAR_6;
 unsigned int VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;

 FUNC_7(&VAR_7->irq_lock);

 do {
  VAR_10 = 0;

  if (FUNC_9(VAR_7->eeh_state))
   break;

  VAR_8 = FUNC_3(VAR_7->regmap + VAR_4);
  if (VAR_8 == 0xffffffff) {





   FUNC_2(FUNC_0(VAR_7),
    "ISR = 0xFFFFFFFF, retrying later\n");
   break;
  }

  VAR_8 &= VAR_7->isr_mask;
  if (!VAR_8)
   break;

  for (VAR_11 = 0; VAR_11 < VAR_7->n_targets; VAR_11++) {
   if (VAR_8 & FUNC_1(VAR_11)) {
    if (VAR_7->ier_mask & FUNC_1(VAR_11)) {
     FUNC_5(VAR_7, FUNC_1(VAR_11));
     VAR_10 = 1;
    }
    FUNC_4(VAR_7->ctrl[VAR_11].done_wq,
        &VAR_7->ctrl[VAR_11].dma_done_work);
    VAR_9++;
   }
  }

  if (VAR_8 & VAR_0) {
   FUNC_4(VAR_7->creg_ctrl.creg_wq,
       &VAR_7->creg_ctrl.done_work);
   VAR_9++;
  }

  if (VAR_8 & VAR_1) {
   FUNC_4(VAR_7->event_wq, &VAR_7->event_work);
   FUNC_6(VAR_7, VAR_1);
   VAR_9++;
  }
 } while (VAR_10);

 FUNC_8(&VAR_7->irq_lock);

 return VAR_9 ? VAR_2 : VAR_3;
}
