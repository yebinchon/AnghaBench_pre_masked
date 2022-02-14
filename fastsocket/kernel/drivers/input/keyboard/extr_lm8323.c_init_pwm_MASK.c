
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; int dev; int brightness_set; } ;
struct lm8323_pwm {int id; int running; int enabled; TYPE_1__ cdev; struct lm8323_chip* chip; int lock; int work; scalar_t__ desired_brightness; scalar_t__ brightness; scalar_t__ fade_time; } ;
struct lm8323_chip {struct lm8323_pwm* pwm; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,char*,...) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct device*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct lm8323_chip *VAR_3, int VAR_4, struct device *VAR_5,
      const char *VAR_6)
{
 struct lm8323_pwm *VAR_7;

 FUNC_0(VAR_4 > 3);

 VAR_7 = &VAR_3->pwm[VAR_4 - 1];

 VAR_7->id = VAR_4;
 VAR_7->fade_time = 0;
 VAR_7->brightness = 0;
 VAR_7->desired_brightness = 0;
 VAR_7->running = 0;
 VAR_7->enabled = 0;
 FUNC_1(&VAR_7->work, VAR_2);
 FUNC_6(&VAR_7->lock);
 VAR_7->chip = VAR_3;

 if (VAR_6) {
  VAR_7->cdev.name = VAR_6;
  VAR_7->cdev.brightness_set = VAR_1;
  if (FUNC_4(VAR_5, &VAR_7->cdev) < 0) {
   FUNC_2(VAR_5, "couldn't register PWM %d\n", VAR_4);
   return -1;
  }
  if (FUNC_3(VAR_7->cdev.dev,
     &VAR_0) < 0) {
   FUNC_2(VAR_5, "couldn't register time attribute\n");
   FUNC_5(&VAR_7->cdev);
   return -1;
  }
  VAR_7->enabled = 1;
 }

 return 0;
}
