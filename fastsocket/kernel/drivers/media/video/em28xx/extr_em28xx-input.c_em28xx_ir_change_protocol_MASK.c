
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct rc_dev {struct em28xx_IR* priv; } ;
struct em28xx_IR {int full_code; int get_key; struct em28xx* dev; } ;
struct TYPE_2__ {int xclk; } ;
struct em28xx {int chip_id; TYPE_1__ board; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct em28xx*,int ,int ,int ) ;
 int FUNC_1 (struct em28xx*,int ,int *,int) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct rc_dev *VAR_11, u64 VAR_12)
{
 int VAR_13 = 0;
 struct em28xx_IR *VAR_14 = VAR_11->priv;
 struct em28xx *VAR_15 = VAR_14->dev;
 u8 VAR_16 = VAR_2;



 if (VAR_12 == VAR_7) {
  VAR_15->board.xclk |= VAR_5;
  VAR_14->full_code = 1;
 } else if (VAR_12 == VAR_6) {
  VAR_15->board.xclk &= ~VAR_5;
  VAR_16 = VAR_1;
  VAR_14->full_code = 1;
 } else if (VAR_12 != VAR_8)
  VAR_13 = -VAR_0;

 FUNC_0(VAR_15, VAR_4, VAR_15->board.xclk,
         VAR_5);


 switch (VAR_15->chip_id) {
 case 130:
 case 128:
  VAR_14->get_key = VAR_9;
  break;
 case 129:
  VAR_14->get_key = VAR_10;
  FUNC_1(VAR_15, VAR_3, &VAR_16, 1);
  break;
 default:
  FUNC_2("Unrecognized em28xx chip id: IR not supported\n");
  VAR_13 = -VAR_0;
 }

 return VAR_13;
}
