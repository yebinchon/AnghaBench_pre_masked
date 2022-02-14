
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {unsigned int* regs; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;
struct comedi_insn {int n; int chanspec; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct ni_gpct*) ;
 int FUNC_5 (struct ni_gpct*,int ,int ,int ,int ) ;
 int FUNC_6 (struct ni_gpct*,unsigned int,size_t) ;

int FUNC_7(struct ni_gpct *VAR_2, struct comedi_insn *VAR_3,
   unsigned int *VAR_4)
{
 struct ni_gpct_device *VAR_5 = VAR_2->counter_dev;
 const unsigned VAR_6 = FUNC_0(VAR_3->chanspec);
 unsigned VAR_7;

 if (VAR_3->n < 1)
  return 0;
 switch (VAR_6) {
 case 0:


  VAR_7 = FUNC_4(VAR_2);
  FUNC_6(VAR_2, VAR_4[0], VAR_7);
  FUNC_5(VAR_2,
       FUNC_1(VAR_2->
              counter_index),
       0, 0, VAR_1);

  FUNC_6(VAR_2, VAR_5->regs[VAR_7], VAR_7);
  break;
 case 1:
  VAR_5->regs[FUNC_2(VAR_2->counter_index)] =
      VAR_4[0];
  FUNC_6(VAR_2, VAR_4[0],
          FUNC_2(VAR_2->counter_index));
  break;
 case 2:
  VAR_5->regs[FUNC_3(VAR_2->counter_index)] =
      VAR_4[0];
  FUNC_6(VAR_2, VAR_4[0],
          FUNC_3(VAR_2->counter_index));
  break;
 default:
  return -VAR_0;
  break;
 }
 return 0;
}
