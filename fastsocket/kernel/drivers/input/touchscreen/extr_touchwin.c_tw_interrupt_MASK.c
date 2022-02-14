
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw {int touched; unsigned char* data; scalar_t__ idx; struct input_dev* dev; } ;
struct serio {int dummy; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct input_dev*,int ,unsigned char) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 struct tw* FUNC_3 (struct serio*) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct serio *VAR_5,
  unsigned char VAR_6, unsigned int VAR_7)
{
 struct tw *VAR_8 = FUNC_3(VAR_5);
 struct input_dev *VAR_9 = VAR_8->dev;

 if (VAR_6) {
  VAR_8->touched = 1;
  VAR_8->data[VAR_8->idx++] = VAR_6;

  if (VAR_8->idx == VAR_4 && VAR_8->data[1] == VAR_8->data[2]) {
   FUNC_0(VAR_9, VAR_0, VAR_8->data[0]);
   FUNC_0(VAR_9, VAR_1, VAR_8->data[1]);
   FUNC_1(VAR_9, VAR_2, 1);
   FUNC_2(VAR_9);
   VAR_8->idx = 0;
  }
 } else if (VAR_8->touched) {
  FUNC_1(VAR_9, VAR_2, 0);
  FUNC_2(VAR_9);
  VAR_8->idx = 0;
  VAR_8->touched = 0;
 }

 return VAR_3;
}
