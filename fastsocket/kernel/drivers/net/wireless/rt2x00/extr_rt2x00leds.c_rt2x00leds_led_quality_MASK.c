
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int brightness; int (* brightness_set ) (TYPE_1__*,unsigned int) ;} ;
struct rt2x00_led {scalar_t__ type; int flags; TYPE_1__ led_dev; } ;
struct rt2x00_dev {scalar_t__ rssi_offset; struct rt2x00_led led_qual; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,unsigned int) ;

void FUNC_1(struct rt2x00_dev *VAR_3, int VAR_4)
{
 struct rt2x00_led *VAR_5 = &VAR_3->led_qual;
 unsigned int VAR_6;

 if ((VAR_5->type != VAR_2) || !(VAR_5->flags & VAR_1))
  return;





 VAR_4 += VAR_3->rssi_offset;





 if (VAR_4 <= 30)
  VAR_4 = 0;
 else if (VAR_4 <= 39)
  VAR_4 = 1;
 else if (VAR_4 <= 49)
  VAR_4 = 2;
 else if (VAR_4 <= 53)
  VAR_4 = 3;
 else if (VAR_4 <= 63)
  VAR_4 = 4;
 else
  VAR_4 = 5;






 VAR_6 = ((VAR_0 / 6) * VAR_4) + 1;
 if (VAR_6 != VAR_5->led_dev.brightness) {
  VAR_5->led_dev.brightness_set(&VAR_5->led_dev, VAR_6);
  VAR_5->led_dev.brightness = VAR_6;
 }
}
