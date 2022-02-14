
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {scalar_t__ has_remote; TYPE_1__* remote; } ;
struct TYPE_2__ {int mask_keydown; int mask_keyup; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct saa7134_dev *VAR_13)
{

 unsigned int VAR_14;


 VAR_14 =
  VAR_6 |
  VAR_5 |
  VAR_4 |
  VAR_3 |
  VAR_10 |
  VAR_2;

 if (VAR_13->has_remote == VAR_11 && VAR_13->remote) {
  if (VAR_13->remote->mask_keydown & 0x10000)
   VAR_14 |= VAR_7;
  else {
   if (VAR_13->remote->mask_keydown & 0x40000)
    VAR_14 |= VAR_9;
   if (VAR_13->remote->mask_keyup & 0x40000)
    VAR_14 |= VAR_8;
  }
 }

 if (VAR_13->has_remote == VAR_12) {
  FUNC_0("ir-kbd-i2c");
 }

 FUNC_1(VAR_0, 0);
 FUNC_1(VAR_1, VAR_14);

 return 0;
}
