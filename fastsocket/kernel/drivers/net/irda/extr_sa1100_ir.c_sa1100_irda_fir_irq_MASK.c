
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sa1100_irda {int hscr0; int rxdma; } ;
struct TYPE_2__ {int rx_frame_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sa1100_irda* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sa1100_irda*,struct net_device*) ;
 int FUNC_2 (struct sa1100_irda*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6)
{
 struct sa1100_irda *VAR_7 = FUNC_0(VAR_6);




 FUNC_3(VAR_7->rxdma);






 if (VAR_5 & (VAR_2 | VAR_3)) {
  VAR_6->stats.rx_errors++;

  if (VAR_5 & VAR_2)
   VAR_6->stats.rx_frame_errors++;




  VAR_4 = VAR_7->hscr0 | VAR_0;





  VAR_5 = VAR_2 | VAR_3;
 }







 if (VAR_5 & VAR_1)
  FUNC_1(VAR_7, VAR_6);




 FUNC_2(VAR_7);
}
