
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct touchit213 {unsigned char* data; size_t idx; struct input_dev* dev; } ;
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
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (char*,unsigned char) ;
 struct touchit213* FUNC_4 (struct serio*) ;

__attribute__((used)) static irqreturn_t FUNC_5(struct serio *VAR_7,
  unsigned char VAR_8, unsigned int VAR_9)
{
 struct touchit213 *VAR_10 = FUNC_4(VAR_7);
 struct input_dev *VAR_11 = VAR_10->dev;

 VAR_10->data[VAR_10->idx] = VAR_8;

 switch (VAR_10->idx++) {
 case 0:
  if ((VAR_10->data[0] & VAR_5) !=
    VAR_4) {
   FUNC_3("unsynchronized data: 0x%02x\n", VAR_8);
   VAR_10->idx = 0;
  }
  break;

 case 4:
  VAR_10->idx = 0;
  FUNC_0(VAR_11, VAR_0,
   (VAR_10->data[1] << 7) | VAR_10->data[2]);
  FUNC_0(VAR_11, VAR_1,
   (VAR_10->data[3] << 7) | VAR_10->data[4]);
  FUNC_1(VAR_11, VAR_2,
   VAR_10->data[0] & VAR_6);
  FUNC_2(VAR_11);
  break;
 }

 return VAR_3;
}
