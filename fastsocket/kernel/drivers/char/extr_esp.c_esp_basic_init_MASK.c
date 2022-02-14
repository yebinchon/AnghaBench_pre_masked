
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_trigger; int tx_trigger; } ;
struct esp_struct {int stat_flags; int line; int irq; TYPE_1__ config; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct esp_struct*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct esp_struct *VAR_14)
{

 FUNC_0(VAR_14, VAR_11, VAR_4);

 if (VAR_14->stat_flags & VAR_10)
  FUNC_0(VAR_14, VAR_12, 0x01);
 else
  FUNC_0(VAR_14, VAR_12, 0x31);


 FUNC_0(VAR_14, VAR_11, VAR_7);
 FUNC_0(VAR_14, VAR_12, 0x00);


 FUNC_0(VAR_14, VAR_11, VAR_3);

 if (VAR_14->stat_flags & VAR_10)
  FUNC_0(VAR_14, VAR_12, 0x01);
 else
  FUNC_0(VAR_14, VAR_12, (VAR_13 << 4) | 0x01);

 FUNC_0(VAR_14, VAR_11, VAR_1);

 if (VAR_14->line % 8)
  FUNC_0(VAR_14, VAR_12, 0x0d);
 else if (VAR_14->irq == 9)
  FUNC_0(VAR_14, VAR_12, 0x02);
 else
  FUNC_0(VAR_14, VAR_12, VAR_14->irq);


 FUNC_0(VAR_14, VAR_11, VAR_2);

 if (VAR_14->stat_flags & VAR_10)
  FUNC_0(VAR_14, VAR_12, 0xa1);
 else
  FUNC_0(VAR_14, VAR_12, 0xbd);

 FUNC_0(VAR_14, VAR_12, 0x00);


 FUNC_0(VAR_14, VAR_11, VAR_0);
 FUNC_0(VAR_14, VAR_12, 0xff);


 FUNC_0(VAR_14, VAR_11, VAR_8);
 FUNC_0(VAR_14, VAR_12, VAR_14->config.rx_trigger >> 8);
 FUNC_0(VAR_14, VAR_12, VAR_14->config.rx_trigger);
 FUNC_0(VAR_14, VAR_12, VAR_14->config.tx_trigger >> 8);
 FUNC_0(VAR_14, VAR_12, VAR_14->config.tx_trigger);


 FUNC_0(VAR_14, VAR_11, VAR_5);
 FUNC_0(VAR_14, VAR_12, 0x04 | VAR_9);


 FUNC_0(VAR_14, VAR_11, VAR_6);
 FUNC_0(VAR_14, VAR_12, 0xff);
}
