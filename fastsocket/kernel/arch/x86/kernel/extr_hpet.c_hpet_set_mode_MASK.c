
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hpet_dev {int irq; int cpu; } ;
struct clock_event_device {int mult; int shift; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;







 struct hpet_dev* FUNC_0 (struct clock_event_device*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (unsigned long,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(enum clock_event_mode VAR_8,
     struct clock_event_device *VAR_9, int VAR_10)
{
 unsigned long VAR_11, VAR_12, VAR_13;
 uint64_t VAR_14;

 switch (VAR_8) {
 case 131:
  FUNC_11();
  VAR_14 = ((uint64_t)(VAR_7/VAR_6)) * VAR_9->mult;
  VAR_14 >>= VAR_9->shift;
  VAR_13 = FUNC_8(VAR_0);
  VAR_12 = VAR_13 + (unsigned long) VAR_14;
  VAR_11 = FUNC_8(FUNC_1(VAR_10));

  VAR_11 &= ~VAR_3;
  VAR_11 |= VAR_2 | VAR_4 |
         VAR_5 | VAR_1;
  FUNC_12(VAR_11, FUNC_1(VAR_10));
  FUNC_12(VAR_12, FUNC_2(VAR_10));
  FUNC_14(1);







  FUNC_12((unsigned long) VAR_14, FUNC_2(VAR_10));
  FUNC_10();
  FUNC_7();
  break;

 case 132:
  VAR_11 = FUNC_8(FUNC_1(VAR_10));
  VAR_11 &= ~VAR_4;
  VAR_11 |= VAR_2 | VAR_1;
  FUNC_12(VAR_11, FUNC_1(VAR_10));
  break;

 case 128:
 case 129:
  VAR_11 = FUNC_8(FUNC_1(VAR_10));
  VAR_11 &= ~VAR_2;
  FUNC_12(VAR_11, FUNC_1(VAR_10));
  break;

 case 130:
  if (VAR_10 == 0) {
   FUNC_6();
  } else {
   struct hpet_dev *VAR_15 = FUNC_0(VAR_9);
   FUNC_9(VAR_15->irq);
   FUNC_4(VAR_15->irq);
   FUNC_13(VAR_15->irq, FUNC_3(VAR_15->cpu));
   FUNC_5(VAR_15->irq);
  }
  FUNC_7();
  break;
 }
}
