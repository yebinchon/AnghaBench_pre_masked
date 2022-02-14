
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned short VAR_9 ;
 int VAR_10 ;
 unsigned short VAR_11 ;
 int VAR_12 ;
 short FUNC_0 (int ) ;
 int FUNC_1 (struct input_dev*,int ,unsigned short) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_15, void *VAR_16)
{
 struct input_dev *VAR_17 = VAR_16;
 unsigned short VAR_18, VAR_19, VAR_20;


 FUNC_4(VAR_8, VAR_4);

 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_17, VAR_2, 0);
 } else {
  FUNC_4(VAR_10, VAR_4);
  VAR_18 = FUNC_0(VAR_3);

  FUNC_4(VAR_12, VAR_4);
  VAR_19 = FUNC_0(VAR_3);

  FUNC_4(VAR_7, VAR_4);
  VAR_20 = FUNC_0(VAR_3);


  VAR_18 = VAR_9 - ((VAR_18 * 8) + ((VAR_20 >> 4) & 0xf));
  VAR_19 = (VAR_19 * 8) + (VAR_20 & 0xf);
  if (VAR_13)
   VAR_18 = VAR_9 - VAR_18;
  if (VAR_14)
   VAR_19 = VAR_11 - VAR_19;

  if (VAR_18 != VAR_9 && VAR_18 != 0) {
   FUNC_2(VAR_17, VAR_2, 1);
   FUNC_1(VAR_17, VAR_0, VAR_18);
   FUNC_1(VAR_17, VAR_1, VAR_19);
  }
 }

 FUNC_3(VAR_17);

 FUNC_0(VAR_5);

 return VAR_6;
}
