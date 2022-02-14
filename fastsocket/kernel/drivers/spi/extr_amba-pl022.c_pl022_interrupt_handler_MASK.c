
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct spi_message {int state; int actual_length; } ;
struct pl022 {scalar_t__ tx; scalar_t__ tx_end; scalar_t__ rx; scalar_t__ rx_end; int pump_transfers; TYPE_3__* cur_chip; TYPE_2__* cur_transfer; TYPE_1__* adev; int virtbase; struct spi_message* cur_msg; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int (* cs_control ) (int ) ;} ;
struct TYPE_5__ {scalar_t__ cs_change; scalar_t__ len; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (struct pl022*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pl022*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_11, void *VAR_12)
{
 struct pl022 *VAR_13 = VAR_12;
 struct spi_message *VAR_14 = VAR_13->cur_msg;
 u16 VAR_15 = 0;
 u16 VAR_16 = 0;

 if (FUNC_12(!VAR_14)) {
  FUNC_5(&VAR_13->adev->dev,
   "bad message state in interrupt handler");

  return VAR_2;
 }


 VAR_15 = FUNC_8(FUNC_3(VAR_13->virtbase));

 if (FUNC_12(!VAR_15))
  return VAR_3;


 if (FUNC_12(VAR_15 & VAR_7)) {




  FUNC_5(&VAR_13->adev->dev,
   "FIFO overrun\n");
  if (FUNC_8(FUNC_4(VAR_13->virtbase)) & VAR_8)
   FUNC_5(&VAR_13->adev->dev,
    "RXFIFO is full\n");
  if (FUNC_8(FUNC_4(VAR_13->virtbase)) & VAR_9)
   FUNC_5(&VAR_13->adev->dev,
    "TXFIFO is full\n");






  FUNC_13(VAR_1,
         FUNC_2(VAR_13->virtbase));
  FUNC_13(VAR_0, FUNC_1(VAR_13->virtbase));
  FUNC_13((FUNC_8(FUNC_0(VAR_13->virtbase)) &
   (~VAR_5)), FUNC_0(VAR_13->virtbase));
  VAR_14->state = VAR_10;


  FUNC_11(&VAR_13->pump_transfers);
  return VAR_2;
 }

 FUNC_9(VAR_13);

 if ((VAR_13->tx == VAR_13->tx_end) && (VAR_16 == 0)) {
  VAR_16 = 1;

  FUNC_13(FUNC_8(FUNC_2(VAR_13->virtbase)) &
         (~VAR_6),
         FUNC_2(VAR_13->virtbase));
 }






 if (VAR_13->rx >= VAR_13->rx_end) {
  FUNC_13(VAR_1,
         FUNC_2(VAR_13->virtbase));
  FUNC_13(VAR_0, FUNC_1(VAR_13->virtbase));
  if (FUNC_12(VAR_13->rx > VAR_13->rx_end)) {
   FUNC_6(&VAR_13->adev->dev, "read %u surplus "
     "bytes (did you request an odd "
     "number of bytes on a 16bit bus?)\n",
     (u32) (VAR_13->rx - VAR_13->rx_end));
  }

  VAR_14->actual_length += VAR_13->cur_transfer->len;
  if (VAR_13->cur_transfer->cs_change)
   VAR_13->cur_chip->
    cs_control(VAR_4);

  VAR_14->state = FUNC_7(VAR_13);
  FUNC_11(&VAR_13->pump_transfers);
  return VAR_2;
 }

 return VAR_2;
}
