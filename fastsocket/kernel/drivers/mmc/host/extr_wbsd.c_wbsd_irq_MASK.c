
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int isr; int finish_tasklet; int timeout_tasklet; int crc_tasklet; int fifo_tasklet; int card_tasklet; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 struct wbsd_host *VAR_10 = VAR_9;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_10->base + VAR_7);




 if (VAR_11 == 0xff || VAR_11 == 0x00)
  return VAR_1;

 VAR_10->isr |= VAR_11;




 if (VAR_11 & VAR_2)
  FUNC_2(&VAR_10->card_tasklet);
 if (VAR_11 & VAR_4)
  FUNC_2(&VAR_10->fifo_tasklet);
 if (VAR_11 & VAR_3)
  FUNC_1(&VAR_10->crc_tasklet);
 if (VAR_11 & VAR_6)
  FUNC_1(&VAR_10->timeout_tasklet);
 if (VAR_11 & VAR_5)
  FUNC_2(&VAR_10->finish_tasklet);

 return VAR_0;
}
