
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct ep93xx_keypad {int* matrix_keycodes; int key1; int key2; struct input_dev* input_dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct input_dev*,int,int) ;
 int FUNC_1 (struct input_dev*) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 struct ep93xx_keypad *VAR_10 = VAR_9;
 struct input_dev *VAR_11 = VAR_10->input_dev;
 unsigned int VAR_12 = FUNC_2(VAR_1);
 int VAR_13, VAR_14, VAR_15;

 VAR_13 = (VAR_12 & VAR_4) >> VAR_5;
 VAR_14 = VAR_10->matrix_keycodes[VAR_13];

 VAR_13 = (VAR_12 & VAR_6) >> VAR_7;
 VAR_15 = VAR_10->matrix_keycodes[VAR_13];

 if (VAR_12 & VAR_3) {
  if (VAR_10->key1 && VAR_14 != VAR_10->key1 && VAR_15 != VAR_10->key1)
   FUNC_0(VAR_11, VAR_10->key1, 0);

  if (VAR_10->key2 && VAR_14 != VAR_10->key2 && VAR_15 != VAR_10->key2)
   FUNC_0(VAR_11, VAR_10->key2, 0);

  FUNC_0(VAR_11, VAR_14, 1);
  FUNC_0(VAR_11, VAR_15, 1);

  VAR_10->key1 = VAR_14;
  VAR_10->key2 = VAR_15;

 } else if (VAR_12 & VAR_2) {
  if (VAR_10->key1 && VAR_14 != VAR_10->key1)
   FUNC_0(VAR_11, VAR_10->key1, 0);

  if (VAR_10->key2 && VAR_14 != VAR_10->key2)
   FUNC_0(VAR_11, VAR_10->key2, 0);

  FUNC_0(VAR_11, VAR_14, 1);

  VAR_10->key1 = VAR_14;
  VAR_10->key2 = 0;

 } else {
  FUNC_0(VAR_11, VAR_10->key1, 0);
  FUNC_0(VAR_11, VAR_10->key2, 0);

  VAR_10->key1 = VAR_10->key2 = 0;
 }
 FUNC_1(VAR_11);

 return VAR_0;
}
