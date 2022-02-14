
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cp_private {TYPE_2__* dev; } ;
struct TYPE_3__ {int rx_fifo_errors; int rx_length_errors; int rx_crc_errors; int rx_frame_errors; int rx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct cp_private*) ;
 int FUNC_1 (char*,int ,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_2 (struct cp_private *VAR_7, unsigned VAR_8,
       u32 VAR_9, u32 VAR_10)
{
 if (FUNC_0 (VAR_7))
  FUNC_1("%s: rx err, slot %d status 0x%x len %d\n",
   VAR_7->dev->name, VAR_8, VAR_9, VAR_10);
 VAR_7->dev->stats.rx_errors++;
 if (VAR_9 & VAR_4)
  VAR_7->dev->stats.rx_frame_errors++;
 if (VAR_9 & VAR_2)
  VAR_7->dev->stats.rx_crc_errors++;
 if ((VAR_9 & VAR_6) || (VAR_9 & VAR_5))
  VAR_7->dev->stats.rx_length_errors++;
 if ((VAR_9 & (VAR_0 | VAR_1)) != (VAR_0 | VAR_1))
  VAR_7->dev->stats.rx_length_errors++;
 if (VAR_9 & VAR_3)
  VAR_7->dev->stats.rx_fifo_errors++;
}
