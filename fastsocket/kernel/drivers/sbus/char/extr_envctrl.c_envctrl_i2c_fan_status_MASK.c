
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_child_t {unsigned char fan_mask; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_0(struct i2c_child_t *VAR_4,
      unsigned char VAR_5,
      char *VAR_6)
{
 unsigned char VAR_7, VAR_8 = 0;
 int VAR_9, VAR_10 = 0;

 VAR_7 = VAR_5 & VAR_4->fan_mask;

 if (VAR_7 == VAR_4->fan_mask) {

  VAR_8 = VAR_1;
 } else if (VAR_7 == 0) {

  VAR_8 = VAR_0;
 } else {






  for (VAR_9 = 0; VAR_9 < VAR_2;VAR_9++) {
   if (VAR_4->fan_mask & VAR_3[VAR_9]) {
    if (!(VAR_3[VAR_9] & VAR_7))
     VAR_8 |= VAR_3[VAR_10];

    VAR_10++;
   }
  }
 }

 VAR_6[0] = VAR_8;
 return 1;
}
