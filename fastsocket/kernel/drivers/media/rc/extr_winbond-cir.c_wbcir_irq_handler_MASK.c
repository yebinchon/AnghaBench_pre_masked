
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int pulse; scalar_t__ duration; } ;
struct wbcir_data {int irdata_error; int irdata_active; int spinlock; int dev; int rxtrigger; scalar_t__ sbase; TYPE_1__ ev; } ;
struct pnp_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 struct wbcir_data* FUNC_7 (struct pnp_dev*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct wbcir_data*,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_11(int VAR_13, void *VAR_14)
{
 struct pnp_dev *VAR_15 = VAR_14;
 struct wbcir_data *VAR_16 = FUNC_7(VAR_15);
 unsigned long VAR_17;
 u8 VAR_18[8];
 u8 VAR_19 = 1;
 u8 VAR_20;
 int VAR_21;

 FUNC_8(&VAR_16->spinlock, VAR_17);

 FUNC_10(VAR_16, VAR_4);

 VAR_20 = FUNC_0(VAR_16->sbase + VAR_8);

 if (!(VAR_20 & (VAR_6 | VAR_5))) {
  FUNC_9(&VAR_16->spinlock, VAR_17);
  return VAR_1;
 }


 if (VAR_20 & VAR_5) {
  VAR_16->irdata_error = 1;
  FUNC_3(VAR_16->dev);
 }

 if (!(VAR_20 & VAR_6))
  goto out;

 if (!VAR_16->irdata_active) {
  VAR_16->irdata_active = 1;
  FUNC_5(VAR_16->rxtrigger, VAR_2);
 }


 FUNC_1(VAR_16->sbase + VAR_10, &VAR_18[0], 8);

 for (VAR_21 = 0; VAR_21 < 8; VAR_21++) {
  u8 VAR_22;
  u32 VAR_23;

  if (VAR_18[VAR_21] != 0xFF && VAR_18[VAR_21] != 0x00)
   VAR_19 = 0;

  if (VAR_16->irdata_error)
   continue;

  VAR_22 = VAR_18[VAR_21] & 0x80 ? 0 : 1;
  VAR_23 = (VAR_18[VAR_21] & 0x7F) * 10000;

  if (VAR_16->ev.pulse != VAR_22) {
   if (VAR_16->ev.duration != 0) {
    FUNC_4(VAR_16->dev, &VAR_16->ev);
    VAR_16->ev.duration = 0;
   }

   VAR_16->ev.pulse = VAR_22;
  }

  VAR_16->ev.duration += VAR_23;
 }

 if (VAR_19) {
  if (VAR_16->ev.duration != 0 && !VAR_16->irdata_error) {
   FUNC_4(VAR_16->dev, &VAR_16->ev);
   VAR_16->ev.duration = 0;
  }


  FUNC_6(VAR_12, VAR_16->sbase + VAR_7);


  while (FUNC_0(VAR_16->sbase + VAR_9) & VAR_11)
   FUNC_0(VAR_16->sbase + VAR_10);

  FUNC_3(VAR_16->dev);
  VAR_16->irdata_error = 0;
  VAR_16->irdata_active = 0;
  FUNC_5(VAR_16->rxtrigger, VAR_3);
 }

 FUNC_2(VAR_16->dev);

out:
 FUNC_9(&VAR_16->spinlock, VAR_17);
 return VAR_0;
}
