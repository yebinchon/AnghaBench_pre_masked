
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {scalar_t__ variant; int * regs; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

 unsigned int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ni_gpct*,int ,unsigned int const) ;

__attribute__((used)) static void FUNC_2(struct ni_gpct *VAR_3,
     unsigned int VAR_4)
{
 struct ni_gpct_device *VAR_5 = VAR_3->counter_dev;
 const unsigned VAR_6 =
     FUNC_0(VAR_3->counter_index);

 if (VAR_5->variant != VAR_2)
  return;
 switch (VAR_4 & VAR_1) {

 case 130:
 case 128:
  VAR_5->regs[VAR_6] &= ~VAR_0;
  break;

 case 131:
 case 129:
  VAR_5->regs[VAR_6] |= VAR_0;
  break;

 default:
  return;
  break;
 }
 FUNC_1(VAR_3, VAR_5->regs[VAR_6],
         VAR_6);
}
