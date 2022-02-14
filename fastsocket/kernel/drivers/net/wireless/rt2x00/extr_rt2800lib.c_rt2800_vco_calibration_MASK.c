
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int tx_chain_num; } ;
struct TYPE_3__ {int rf; } ;
struct rt2x00_dev {int rf_channel; TYPE_2__ default_ant; TYPE_1__ chip; } ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int,int *) ;
 int FUNC_4 (struct rt2x00_dev*,int,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int) ;

void FUNC_7(struct rt2x00_dev *VAR_10)
{
 u32 VAR_11;
 u8 VAR_12;
 FUNC_1(VAR_10, VAR_2, &VAR_11);
 VAR_11 &= VAR_6;
 FUNC_2(VAR_10, VAR_2, VAR_11);

 switch (VAR_10->chip.rf) {
 case 139:
 case 138:
 case 137:
 case 136:
 case 133:
 case 135:
  FUNC_3(VAR_10, 7, &VAR_12);
  FUNC_6(&VAR_12, VAR_1, 1);
  FUNC_4(VAR_10, 7, VAR_12);
  break;
 case 134:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_3(VAR_10, 3, &VAR_12);
  FUNC_6(&VAR_12, VAR_0, 1);
  FUNC_4(VAR_10, 3, VAR_12);
  break;
 default:
  return;
 }

 FUNC_0(1);

 FUNC_1(VAR_10, VAR_2, &VAR_11);
 if (VAR_10->rf_channel <= 14) {
  switch (VAR_10->default_ant.tx_chain_num) {
  case 3:
   FUNC_5(&VAR_11, VAR_9, 1);

  case 2:
   FUNC_5(&VAR_11, VAR_8, 1);

  case 1:
  default:
   FUNC_5(&VAR_11, VAR_7, 1);
   break;
  }
 } else {
  switch (VAR_10->default_ant.tx_chain_num) {
  case 3:
   FUNC_5(&VAR_11, VAR_5, 1);

  case 2:
   FUNC_5(&VAR_11, VAR_4, 1);

  case 1:
  default:
   FUNC_5(&VAR_11, VAR_3, 1);
   break;
  }
 }
 FUNC_2(VAR_10, VAR_2, VAR_11);

}
