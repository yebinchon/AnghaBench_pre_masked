
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int irqreturn_t ;
struct TYPE_6__ {int r_irq_ctrl; int volatile r_irq_statech; int volatile r_irqmsk_statchg; int timer_irq; int r_irq_oview; int* r_irq_fifo_blx; } ;
struct TYPE_7__ {int tqueue; TYPE_1__ mr; int fifo_sched_cnt; } ;
typedef TYPE_2__ hfc4s8s_hw ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int volatile VAR_2 ;
 int VAR_3 ;
 int volatile VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int volatile FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_11, void *VAR_12)
{
 hfc4s8s_hw *VAR_13 = VAR_12;
 u_char VAR_14, VAR_15;
 volatile u_char *VAR_16;
 int VAR_17;
 u_char VAR_18;

 if (!VAR_13 || !(VAR_13->mr.r_irq_ctrl & VAR_3))
  return VAR_1;



 VAR_18 = FUNC_0(VAR_13);



 VAR_13->mr.r_irq_statech |=
     (FUNC_1(VAR_13, VAR_9) & VAR_13->mr.r_irqmsk_statchg);
 if (!
     (VAR_14 = (FUNC_1(VAR_13, VAR_10) & (VAR_4 | VAR_2)))
&& !VAR_13->mr.r_irq_statech) {

  FUNC_2(VAR_13, VAR_18);

  return VAR_1;
 }


 if (FUNC_1(VAR_13, VAR_7) & VAR_5) {
  VAR_13->mr.timer_irq = 1;
  VAR_13->fifo_sched_cnt--;
 }


 if ((VAR_15 = FUNC_1(VAR_13, VAR_8))) {
  VAR_13->mr.r_irq_oview |= VAR_15;
  VAR_17 = VAR_6;
  VAR_16 = VAR_13->mr.r_irq_fifo_blx;
  while (VAR_15) {
   if ((VAR_15 & 1)) {
    *VAR_16 |= FUNC_1(VAR_13, VAR_17);
   }
   VAR_16++;
   VAR_17++;
   VAR_15 >>= 1;
  }
 }


 FUNC_3(&VAR_13->tqueue);


 FUNC_2(VAR_13, VAR_18);

 return VAR_0;
}
