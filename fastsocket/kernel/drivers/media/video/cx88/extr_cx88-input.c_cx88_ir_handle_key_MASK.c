
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx88_core {int boardnr; } ;
struct cx88_IR {int last_gpio; int mask_keydown; int mask_keyup; int dev; struct cx88_core* core; scalar_t__ polling; int mask_keycode; int gpio_addr; } ;


 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,char*,char*,char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct cx88_IR *VAR_3)
{
 struct cx88_core *VAR_4 = VAR_3->core;
 u32 VAR_5, VAR_6, VAR_7;


 VAR_5 = FUNC_0(VAR_3->gpio_addr);
 switch (VAR_4->boardnr) {
 case 131:
  VAR_7 = FUNC_0(VAR_2);

  VAR_5=(VAR_5 & 0x7fd) + (VAR_7 & 0xef);
  break;
 case 130:
 case 129:
 case 128:
  VAR_5 = (VAR_5 & 0x6ff) | ((FUNC_0(VAR_2) << 8) & 0x900);
  VAR_7 = VAR_5;
  break;
 default:
  VAR_7 = VAR_5;
 }
 if (VAR_3->polling) {
  if (VAR_3->last_gpio == VAR_7)
   return;
  VAR_3->last_gpio = VAR_7;
 }


 VAR_6 = FUNC_2(VAR_5, VAR_3->mask_keycode);
 FUNC_1("irq gpio=0x%x code=%d | %s%s%s\n",
     VAR_5, VAR_6,
     VAR_3->polling ? "poll" : "irq",
     (VAR_5 & VAR_3->mask_keydown) ? " down" : "",
     (VAR_5 & VAR_3->mask_keyup) ? " up" : "");

 if (VAR_3->core->boardnr == VAR_0) {
  u32 VAR_8 = FUNC_0(VAR_1);

  VAR_6 = (VAR_6 << 4) | ((VAR_8 & 0xf0) >> 4);

  FUNC_3(VAR_3->dev, VAR_6, 0);

 } else if (VAR_3->mask_keydown) {

  if (VAR_5 & VAR_3->mask_keydown)
   FUNC_4(VAR_3->dev, VAR_6, 0);
  else
   FUNC_5(VAR_3->dev);

 } else if (VAR_3->mask_keyup) {

  if (0 == (VAR_5 & VAR_3->mask_keyup))
   FUNC_4(VAR_3->dev, VAR_6, 0);
  else
   FUNC_5(VAR_3->dev);

 } else {

  FUNC_4(VAR_3->dev, VAR_6, 0);
  FUNC_5(VAR_3->dev);
 }
}
