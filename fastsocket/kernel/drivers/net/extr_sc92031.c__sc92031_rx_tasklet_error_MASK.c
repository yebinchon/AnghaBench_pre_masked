
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sc92031_priv {int rx_loss; } ;
struct TYPE_2__ {int rx_crc_errors; int rx_frame_errors; int rx_length_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sc92031_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_6,
          u32 VAR_7, unsigned VAR_8)
{
 if(VAR_8 > (VAR_0 + 4) || VAR_8 < 16) {
  VAR_6->stats.rx_errors++;
  VAR_6->stats.rx_length_errors++;
 }

 if (!(VAR_7 & VAR_5)) {
  VAR_6->stats.rx_errors++;

  if (VAR_7 & (VAR_3 | VAR_4))
   VAR_6->stats.rx_length_errors++;

  if (VAR_7 & VAR_1)
   VAR_6->stats.rx_frame_errors++;

  if (!(VAR_7 & VAR_2))
   VAR_6->stats.rx_crc_errors++;
 } else {
  struct sc92031_priv *VAR_9 = FUNC_0(VAR_6);
  VAR_9->rx_loss++;
 }
}
