
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {int (* init ) (TYPE_1__*) ;} ;
struct fritzcard {scalar_t__ type; int irq; int name; int irqcnt; int lock; TYPE_1__ isac; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fritzcard*,int ,int) ;
 int FUNC_1 (struct fritzcard*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct fritzcard*) ;
 int VAR_10 ;
 int FUNC_3 (struct fritzcard*) ;
 int FUNC_4 (int ,struct fritzcard*) ;
 int FUNC_5 (struct fritzcard*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int ,int,...) ;
 int FUNC_8 (char*,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,struct fritzcard*) ;
 int FUNC_10 (struct fritzcard*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_14(struct fritzcard *VAR_11)
{
 int VAR_12, VAR_13 = 3;
 u_long VAR_14;

 FUNC_10(VAR_11);
 if (VAR_11->type == VAR_0)
  VAR_12 = FUNC_9(VAR_11->irq, VAR_9,
   VAR_3, VAR_11->name, VAR_11);
 else
  VAR_12 = FUNC_9(VAR_11->irq, VAR_8,
   VAR_3, VAR_11->name, VAR_11);
 if (VAR_12) {
  FUNC_7("%s: couldn't get interrupt %d\n",
   VAR_11->name, VAR_11->irq);
  return VAR_12;
 }
 while (VAR_13--) {
  FUNC_11(&VAR_11->lock, VAR_14);
  VAR_12 = VAR_11->isac.init(&VAR_11->isac);
  if (VAR_12) {
   FUNC_12(&VAR_11->lock, VAR_14);
   FUNC_7("%s: ISAC init failed with %d\n",
    VAR_11->name, VAR_12);
   break;
  }
  FUNC_2(VAR_11);
  FUNC_5(VAR_11);
  FUNC_3(VAR_11);

  if (VAR_0 == VAR_11->type) {
   FUNC_1(VAR_11, VAR_5, 0);
   FUNC_1(VAR_11, VAR_4, 0x41);
  } else {
   FUNC_0(VAR_11, VAR_7, 0);
   FUNC_0(VAR_11, VAR_6, 0x41);
  }
  FUNC_12(&VAR_11->lock, VAR_14);

  FUNC_6(10);
  if (VAR_10 & VAR_1)
   FUNC_8("%s: IRQ %d count %d\n", VAR_11->name,
    VAR_11->irq, VAR_11->irqcnt);
  if (!VAR_11->irqcnt) {
   FUNC_7("%s: IRQ(%d) getting no IRQs during init %d\n",
    VAR_11->name, VAR_11->irq, 3 - VAR_13);
   FUNC_10(VAR_11);
  } else
   return 0;
 }
 FUNC_4(VAR_11->irq, VAR_11);
 return -VAR_2;
}
