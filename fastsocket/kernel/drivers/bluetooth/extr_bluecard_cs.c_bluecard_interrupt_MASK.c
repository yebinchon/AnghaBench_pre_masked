
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_8__ {int ctrl_reg; int lock; int tx_state; TYPE_2__* p_dev; int hw_state; int hdev; } ;
typedef TYPE_3__ bluecard_info_t ;
struct TYPE_6__ {unsigned int BasePort1; } ;
struct TYPE_7__ {TYPE_1__ io; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 unsigned char FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_10, void *VAR_11)
{
 bluecard_info_t *VAR_12 = VAR_11;
 unsigned int VAR_13;
 unsigned char VAR_14;

 FUNC_0(!VAR_12->hdev);

 if (!FUNC_8(VAR_0, &(VAR_12->hw_state)))
  return VAR_1;

 VAR_13 = VAR_12->p_dev->io.BasePort1;

 FUNC_6(&(VAR_12->lock));


 VAR_12->ctrl_reg &= ~VAR_6;
 FUNC_4(VAR_12->ctrl_reg, VAR_13 + VAR_5);

 VAR_14 = FUNC_3(VAR_13 + VAR_7);

 if ((VAR_14 != 0x00) && (VAR_14 != 0xff)) {

  if (VAR_14 & 0x04) {
   FUNC_1(VAR_12, 0x00);
   FUNC_4(0x04, VAR_13 + VAR_7);
   FUNC_4(VAR_3, VAR_13 + VAR_2);
  }

  if (VAR_14 & 0x08) {
   FUNC_1(VAR_12, 0x10);
   FUNC_4(0x08, VAR_13 + VAR_7);
   FUNC_4(VAR_4, VAR_13 + VAR_2);
  }

  if (VAR_14 & 0x01) {
   FUNC_5(VAR_8, &(VAR_12->tx_state));
   FUNC_4(0x01, VAR_13 + VAR_7);
   FUNC_2(VAR_12);
  }

  if (VAR_14 & 0x02) {
   FUNC_5(VAR_9, &(VAR_12->tx_state));
   FUNC_4(0x02, VAR_13 + VAR_7);
   FUNC_2(VAR_12);
  }

 }


 VAR_12->ctrl_reg |= VAR_6;
 FUNC_4(VAR_12->ctrl_reg, VAR_13 + VAR_5);

 FUNC_7(&(VAR_12->lock));

 return VAR_1;
}
