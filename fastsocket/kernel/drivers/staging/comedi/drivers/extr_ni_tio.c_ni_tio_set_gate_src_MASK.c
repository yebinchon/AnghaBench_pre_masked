
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int variant; int * regs; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (struct ni_gpct*,unsigned int) ;
 int FUNC_5 (struct ni_gpct*,unsigned int) ;



 int FUNC_6 (struct ni_gpct*,unsigned int) ;
 int FUNC_7 (struct ni_gpct*,unsigned int) ;
 int FUNC_8 (struct ni_gpct_device*) ;
 int FUNC_9 (struct ni_gpct*,int ,int ,int ) ;
 int FUNC_10 (struct ni_gpct*,unsigned int) ;
 int FUNC_11 (struct ni_gpct*,int ,unsigned int const) ;

int FUNC_12(struct ni_gpct *VAR_7, unsigned VAR_8,
   unsigned int VAR_9)
{
 struct ni_gpct_device *VAR_10 = VAR_7->counter_dev;
 const unsigned VAR_11 =
     FUNC_3(VAR_7->counter_index);

 switch (VAR_8) {
 case 0:
  if (FUNC_1(VAR_9) == VAR_6) {
   FUNC_9(VAR_7,
     FUNC_2(VAR_7->
         counter_index),
     VAR_3,
     VAR_2);
   return 0;
  }
  FUNC_10(VAR_7, VAR_9);
  switch (VAR_10->variant) {
  case 129:
  case 128:
   return FUNC_6(VAR_7, VAR_9);
   break;
  case 130:
   return FUNC_4(VAR_7, VAR_9);
   break;
  default:
   FUNC_0();
   break;
  }
  break;
 case 1:
  if (FUNC_8(VAR_10) == 0)
   return -VAR_1;
  if (FUNC_1(VAR_9) == VAR_6) {
   VAR_10->regs[VAR_11] &=
       ~VAR_4;
   FUNC_11(VAR_7,
           VAR_10->regs[VAR_11],
           VAR_11);
   return 0;
  }
  if (VAR_9 & VAR_0) {
   VAR_10->regs[VAR_11] |=
       VAR_5;
  } else {
   VAR_10->regs[VAR_11] &=
       ~VAR_5;
  }
  switch (VAR_10->variant) {
  case 128:
   return FUNC_7(VAR_7,
          VAR_9);
   break;
  case 130:
   return FUNC_5(VAR_7, VAR_9);
   break;
  default:
   FUNC_0();
   break;
  }
  break;
 default:
  return -VAR_1;
  break;
 }
 return 0;
}
