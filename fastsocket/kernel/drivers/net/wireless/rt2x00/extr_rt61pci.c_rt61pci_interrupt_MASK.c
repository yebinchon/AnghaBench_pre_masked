
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int irqmask_lock; int autowake_tasklet; int tbtt_tasklet; int txstatus_tasklet; int rxdone_tasklet; int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_11, void *VAR_12)
{
 struct rt2x00_dev *VAR_13 = VAR_12;
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17;





 FUNC_1(VAR_13, VAR_9, &VAR_14);
 FUNC_2(VAR_13, VAR_9, VAR_14);

 FUNC_1(VAR_13, VAR_2, &VAR_16);
 FUNC_2(VAR_13, VAR_2, VAR_16);

 if (!VAR_16 && !VAR_14)
  return VAR_7;

 if (!FUNC_7(VAR_0, &VAR_13->flags))
  return VAR_6;




 if (FUNC_0(VAR_16, VAR_4))
  FUNC_6(&VAR_13->rxdone_tasklet);

 if (FUNC_0(VAR_16, VAR_5))
  FUNC_6(&VAR_13->txstatus_tasklet);

 if (FUNC_0(VAR_16, VAR_3))
  FUNC_5(&VAR_13->tbtt_tasklet);

 if (FUNC_0(VAR_14, VAR_10))
  FUNC_6(&VAR_13->autowake_tasklet);






 VAR_17 = VAR_16;
 VAR_15 = VAR_14;





 FUNC_3(&VAR_13->irqmask_lock);

 FUNC_1(VAR_13, VAR_1, &VAR_16);
 VAR_16 |= VAR_17;
 FUNC_2(VAR_13, VAR_1, VAR_16);

 FUNC_1(VAR_13, VAR_8, &VAR_16);
 VAR_16 |= VAR_15;
 FUNC_2(VAR_13, VAR_8, VAR_16);

 FUNC_4(&VAR_13->irqmask_lock);

 return VAR_6;
}
