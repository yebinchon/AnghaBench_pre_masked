
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_channel {size_t chan; int wait_queue; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__* VAR_6 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct dma_channel *VAR_9 = VAR_8;
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_6[VAR_9->chan] + VAR_0);

 if (!(VAR_10 & VAR_3))
  return VAR_5;

 VAR_10 &= ~(VAR_2 | VAR_1);
 FUNC_1(VAR_10, (VAR_6[VAR_9->chan] + VAR_0));

 FUNC_2(&VAR_9->wait_queue);

 return VAR_4;
}
