
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr {unsigned char* data; size_t idx; struct input_dev* dev; } ;
struct serio {int dummy; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 struct tr* FUNC_3 (struct serio*) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct serio *VAR_8,
  unsigned char VAR_9, unsigned int VAR_10)
{
 struct tr *VAR_11 = FUNC_3(VAR_8);
 struct input_dev *VAR_12 = VAR_11->dev;

 VAR_11->data[VAR_11->idx] = VAR_9;

 if ((VAR_11->data[0] & VAR_5) == VAR_4) {
  if (++VAR_11->idx == VAR_7) {
   FUNC_0(VAR_12, VAR_0,
    (VAR_11->data[1] << 5) | (VAR_11->data[2] >> 1));
   FUNC_0(VAR_12, VAR_1,
    (VAR_11->data[3] << 5) | (VAR_11->data[4] >> 1));
   FUNC_1(VAR_12, VAR_2,
    VAR_11->data[0] & VAR_6);
   FUNC_2(VAR_12);
   VAR_11->idx = 0;
  }
 }

 return VAR_3;
}
