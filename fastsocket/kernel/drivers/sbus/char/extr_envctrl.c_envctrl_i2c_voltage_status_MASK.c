
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_child_t {unsigned char voltage_mask; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static unsigned char FUNC_0(struct i2c_child_t *VAR_6,
      unsigned char VAR_7,
      char *VAR_8)
{
 unsigned char VAR_9, VAR_10 = 0;
 int VAR_11, VAR_12 = 0;

 VAR_9 = VAR_7 & VAR_6->voltage_mask;


 if (VAR_9 == VAR_6->voltage_mask) {

  VAR_10 = VAR_3;
 } else if (VAR_9 == 0) {

  VAR_10 = VAR_2;
 } else {

  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   if (VAR_6->voltage_mask & VAR_5[VAR_11]) {
    VAR_12++;


    if (!(VAR_5[VAR_11] & VAR_9))
     break;
   }
  }





  if (VAR_12 == 1)
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_0;
 }

 VAR_8[0] = VAR_10;
 return 1;
}
