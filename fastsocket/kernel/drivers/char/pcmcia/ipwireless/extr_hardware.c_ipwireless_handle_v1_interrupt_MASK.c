
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_hardware {int tx_ready; int tasklet; scalar_t__ base_port; int lock; int rx_ready; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5,
        struct ipw_hardware *VAR_6)
{
 unsigned short VAR_7;

 VAR_7 = FUNC_0(VAR_6->base_port + VAR_0);


 if (VAR_7 == 0xFFFF)
  return VAR_2;
 else if (VAR_7 != 0) {
  unsigned short VAR_8 = 0;
  unsigned long VAR_9;


  if (VAR_7 & VAR_4) {
   VAR_8 |= VAR_4;
   FUNC_2(&VAR_6->lock, VAR_9);
   VAR_6->tx_ready = 1;
   FUNC_3(&VAR_6->lock, VAR_9);
  }

  if (VAR_7 & VAR_3) {
   VAR_8 |= VAR_3;
   FUNC_2(&VAR_6->lock, VAR_9);
   VAR_6->rx_ready++;
   FUNC_3(&VAR_6->lock, VAR_9);
  }
  if (VAR_8 != 0) {
   FUNC_1(VAR_8, VAR_6->base_port + VAR_0);
   FUNC_4(&VAR_6->tasklet);
  }
  return VAR_1;
 }
 return VAR_2;
}
