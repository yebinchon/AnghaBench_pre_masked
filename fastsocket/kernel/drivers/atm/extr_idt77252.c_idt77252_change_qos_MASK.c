
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_map {int lacr; int index; int flags; } ;
struct idt77252_dev {int mutex; } ;
struct atm_vcc {int flags; int qos; struct vc_map* dev_data; struct atm_dev* dev; } ;
struct TYPE_4__ {scalar_t__ traffic_class; } ;
struct TYPE_3__ {scalar_t__ traffic_class; } ;
struct atm_qos {TYPE_2__ rxtp; TYPE_1__ txtp; } ;
struct atm_dev {struct idt77252_dev* dev_data; } ;




 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct idt77252_dev*,struct vc_map*,struct atm_vcc*,struct atm_qos*) ;
 int FUNC_1 (struct idt77252_dev*,struct vc_map*,struct atm_vcc*,struct atm_qos*) ;
 int FUNC_2 (struct idt77252_dev*,struct vc_map*,struct atm_vcc*,struct atm_qos*) ;
 int FUNC_3 (struct idt77252_dev*,struct vc_map*,struct atm_vcc*,struct atm_qos*) ;
 int FUNC_4 (int *,struct atm_qos*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int
FUNC_10(struct atm_vcc *VAR_8, struct atm_qos *VAR_9, int VAR_10)
{
 struct atm_dev *VAR_11 = VAR_8->dev;
 struct idt77252_dev *VAR_12 = VAR_11->dev_data;
 struct vc_map *VAR_13 = VAR_8->dev_data;
 int VAR_14 = 0;

 FUNC_5(&VAR_12->mutex);

 if (VAR_9->txtp.traffic_class != VAR_0) {
      if (!FUNC_8(VAR_7, &VAR_13->flags)) {
   VAR_14 = FUNC_2(VAR_12, VAR_13, VAR_8, VAR_9);
   if (VAR_14)
    goto out;
  } else {
   switch (VAR_9->txtp.traffic_class) {
   case 130:
    VAR_14 = FUNC_0(VAR_12, VAR_13, VAR_8, VAR_9);
    if (VAR_14)
     goto out;
    break;

   case 129:
    VAR_14 = FUNC_3(VAR_12, VAR_13, VAR_8, VAR_9);
    if (VAR_14)
     goto out;

    if (!FUNC_8(VAR_5, &VAR_13->flags)) {
     FUNC_9(VAR_4 | (VAR_13->lacr << 16) |
            VAR_13->index, VAR_3);
    }
    break;

   case 128:
   case 131:
    VAR_14 = -VAR_2;
    goto out;
   }
  }
 }

 if ((VAR_9->rxtp.traffic_class != VAR_0) &&
     !FUNC_8(VAR_6, &VAR_13->flags)) {
  VAR_14 = FUNC_1(VAR_12, VAR_13, VAR_8, VAR_9);
  if (VAR_14)
   goto out;
 }

 FUNC_4(&VAR_8->qos, VAR_9, sizeof(struct atm_qos));

 FUNC_7(VAR_1, &VAR_8->flags);

out:
 FUNC_6(&VAR_12->mutex);
 return VAR_14;
}
