
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct irq_chip {char* name; int ack; } ;
struct TYPE_2__ {int ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 struct irq_chip VAR_3 ;
 int FUNC_5 (int,int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 struct task_struct* FUNC_7 (int ,void*,char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,char*,int,unsigned int,int) ;
 int FUNC_10 (int,int ,int ,char*,int *) ;
 int FUNC_11 (int,struct irq_chip*,int *) ;
 int FUNC_12 (int ) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_13 (int ) ;
 int VAR_11 ;
 int * VAR_12 ;

int FUNC_14(int VAR_13, unsigned VAR_14, unsigned VAR_15)
{
 static struct irq_chip VAR_16;

 int VAR_17;
 int VAR_18;
 struct task_struct *VAR_19;





 VAR_17 = FUNC_12(VAR_11);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_12 = FUNC_3("twl4030-irqchip");
 if (!VAR_12) {
  FUNC_8("twl4030: workqueue FAIL\n");
  return -VAR_0;
 }

 VAR_7 = VAR_14;




 VAR_16 = VAR_3;
 VAR_16.name = "twl4030";

 VAR_10.ack = VAR_3.ack;

 for (VAR_18 = VAR_14; VAR_18 < VAR_15; VAR_18++) {
  FUNC_11(VAR_18, &VAR_16,
    VAR_4);
  FUNC_2(VAR_18);
 }
 VAR_8 = VAR_18;
 FUNC_9("twl4030: %s (irq %d) chaining IRQs %d..%d\n", "PIH",
   VAR_13, VAR_14, VAR_8 - 1);


 VAR_17 = FUNC_13(VAR_2);
 if (VAR_17 < 0) {
  FUNC_8("twl4030: sih_setup PWR INT --> %d\n", VAR_17);
  goto fail;
 }




 FUNC_6(&VAR_6);

 VAR_17 = FUNC_10(VAR_13, VAR_5, VAR_1,
    "TWL4030-PIH", &VAR_6);
 if (VAR_17 < 0) {
  FUNC_8("twl4030: could not claim irq%d: %d\n", VAR_13, VAR_17);
  goto fail_rqirq;
 }

 VAR_19 = FUNC_7(VAR_9, (void *)VAR_13, "twl4030-irq");
 if (FUNC_0(VAR_19)) {
  FUNC_8("twl4030: could not create irq %d thread!\n", VAR_13);
  VAR_17 = FUNC_1(VAR_19);
  goto fail_kthread;
 }
 return VAR_17;
fail_kthread:
 FUNC_5(VAR_13, &VAR_6);
fail_rqirq:

fail:
 for (VAR_18 = VAR_14; VAR_18 < VAR_15; VAR_18++)
  FUNC_11(VAR_18, ((void*)0), ((void*)0));
 FUNC_4(VAR_12);
 VAR_12 = ((void*)0);
 return VAR_17;
}
