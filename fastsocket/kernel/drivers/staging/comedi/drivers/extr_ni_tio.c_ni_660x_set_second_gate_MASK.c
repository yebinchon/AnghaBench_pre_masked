
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int * regs; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_3 ;



 unsigned int const FUNC_3 (unsigned int) ;


 unsigned int const FUNC_4 (unsigned int) ;

 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_5 (struct ni_gpct*,int ,unsigned int const) ;

__attribute__((used)) static int FUNC_6(struct ni_gpct *VAR_6,
       unsigned int VAR_7)
{
 struct ni_gpct_device *VAR_8 = VAR_6->counter_dev;
 const unsigned VAR_9 =
     FUNC_2(VAR_6->counter_index);
 const unsigned VAR_10 = FUNC_0(VAR_7);

 static const unsigned VAR_11 = 0x1f;
 unsigned VAR_12;
 unsigned VAR_13;

 switch (VAR_10) {
 case 129:
 case 128:
 case 130:
 case 132:
 case 133:
  VAR_12 =
      VAR_10 & VAR_11;
  break;
 case 131:
  VAR_12 =
      VAR_3;
  break;
 default:
  for (VAR_13 = 0; VAR_13 <= VAR_4; ++VAR_13) {
   if (VAR_10 == FUNC_3(VAR_13)) {
    VAR_12 =
        VAR_10 &
        VAR_11;
    break;
   }
  }
  if (VAR_13 <= VAR_4)
   break;
  for (VAR_13 = 0; VAR_13 <= VAR_5; ++VAR_13) {
   if (VAR_10 ==
       FUNC_4(VAR_13)) {
    VAR_12 =
        VAR_10 &
        VAR_11;
    break;
   }
  }
  if (VAR_13 <= VAR_5)
   break;
  return -VAR_0;
  break;
 };
 VAR_8->regs[VAR_9] |= VAR_1;
 VAR_8->regs[VAR_9] &= ~VAR_2;
 VAR_8->regs[VAR_9] |=
     FUNC_1(VAR_12);
 FUNC_5(VAR_6, VAR_8->regs[VAR_9],
         VAR_9);
 return 0;
}
