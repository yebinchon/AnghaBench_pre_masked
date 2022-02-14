
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int variant; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;



 int FUNC_2 (struct ni_gpct*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct ni_gpct *VAR_5, short VAR_6,
     short VAR_7)
{
 struct ni_gpct_device *VAR_8 = VAR_5->counter_dev;
 unsigned VAR_9 = 0;

 if (VAR_6) {
  if (VAR_7) {
   VAR_9 |= VAR_3;
  } else {
   VAR_9 |= VAR_4;
  }
 }
 FUNC_2(VAR_5,
   FUNC_1(VAR_5->counter_index),
   VAR_3 | VAR_4,
   VAR_9);
 switch (VAR_8->variant) {
 case 129:
  break;
 case 128:
 case 130:
  {
   unsigned VAR_10 = 0;

   if (VAR_6) {
    VAR_10 |= VAR_0;
    VAR_10 |= VAR_1;
   }
   if (VAR_7 == 0) {
    VAR_10 |= VAR_2;
   }
   FUNC_2(VAR_5,
     FUNC_0(VAR_5->
        counter_index),
     VAR_0 | VAR_1 |
     VAR_2, VAR_10);
  }
  break;
 }
}
