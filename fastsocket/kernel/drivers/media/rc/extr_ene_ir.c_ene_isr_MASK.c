
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ene_device {int rx_period_adjust; int hw_lock; int rdev; int w_pointer; int r_pointer; int hw_extra_buffer; scalar_t__ rx_fan_input_inuse; scalar_t__ hw_learning_and_tx_capable; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int pulse; int duration; } ;


 int FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct ene_device*) ;
 int FUNC_5 (struct ene_device*,int) ;
 int FUNC_6 (struct ene_device*) ;
 int FUNC_7 (struct ene_device*) ;
 int FUNC_8 (struct ene_device*) ;
 int FUNC_9 (struct ene_device*) ;
 TYPE_1__ VAR_11 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_13, void *VAR_14)
{
 u16 VAR_15, VAR_16;
 int VAR_17, VAR_18;
 bool VAR_19;
 unsigned long VAR_20;
 irqreturn_t VAR_21 = VAR_10;
 struct ene_device *VAR_22 = (struct ene_device *)VAR_14;
 FUNC_0(VAR_11);

 FUNC_12(&VAR_22->hw_lock, VAR_20);

 FUNC_3("ISR called");
 FUNC_7(VAR_22);
 VAR_18 = FUNC_4(VAR_22);

 if (!VAR_18)
  goto unlock;

 VAR_21 = VAR_9;

 if (VAR_18 & VAR_8) {
  FUNC_3("TX interrupt");
  if (!VAR_22->hw_learning_and_tx_capable) {
   FUNC_2("TX interrupt on unsupported device!");
   goto unlock;
  }
  FUNC_9(VAR_22);
 }

 if (!(VAR_18 & VAR_7))
  goto unlock;

 FUNC_3("RX interrupt");

 if (VAR_22->hw_learning_and_tx_capable)
  FUNC_8(VAR_22);



 if (!VAR_22->hw_extra_buffer)
  VAR_22->r_pointer = VAR_22->w_pointer == 0 ? VAR_0 : 0;

 while (1) {

  VAR_16 = FUNC_6(VAR_22);

  FUNC_3("next sample to read at: %04x", VAR_16);
  if (!VAR_16)
   break;

  VAR_15 = FUNC_5(VAR_22, VAR_16);

  if (VAR_22->rx_fan_input_inuse) {

   int VAR_23 = VAR_4 - VAR_1;


   VAR_15 |= FUNC_5(VAR_22, VAR_16 + VAR_23) << 8;
   VAR_19 = VAR_15 & VAR_6;


   VAR_15 &= VAR_5;
   VAR_17 = VAR_15 * VAR_2;

  } else {
   VAR_19 = !(VAR_15 & VAR_3);
   VAR_15 &= ~VAR_3;
   VAR_17 = VAR_15 * VAR_12;

   if (VAR_22->rx_period_adjust) {
    VAR_17 *= 100;
    VAR_17 /= (100 + VAR_22->rx_period_adjust);
   }
  }

  if (!VAR_22->hw_extra_buffer && !VAR_17) {
   VAR_22->r_pointer = VAR_22->w_pointer;
   continue;
  }

  FUNC_2("RX: %d (%s)", VAR_17, VAR_19 ? "pulse" : "space");

  VAR_11.duration = FUNC_1(VAR_17);
  VAR_11.pulse = VAR_19;
  FUNC_11(VAR_22->rdev, &VAR_11);
 }

 FUNC_10(VAR_22->rdev);
unlock:
 FUNC_13(&VAR_22->hw_lock, VAR_20);
 return VAR_21;
}
