
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skbd {scalar_t__* keycode; struct input_dev* dev; } ;
struct serio {int dummy; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct input_dev*,scalar_t__,int) ;
 int FUNC_1 (struct input_dev*) ;
 struct skbd* FUNC_2 (struct serio*) ;

__attribute__((used)) static irqreturn_t FUNC_3(struct serio *VAR_3, unsigned char VAR_4,
      unsigned int VAR_5)
{
 struct skbd *VAR_6 = FUNC_2(VAR_3);
 struct input_dev *VAR_7 = VAR_6->dev;

 if (VAR_6->keycode[VAR_4 & VAR_1]) {
  FUNC_0(VAR_7, VAR_6->keycode[VAR_4 & VAR_1],
     !(VAR_4 & VAR_2));
  FUNC_1(VAR_7);
 }

 return VAR_0;
}
