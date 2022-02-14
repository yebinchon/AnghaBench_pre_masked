
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int variant; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;


 unsigned int VAR_6 ;
 scalar_t__ FUNC_3 (struct ni_gpct_device*) ;
 int FUNC_4 (struct ni_gpct*,int ,unsigned int,unsigned int) ;
 int FUNC_5 (struct ni_gpct*,int ,int ,int ,unsigned int) ;

int FUNC_6(struct ni_gpct *VAR_7, int VAR_8, unsigned VAR_9)
{
 struct ni_gpct_device *VAR_10 = VAR_7->counter_dev;

 unsigned VAR_11 = 0;

 if (VAR_8) {
  switch (VAR_9) {
  case 129:
   VAR_11 |= VAR_1;
   break;
  case 128:
   VAR_11 |= VAR_1 | VAR_2;
   break;
  default:
   break;
  }
  if (FUNC_3(VAR_10)) {
   unsigned VAR_12 = 0;

   switch (VAR_9) {
   case 129:
   case 128:
    break;
   default:
    if (VAR_9 & VAR_6) {

     unsigned VAR_13 =
         (VAR_9 <<
          VAR_5) &
         FUNC_0
         (VAR_10->variant);

     VAR_12 |=
         VAR_4 |
         VAR_13;
    } else {
     return -VAR_0;
    }
    break;
   }
   FUNC_4(VAR_7,
     FUNC_2
     (VAR_7->counter_index),
     FUNC_0
     (VAR_10->variant) |
     VAR_4,
     VAR_12);
  }
 } else {
  VAR_11 |= VAR_3;
 }
 FUNC_5(VAR_7,
      FUNC_1(VAR_7->counter_index),
      0, 0, VAR_11);
 return 0;
}
