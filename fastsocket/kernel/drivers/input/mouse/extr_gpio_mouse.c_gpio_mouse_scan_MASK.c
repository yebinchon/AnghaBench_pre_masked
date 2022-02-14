
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {struct input_dev* input; struct gpio_mouse_platform_data* private; } ;
struct input_dev {int dummy; } ;
struct gpio_mouse_platform_data {scalar_t__ bleft; int polarity; scalar_t__ bmiddle; scalar_t__ bright; scalar_t__ right; scalar_t__ left; scalar_t__ down; scalar_t__ up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct input_polled_dev *VAR_5)
{
 struct gpio_mouse_platform_data *VAR_6 = VAR_5->private;
 struct input_dev *VAR_7 = VAR_5->input;
 int VAR_8, VAR_9;

 if (VAR_6->bleft >= 0)
  FUNC_1(VAR_7, VAR_0,
    FUNC_0(VAR_6->bleft) ^ VAR_6->polarity);
 if (VAR_6->bmiddle >= 0)
  FUNC_1(VAR_7, VAR_1,
    FUNC_0(VAR_6->bmiddle) ^ VAR_6->polarity);
 if (VAR_6->bright >= 0)
  FUNC_1(VAR_7, VAR_2,
    FUNC_0(VAR_6->bright) ^ VAR_6->polarity);

 VAR_8 = (FUNC_0(VAR_6->right) ^ VAR_6->polarity)
  - (FUNC_0(VAR_6->left) ^ VAR_6->polarity);
 VAR_9 = (FUNC_0(VAR_6->down) ^ VAR_6->polarity)
  - (FUNC_0(VAR_6->up) ^ VAR_6->polarity);

 FUNC_2(VAR_7, VAR_3, VAR_8);
 FUNC_2(VAR_7, VAR_4, VAR_9);
 FUNC_3(VAR_7);
}
