
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_trig_data {unsigned long delay_off; int timer; int delay_on; } ;
struct led_classdev {scalar_t__ (* blink_set ) (struct led_classdev*,int *,unsigned long*) ;struct timer_trig_data* trigger_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct led_classdev* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,scalar_t__) ;
 unsigned long FUNC_4 (char const*,char**,int) ;
 scalar_t__ FUNC_5 (struct led_classdev*,int *,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct led_classdev *VAR_6 = FUNC_1(VAR_2);
 struct timer_trig_data *VAR_7 = VAR_6->trigger_data;
 int VAR_8 = -VAR_0;
 char *VAR_9;
 unsigned long VAR_10 = FUNC_4(VAR_4, &VAR_9, 10);
 size_t VAR_11 = VAR_9 - VAR_4;

 if (FUNC_2(*VAR_9))
  VAR_11++;

 if (VAR_11 == VAR_5) {
  if (VAR_7->delay_off != VAR_10) {

   VAR_7->delay_off = VAR_10;


   FUNC_0(&VAR_7->timer);


   if (!VAR_6->blink_set ||
       VAR_6->blink_set(VAR_6,
         &VAR_7->delay_on, &VAR_7->delay_off)) {

    FUNC_3(&VAR_7->timer, VAR_1 + 1);
   }
  }
  VAR_8 = VAR_11;
 }

 return VAR_8;
}
