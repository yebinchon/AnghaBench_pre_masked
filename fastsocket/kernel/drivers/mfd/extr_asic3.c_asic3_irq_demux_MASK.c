
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_desc {int (* handle_irq ) (int,struct irq_desc*) ;struct asic3* handler_data; TYPE_1__* chip; } ;
struct asic3 {int irq_base; int* irq_bothedge; int dev; int lock; } ;
struct TYPE_2__ {int (* ack ) (unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct asic3*,unsigned long,int) ;
 void* FUNC_2 (struct asic3*,scalar_t__) ;
 int FUNC_3 (struct asic3*,scalar_t__,int ) ;
 int FUNC_4 (int ,char*) ;
 struct irq_desc* FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int,struct irq_desc*) ;
 int FUNC_10 (int,struct irq_desc*) ;

__attribute__((used)) static void FUNC_11(unsigned int VAR_10, struct irq_desc *VAR_11)
{
 int VAR_12, VAR_13;
 unsigned long VAR_14;
 struct asic3 *VAR_15;

 VAR_11->chip->ack(VAR_10);

 VAR_15 = VAR_11->handler_data;

 for (VAR_12 = 0 ; VAR_12 < VAR_8; VAR_12++) {
  u32 VAR_16;
  int VAR_17;

  FUNC_6(&VAR_15->lock, VAR_14);
  VAR_16 = FUNC_2(VAR_15,
          FUNC_0(VAR_7, VAR_9));
  FUNC_7(&VAR_15->lock, VAR_14);


  if ((VAR_16 & 0x3ff) == 0)
   break;


  for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
   if (VAR_16 & (1 << VAR_17)) {
    unsigned long VAR_18, VAR_19;

    VAR_18 = VAR_1
           + VAR_17 * VAR_2;

    FUNC_6(&VAR_15->lock, VAR_14);
    VAR_19 = FUNC_2(VAR_15,
           VAR_18 +
           VAR_3);

    FUNC_3(VAR_15,
           VAR_18 +
           VAR_3, 0);
    FUNC_7(&VAR_15->lock, VAR_14);

    for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
     int VAR_20 = (1 << VAR_13);
     unsigned int VAR_21;

     if (!(VAR_19 & VAR_20))
      continue;

     VAR_21 = VAR_15->irq_base +
      (VAR_0 * VAR_17)
      + VAR_13;
     VAR_11 = FUNC_5(VAR_21);
     VAR_11->handle_irq(VAR_21, VAR_11);
     if (VAR_15->irq_bothedge[VAR_17] & VAR_20)
      FUNC_1(VAR_15, VAR_18,
            VAR_20);
    }
   }
  }


  for (VAR_13 = VAR_5; VAR_13 < VAR_4; VAR_13++) {

   if (VAR_16 & (1 << (VAR_13 - VAR_5 + 4))) {
    VAR_11 = FUNC_5(VAR_15->irq_base + VAR_13);
    VAR_11->handle_irq(VAR_15->irq_base + VAR_13,
       VAR_11);
   }
  }
 }

 if (VAR_12 >= VAR_8)
  FUNC_4(VAR_15->dev, "interrupt processing overrun\n");
}
