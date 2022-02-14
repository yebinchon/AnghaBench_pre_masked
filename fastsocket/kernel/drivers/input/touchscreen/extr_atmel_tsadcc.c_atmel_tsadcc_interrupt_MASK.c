
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct atmel_tsadcc {int bufferedmeasure; int prev_absx; int prev_absy; struct input_dev* input; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_19, void *VAR_20)
{
 struct atmel_tsadcc *VAR_21 = (struct atmel_tsadcc *)VAR_20;
 struct input_dev *VAR_22 = VAR_21->input;

 unsigned int VAR_23;
 unsigned int VAR_24;

 VAR_23 = FUNC_1(VAR_13);
 VAR_23 &= FUNC_1(VAR_8);

 if (VAR_23 & VAR_10) {

  VAR_24 = FUNC_1(VAR_9) | VAR_12;

  FUNC_2(VAR_9, VAR_24);
  FUNC_2(VAR_16, VAR_14);
  FUNC_2(VAR_6,
       FUNC_0(3) | VAR_10);
  FUNC_2(VAR_7, VAR_11);

  FUNC_4(VAR_22, VAR_17, 0);
  VAR_21->bufferedmeasure = 0;
  FUNC_5(VAR_22);

 } else if (VAR_23 & VAR_11) {

  VAR_24 = FUNC_1(VAR_9);
  VAR_24 &= ~VAR_12;

  FUNC_2(VAR_6, VAR_11);
  FUNC_2(VAR_9, VAR_24);
  FUNC_2(VAR_7,
       FUNC_0(3) | VAR_10);
  FUNC_2(VAR_16,
       VAR_15 | (0x0FFF << 16));

 } else if (VAR_23 & FUNC_0(3)) {


  if (VAR_21->bufferedmeasure) {



   FUNC_3(VAR_22, VAR_0, VAR_21->prev_absx);
   FUNC_3(VAR_22, VAR_1, VAR_21->prev_absy);
   FUNC_4(VAR_22, VAR_17, 1);
   FUNC_5(VAR_22);
  } else
   VAR_21->bufferedmeasure = 1;


  VAR_21->prev_absx = FUNC_1(VAR_5) << 10;
  VAR_21->prev_absx /= FUNC_1(VAR_4);

  VAR_21->prev_absy = FUNC_1(VAR_3) << 10;
  VAR_21->prev_absy /= FUNC_1(VAR_2);
 }

 return VAR_18;
}
