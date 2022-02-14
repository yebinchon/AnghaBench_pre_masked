
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int tbtt_tasklet; int rxdone_tasklet; int txstatus_tasklet; int irqmask_lock; } ;
typedef enum dev_state { ____Placeholder_dev_state } dev_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_9,
     enum dev_state VAR_10)
{
 int VAR_11 = (VAR_10 == VAR_7);
 u32 VAR_12;
 unsigned long VAR_13;





 if (VAR_10 == VAR_8) {
  FUNC_1(VAR_9, VAR_0, &VAR_12);
  FUNC_2(VAR_9, VAR_0, VAR_12);
 }





 FUNC_3(&VAR_9->irqmask_lock, VAR_13);

 FUNC_1(VAR_9, VAR_1, &VAR_12);
 FUNC_0(&VAR_12, VAR_3, VAR_11);
 FUNC_0(&VAR_12, VAR_6, VAR_11);
 FUNC_0(&VAR_12, VAR_4, VAR_11);
 FUNC_0(&VAR_12, VAR_5, VAR_11);
 FUNC_0(&VAR_12, VAR_2, VAR_11);
 FUNC_2(VAR_9, VAR_1, VAR_12);

 FUNC_4(&VAR_9->irqmask_lock, VAR_13);

 if (VAR_10 == VAR_7) {



  FUNC_5(&VAR_9->txstatus_tasklet);
  FUNC_5(&VAR_9->rxdone_tasklet);
  FUNC_5(&VAR_9->tbtt_tasklet);
 }
}
