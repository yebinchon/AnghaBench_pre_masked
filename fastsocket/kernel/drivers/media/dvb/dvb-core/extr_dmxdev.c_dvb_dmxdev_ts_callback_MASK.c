
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct dvb_ringbuffer {int error; int queue; } ;
struct TYPE_4__ {scalar_t__ output; } ;
struct TYPE_5__ {TYPE_1__ pes; } ;
struct dmxdev_filter {TYPE_3__* dev; struct dvb_ringbuffer buffer; TYPE_2__ params; } ;
struct dmx_ts_feed {struct dmxdev_filter* priv; } ;
typedef enum dmx_success { ____Placeholder_dmx_success } dmx_success ;
struct TYPE_6__ {int lock; struct dvb_ringbuffer dvr_buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dvb_ringbuffer*,int const*,size_t) ;
 int FUNC_1 (struct dvb_ringbuffer*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(const u8 *VAR_3, size_t VAR_4,
      const u8 *VAR_5, size_t VAR_6,
      struct dmx_ts_feed *VAR_7,
      enum dmx_success VAR_8)
{
 struct dmxdev_filter *VAR_9 = VAR_7->priv;
 struct dvb_ringbuffer *VAR_10;
 int VAR_11;

 FUNC_2(&VAR_9->dev->lock);
 if (VAR_9->params.pes.output == VAR_0) {
  FUNC_3(&VAR_9->dev->lock);
  return 0;
 }

 if (VAR_9->params.pes.output == VAR_1
     || VAR_9->params.pes.output == VAR_2)
  VAR_10 = &VAR_9->buffer;
 else
  VAR_10 = &VAR_9->dev->dvr_buffer;
 if (VAR_10->error) {
  FUNC_3(&VAR_9->dev->lock);
  FUNC_4(&VAR_10->queue);
  return 0;
 }
 VAR_11 = FUNC_0(VAR_10, VAR_3, VAR_4);
 if (VAR_11 == VAR_4)
  VAR_11 = FUNC_0(VAR_10, VAR_5, VAR_6);
 if (VAR_11 < 0) {
  FUNC_1(VAR_10);
  VAR_10->error = VAR_11;
 }
 FUNC_3(&VAR_9->dev->lock);
 FUNC_4(&VAR_10->queue);
 return 0;
}
