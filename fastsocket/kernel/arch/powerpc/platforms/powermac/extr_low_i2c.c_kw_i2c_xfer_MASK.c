
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct pmac_i2c_host_kw {int speed; scalar_t__ irq; int* data; int len; scalar_t__ state; int result; int rw; int lock; int complete; TYPE_1__ timeout_timer; int polled; } ;
struct pmac_i2c_bus {int mode; int channel; int polled; struct pmac_i2c_host_kw* hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct pmac_i2c_host_kw*,int) ;
 int FUNC_3 (struct pmac_i2c_host_kw*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;




 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct pmac_i2c_bus *VAR_19, u8 VAR_20, int VAR_21,
         u32 VAR_22, u8 *VAR_23, int VAR_24)
{
 struct pmac_i2c_host_kw *VAR_25 = VAR_19->hostdata;
 u8 VAR_26 = VAR_25->speed;
 int VAR_27 = VAR_25->irq != VAR_8 && !VAR_19->polled;


 switch(VAR_19->mode) {
 case 130:
  return -VAR_0;
 case 129:
  VAR_26 |= VAR_5;
  if (VAR_21 != 0)
   return -VAR_0;
  break;
 case 128:
  VAR_26 |= VAR_6;
  if (VAR_21 != 1)
   return -VAR_0;
  break;
 case 131:
  VAR_26 |= VAR_3;
  if (VAR_21 != 1)
   return -VAR_0;
  break;
 }


 FUNC_5(VAR_13, FUNC_4(VAR_13));
 FUNC_5(VAR_14, VAR_26 | (VAR_19->channel << 4));
 FUNC_5(VAR_15, 0);




 FUNC_5(VAR_10, VAR_20 & 0xff);


 if ((VAR_26 & VAR_4) == VAR_6
     || (VAR_26 & VAR_4) == VAR_3)
  FUNC_5(VAR_16, VAR_22);


 VAR_25->data = VAR_23;
 VAR_25->len = VAR_24;
 VAR_25->state = VAR_17;
 VAR_25->result = 0;
 VAR_25->rw = (VAR_20 & 1);
 VAR_25->polled = VAR_19->polled;




 if (VAR_27) {

  FUNC_0(VAR_25->complete);

  FUNC_5(VAR_13, FUNC_4(VAR_13));

  VAR_25->timeout_timer.expires = VAR_9 + VAR_7;
  FUNC_1(&VAR_25->timeout_timer);

  FUNC_5(VAR_12, VAR_2);
 }


 FUNC_5(VAR_11, VAR_1);


 if (VAR_27)
  FUNC_8(&VAR_25->complete);
 else {
  while(VAR_25->state != VAR_18) {
   unsigned long VAR_28;

   u8 VAR_29 = FUNC_3(VAR_25);
   FUNC_6(&VAR_25->lock, VAR_28);
   FUNC_2(VAR_25, VAR_29);
   FUNC_7(&VAR_25->lock, VAR_28);
  }
 }


 FUNC_5(VAR_12, 0);

 return VAR_25->result;
}
