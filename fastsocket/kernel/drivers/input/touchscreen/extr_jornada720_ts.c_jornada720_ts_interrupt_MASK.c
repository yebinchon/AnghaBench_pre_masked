
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct jornada_ts {int y_data; int x_data; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct jornada_ts*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 struct jornada_ts* FUNC_9 (struct platform_device*) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_7, void *VAR_8)
{
 struct platform_device *VAR_9 = VAR_8;
 struct jornada_ts *VAR_10 = FUNC_9(VAR_9);
 struct input_dev *VAR_11 = VAR_10->dev;
 int VAR_12, VAR_13;


 if (VAR_4 & FUNC_0(9)) {
  FUNC_2(VAR_11, VAR_2, 0);
  FUNC_3(VAR_11);
 } else {
  FUNC_8();


  if (FUNC_7(VAR_3) == VAR_6) {
   FUNC_5(VAR_10);

   VAR_12 = FUNC_4(VAR_10->x_data);
   VAR_13 = FUNC_4(VAR_10->y_data);

   FUNC_2(VAR_11, VAR_2, 1);
   FUNC_1(VAR_11, VAR_0, VAR_12);
   FUNC_1(VAR_11, VAR_1, VAR_13);
   FUNC_3(VAR_11);
  }

  FUNC_6();
 }

 return VAR_5;
}
