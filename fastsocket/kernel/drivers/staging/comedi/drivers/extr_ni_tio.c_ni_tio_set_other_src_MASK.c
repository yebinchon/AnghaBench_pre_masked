
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {scalar_t__ variant; unsigned int* regs; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;



 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ni_gpct*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct ni_gpct *VAR_2, unsigned VAR_3,
    unsigned int VAR_4)
{
 struct ni_gpct_device *VAR_5 = VAR_2->counter_dev;

 if (VAR_5->variant == VAR_1) {
  unsigned int VAR_6, VAR_7, VAR_8;

  VAR_6 = FUNC_0(VAR_2->counter_index);
  switch (VAR_3) {
  case 130:
   VAR_7 = 10;
   break;
  case 129:
   VAR_7 = 5;
   break;
  case 128:
   VAR_7 = 0;
   break;
  default:
   return -VAR_0;
   break;
  }
  VAR_8 = 0x1f << VAR_7;
  if (VAR_4 > 0x1f) {

   VAR_4 = 0x1f;
  }
  VAR_5->regs[VAR_6] &= ~VAR_8;
  VAR_5->regs[VAR_6] |= (VAR_4 << VAR_7) & VAR_8;
  FUNC_1(VAR_2, VAR_5->regs[VAR_6], VAR_6);

  return 0;
 }
 return -VAR_0;
}
