
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int rx; } ;
struct rt2x00_dev {int curr_band; int cap_flags; TYPE_1__ default_ant; } ;
struct antenna_setup {int tx_chain_num; int rx_chain_num; } ;


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
 int VAR_12 ;
 int FUNC_0 (struct rt2x00_dev*,int,int *) ;
 int FUNC_1 (struct rt2x00_dev*,int,int ) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void FUNC_9(struct rt2x00_dev *VAR_13, struct antenna_setup *VAR_14)
{
 u8 VAR_15;
 u8 VAR_16;
 u16 VAR_17;

 FUNC_0(VAR_13, 1, &VAR_15);
 FUNC_0(VAR_13, 3, &VAR_16);

 if (FUNC_6(VAR_13, VAR_12) &&
     FUNC_8(VAR_4, &VAR_13->cap_flags))
  FUNC_2(VAR_13);




 switch (VAR_14->tx_chain_num) {
 case 1:
  FUNC_7(&VAR_15, VAR_1, 0);
  break;
 case 2:
  if (FUNC_6(VAR_13, VAR_12) &&
      FUNC_8(VAR_4, &VAR_13->cap_flags))
   FUNC_7(&VAR_15, VAR_1, 1);
  else
   FUNC_7(&VAR_15, VAR_1, 2);
  break;
 case 3:
  FUNC_7(&VAR_15, VAR_1, 0);
  break;
 }




 switch (VAR_14->rx_chain_num) {
 case 1:
  if (FUNC_6(VAR_13, VAR_8) ||
      FUNC_6(VAR_13, VAR_9) ||
      FUNC_6(VAR_13, VAR_10) ||
      FUNC_6(VAR_13, VAR_11)) {
   FUNC_4(VAR_13,
        VAR_5, &VAR_17);
   if (FUNC_5(VAR_17,
      VAR_6))
    FUNC_3(VAR_13,
      VAR_13->default_ant.rx);
  }
  FUNC_7(&VAR_16, VAR_3, 0);
  break;
 case 2:
  if (FUNC_6(VAR_13, VAR_12) &&
      FUNC_8(VAR_4, &VAR_13->cap_flags)) {
   FUNC_7(&VAR_16, VAR_2, 1);
   FUNC_7(&VAR_16, VAR_3,
    VAR_13->curr_band == VAR_7);
   FUNC_3(VAR_13, VAR_0);
  } else {
   FUNC_7(&VAR_16, VAR_3, 1);
  }
  break;
 case 3:
  FUNC_7(&VAR_16, VAR_3, 2);
  break;
 }

 FUNC_1(VAR_13, 3, VAR_16);
 FUNC_1(VAR_13, 1, VAR_15);
}
