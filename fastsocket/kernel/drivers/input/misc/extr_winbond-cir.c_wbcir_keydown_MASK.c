
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct wbcir_data {scalar_t__ last_scancode; scalar_t__ last_toggle; int keypressed; unsigned int last_keycode; scalar_t__ keyup_jiffies; int timer_keyup; int rxtrigger; int input_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,unsigned int,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 unsigned int FUNC_6 (struct wbcir_data*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct wbcir_data *VAR_7, u32 VAR_8, u8 VAR_9)
{
 unsigned int VAR_10;


 if (VAR_7->last_scancode == VAR_8 &&
     VAR_7->last_toggle == VAR_9 &&
     VAR_7->keypressed)
  goto set_timer;
 VAR_7->last_scancode = VAR_8;


 if (VAR_7->keypressed) {
  FUNC_1(VAR_7->input_dev, VAR_7->last_keycode, 0);
  FUNC_2(VAR_7->input_dev);
  VAR_7->keypressed = 0;
 }


 FUNC_0(VAR_7->input_dev, VAR_0, VAR_5, (int)VAR_8);


 VAR_10 = FUNC_6(VAR_7, VAR_8);
 if (VAR_10 == VAR_2)
  goto set_timer;


 FUNC_1(VAR_7->input_dev, VAR_10, 1);
 VAR_7->keypressed = 1;
 VAR_7->last_keycode = VAR_10;
 VAR_7->last_toggle = VAR_9;

set_timer:
 FUNC_2(VAR_7->input_dev);
 FUNC_3(VAR_7->rxtrigger,
     VAR_7->keypressed ? VAR_3 : VAR_4);
 VAR_7->keyup_jiffies = VAR_6 + FUNC_5(VAR_1);
 FUNC_4(&VAR_7->timer_keyup, VAR_7->keyup_jiffies);
}
