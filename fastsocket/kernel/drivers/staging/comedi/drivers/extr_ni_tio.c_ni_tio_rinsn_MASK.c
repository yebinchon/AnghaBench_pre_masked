
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {unsigned int* regs; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;
struct comedi_insn {int n; int chanspec; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ni_gpct*,int ,int ,int ) ;
 unsigned int FUNC_6 (struct ni_gpct*,int ) ;

int FUNC_7(struct ni_gpct *VAR_1, struct comedi_insn *VAR_2,
   unsigned int *VAR_3)
{
 struct ni_gpct_device *VAR_4 = VAR_1->counter_dev;
 const unsigned VAR_5 = FUNC_0(VAR_2->chanspec);
 unsigned VAR_6;
 unsigned VAR_7;
 unsigned VAR_8;

 if (VAR_2->n < 1)
  return 0;
 switch (VAR_5) {
 case 0:
  FUNC_5(VAR_1,
    FUNC_1(VAR_1->counter_index),
    VAR_0, 0);
  FUNC_5(VAR_1,
    FUNC_1(VAR_1->counter_index),
    VAR_0, VAR_0);





  VAR_6 =
      FUNC_6(VAR_1,
      FUNC_4(VAR_1->counter_index));
  VAR_7 =
      FUNC_6(VAR_1,
      FUNC_4(VAR_1->counter_index));
  if (VAR_6 != VAR_7)
   VAR_8 =
       FUNC_6(VAR_1,
       FUNC_4(VAR_1->
              counter_index));
  else
   VAR_8 = VAR_6;
  VAR_3[0] = VAR_8;
  return 0;
  break;
 case 1:
  VAR_3[0] =
      VAR_4->
      regs[FUNC_2(VAR_1->counter_index)];
  break;
 case 2:
  VAR_3[0] =
      VAR_4->
      regs[FUNC_3(VAR_1->counter_index)];
  break;
 };
 return 0;
}
