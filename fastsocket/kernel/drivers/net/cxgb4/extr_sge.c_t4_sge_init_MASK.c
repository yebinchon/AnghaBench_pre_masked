
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge {int starve_thres; int intrq_lock; scalar_t__* idma_state; int tx_timer; int rx_timer; int * timer_val; int * counter_val; } ;
struct adapter {struct sge sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct adapter*) ;
 int VAR_22 ;
 unsigned int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,unsigned long) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct adapter*,int ,int,int) ;
 int FUNC_15 (struct adapter*,int ,unsigned int) ;
 int FUNC_16 (struct adapter*,int ) ;

void FUNC_17(struct adapter *VAR_25)
{
 unsigned int VAR_26, VAR_27;
 struct sge *VAR_28 = &VAR_25->sge;
 unsigned int VAR_29 = FUNC_11(VAR_3);

 FUNC_14(VAR_25, VAR_13, VAR_11 |
    VAR_6 | VAR_2,
    FUNC_0(VAR_29 - 5) | FUNC_1(2) |
    VAR_12 |
    (VAR_21 == 128 ? VAR_2 : 0));

 FUNC_14(VAR_25, VAR_0,
   FUNC_8(VAR_7) |
   FUNC_9(VAR_8),
   FUNC_8(VAR_22) |
   FUNC_9(VAR_22));
 FUNC_14(VAR_25, VAR_1, VAR_5,
   VAR_5);

 for (VAR_26 = VAR_27 = 0; VAR_26 < 32; VAR_26 += 4)
  VAR_27 |= (VAR_9 - 10) << VAR_26;
 FUNC_15(VAR_25, VAR_16, VAR_27);
 FUNC_15(VAR_25, VAR_14, VAR_10);



 FUNC_15(VAR_25, VAR_17,
       FUNC_2(VAR_28->counter_val[0]) |
       FUNC_3(VAR_28->counter_val[1]) |
       FUNC_4(VAR_28->counter_val[2]) |
       FUNC_5(VAR_28->counter_val[3]));
 FUNC_15(VAR_25, VAR_18,
       FUNC_6(FUNC_16(VAR_25, VAR_28->timer_val[0])) |
       FUNC_7(FUNC_16(VAR_25, VAR_28->timer_val[1])));
 FUNC_15(VAR_25, VAR_19,
       FUNC_6(FUNC_16(VAR_25, VAR_28->timer_val[2])) |
       FUNC_7(FUNC_16(VAR_25, VAR_28->timer_val[3])));
 FUNC_15(VAR_25, VAR_20,
       FUNC_6(FUNC_16(VAR_25, VAR_28->timer_val[4])) |
       FUNC_7(FUNC_16(VAR_25, VAR_28->timer_val[5])));
 FUNC_12(&VAR_28->rx_timer, VAR_23, (unsigned long)VAR_25);
 FUNC_12(&VAR_28->tx_timer, VAR_24, (unsigned long)VAR_25);
 VAR_28->starve_thres = FUNC_10(VAR_25) * 1000000;
 VAR_28->idma_state[0] = VAR_28->idma_state[1] = 0;
 FUNC_13(&VAR_28->intrq_lock);
}
