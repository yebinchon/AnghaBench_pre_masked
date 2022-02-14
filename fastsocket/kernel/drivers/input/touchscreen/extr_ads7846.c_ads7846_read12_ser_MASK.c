
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct spi_device {int irq; } ;
struct ser_req {int sample; int msg; TYPE_1__* xfer; int scratch; scalar_t__ ref_off; scalar_t__ command; scalar_t__ ref_on; } ;
struct device {int dummy; } ;
struct ads7846 {int model; int irq_disabled; int vref_delay_usecs; } ;
struct TYPE_3__ {int len; int * rx_buf; scalar_t__* tx_buf; int delay_usecs; } ;


 int FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 struct ads7846* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ser_req*) ;
 struct ser_req* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct spi_device*,int *) ;
 struct spi_device* FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_4, unsigned VAR_5)
{
 struct spi_device *VAR_6 = FUNC_10(VAR_4);
 struct ads7846 *VAR_7 = FUNC_2(VAR_4);
 struct ser_req *VAR_8 = FUNC_6(sizeof *VAR_8, VAR_1);
 int VAR_9;
 int VAR_10;

 if (!VAR_8)
  return -VAR_0;

 FUNC_8(&VAR_8->msg);


 VAR_10 = (VAR_7->model == 7846);


 if (VAR_10) {
  VAR_8->ref_on = VAR_3;
  VAR_8->xfer[0].tx_buf = &VAR_8->ref_on;
  VAR_8->xfer[0].len = 1;
  FUNC_7(&VAR_8->xfer[0], &VAR_8->msg);

  VAR_8->xfer[1].rx_buf = &VAR_8->scratch;
  VAR_8->xfer[1].len = 2;


  VAR_8->xfer[1].delay_usecs = VAR_7->vref_delay_usecs;
  FUNC_7(&VAR_8->xfer[1], &VAR_8->msg);
 }


 VAR_8->command = (u8) VAR_5;
 VAR_8->xfer[2].tx_buf = &VAR_8->command;
 VAR_8->xfer[2].len = 1;
 FUNC_7(&VAR_8->xfer[2], &VAR_8->msg);

 VAR_8->xfer[3].rx_buf = &VAR_8->sample;
 VAR_8->xfer[3].len = 2;
 FUNC_7(&VAR_8->xfer[3], &VAR_8->msg);




 VAR_8->ref_off = VAR_2;
 VAR_8->xfer[4].tx_buf = &VAR_8->ref_off;
 VAR_8->xfer[4].len = 1;
 FUNC_7(&VAR_8->xfer[4], &VAR_8->msg);

 VAR_8->xfer[5].rx_buf = &VAR_8->scratch;
 VAR_8->xfer[5].len = 2;
 FUNC_0(VAR_8->xfer[5]);
 FUNC_7(&VAR_8->xfer[5], &VAR_8->msg);

 VAR_7->irq_disabled = 1;
 FUNC_3(VAR_6->irq);
 VAR_9 = FUNC_9(VAR_6, &VAR_8->msg);
 VAR_7->irq_disabled = 0;
 FUNC_4(VAR_6->irq);

 if (VAR_9 == 0) {

  VAR_9 = FUNC_1(VAR_8->sample);
  VAR_9 = VAR_9 >> 3;
  VAR_9 &= 0x0fff;
 }

 FUNC_5(VAR_8);
 return VAR_9;
}
