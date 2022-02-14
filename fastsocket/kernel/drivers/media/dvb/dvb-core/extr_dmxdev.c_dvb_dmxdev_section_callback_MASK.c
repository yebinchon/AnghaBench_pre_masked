
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int error; int queue; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ sec; } ;
struct dmxdev_filter {scalar_t__ state; TYPE_4__ buffer; TYPE_3__* dev; TYPE_2__ params; int timer; } ;
struct dmx_section_filter {struct dmxdev_filter* priv; } ;
typedef enum dmx_success { ____Placeholder_dmx_success } dmx_success ;
struct TYPE_8__ {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int const,int const,int const,int const,int const,int const) ;
 int FUNC_2 (TYPE_4__*,int const*,size_t) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(const u8 *VAR_3, size_t VAR_4,
           const u8 *VAR_5, size_t VAR_6,
           struct dmx_section_filter *VAR_7,
           enum dmx_success VAR_8)
{
 struct dmxdev_filter *VAR_9 = VAR_7->priv;
 int VAR_10;

 if (VAR_9->buffer.error) {
  FUNC_6(&VAR_9->buffer.queue);
  return 0;
 }
 FUNC_4(&VAR_9->dev->lock);
 if (VAR_9->state != VAR_1) {
  FUNC_5(&VAR_9->dev->lock);
  return 0;
 }
 FUNC_0(&VAR_9->timer);
 FUNC_1("dmxdev: section callback %02x %02x %02x %02x %02x %02x\n",
  VAR_3[0], VAR_3[1],
  VAR_3[2], VAR_3[3], VAR_3[4], VAR_3[5]);
 VAR_10 = FUNC_2(&VAR_9->buffer, VAR_3,
          VAR_4);
 if (VAR_10 == VAR_4) {
  VAR_10 = FUNC_2(&VAR_9->buffer, VAR_5,
           VAR_6);
 }
 if (VAR_10 < 0) {
  FUNC_3(&VAR_9->buffer);
  VAR_9->buffer.error = VAR_10;
 }
 if (VAR_9->params.sec.flags & VAR_2)
  VAR_9->state = VAR_0;
 FUNC_5(&VAR_9->dev->lock);
 FUNC_6(&VAR_9->buffer.queue);
 return 0;
}
