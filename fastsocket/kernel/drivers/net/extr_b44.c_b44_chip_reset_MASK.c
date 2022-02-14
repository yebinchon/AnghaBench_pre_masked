
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssb_device {TYPE_1__* bus; } ;
struct b44 {int flags; scalar_t__ rx_cons; scalar_t__ rx_prod; scalar_t__ tx_cons; scalar_t__ tx_prod; struct ssb_device* sdev; } ;
struct TYPE_2__ {int bustype; int pcicore; } ;


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
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;




 int FUNC_1 (int) ;
 int FUNC_2 (struct b44*) ;
 int FUNC_3 (struct b44*,int ,int,int,int) ;
 int FUNC_4 (struct b44*,int ) ;
 int FUNC_5 (struct b44*,int ,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct ssb_device*,int ) ;
 int FUNC_8 (struct ssb_device*) ;
 int FUNC_9 (int *,struct ssb_device*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct b44 *VAR_18, int VAR_19)
{
 struct ssb_device *VAR_20 = VAR_18->sdev;
 bool VAR_21;

 VAR_21 = FUNC_8(VAR_18->sdev);

 FUNC_7(VAR_18->sdev, 0);
 FUNC_9(&VAR_20->bus->pcicore, VAR_20);

 if (VAR_21) {
  FUNC_5(VAR_18, VAR_9, 0);
  FUNC_5(VAR_18, VAR_5, VAR_14);
  FUNC_3(VAR_18, VAR_5, VAR_14, 200, 1);
  FUNC_5(VAR_18, VAR_4, 0);
  VAR_18->tx_prod = VAR_18->tx_cons = 0;
  if (FUNC_4(VAR_18, VAR_3) & VAR_12) {
   FUNC_3(VAR_18, VAR_3, VAR_13,
         100, 0);
  }
  FUNC_5(VAR_18, VAR_2, 0);
  VAR_18->rx_prod = VAR_18->rx_cons = 0;
 }

 FUNC_2(VAR_18);





 if (VAR_19 == VAR_0)
  return;

 switch (VAR_20->bus->bustype) {
 case 128:
  FUNC_5(VAR_18, VAR_8, (VAR_17 |
       (FUNC_0(FUNC_6(VAR_20->bus),
     VAR_7)
       & VAR_16)));
  break;
 case 131:
  FUNC_5(VAR_18, VAR_8, (VAR_17 |
       (0x0d & VAR_16)));
  break;
 case 130:
 case 129:
  FUNC_1(1);
  break;
 }

 FUNC_4(VAR_18, VAR_8);

 if (!(FUNC_4(VAR_18, VAR_1) & VAR_11)) {
  FUNC_5(VAR_18, VAR_5, VAR_15);
  FUNC_4(VAR_18, VAR_5);
  VAR_18->flags &= ~VAR_6;
 } else {
  u32 VAR_22 = FUNC_4(VAR_18, VAR_1);

  if (VAR_22 & VAR_10) {
   FUNC_5(VAR_18, VAR_1, (VAR_22 & ~VAR_10));
   FUNC_4(VAR_18, VAR_1);
   FUNC_10(100);
  }
  VAR_18->flags |= VAR_6;
 }
}
