
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int* regs; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (int ) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 size_t FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct ni_gpct_device*) ;
 int FUNC_11 (struct ni_gpct*) ;
 scalar_t__ FUNC_12 (struct ni_gpct_device*) ;
 int FUNC_13 (struct ni_gpct*,int ,int ,int) ;
 int FUNC_14 (struct ni_gpct*,int,size_t) ;

void FUNC_15(struct ni_gpct *VAR_1)
{
 struct ni_gpct_device *VAR_2 = VAR_1->counter_dev;

 FUNC_11(VAR_1);

 VAR_2->regs[FUNC_0(VAR_1->counter_index)] =
     0x0;
 FUNC_14(VAR_1,
         VAR_2->
         regs[FUNC_0(VAR_1->counter_index)],
         FUNC_0(VAR_1->counter_index));
 FUNC_13(VAR_1, FUNC_1(VAR_1->counter_index),
   ~0, VAR_0);
 FUNC_13(VAR_1, FUNC_8(VAR_1->counter_index), ~0,
   0);
 VAR_2->regs[FUNC_6(VAR_1->counter_index)] = 0x0;
 FUNC_14(VAR_1,
         VAR_2->
         regs[FUNC_6(VAR_1->counter_index)],
         FUNC_6(VAR_1->counter_index));
 VAR_2->regs[FUNC_7(VAR_1->counter_index)] = 0x0;
 FUNC_14(VAR_1,
         VAR_2->
         regs[FUNC_7(VAR_1->counter_index)],
         FUNC_7(VAR_1->counter_index));
 FUNC_13(VAR_1,
   FUNC_4(VAR_1->counter_index), ~0,
   0);
 if (FUNC_10(VAR_2)) {
  FUNC_13(VAR_1,
    FUNC_2(VAR_1->
          counter_index), ~0,
    0);
 }
 if (FUNC_12(VAR_2)) {
  VAR_2->
      regs[FUNC_9(VAR_1->counter_index)] =
      0x0;
  FUNC_14(VAR_1,
          VAR_2->
          regs[FUNC_9
        (VAR_1->counter_index)],
          FUNC_9(VAR_1->
       counter_index));
 }
 FUNC_13(VAR_1,
   FUNC_3(VAR_1->counter_index), ~0,
   0x0);
 FUNC_13(VAR_1,
   FUNC_5(VAR_1->counter_index),
   ~0, 0x0);
}
