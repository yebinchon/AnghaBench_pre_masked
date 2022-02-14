
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int eee_disable; } ;
struct TYPE_7__ {TYPE_2__ _82575; } ;
struct TYPE_5__ {scalar_t__ media_type; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ dev_spec; TYPE_1__ phy; TYPE_4__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

s32 FUNC_3(struct e1000_hw *VAR_11)
{
 s32 VAR_12 = 0;
 u32 VAR_13, VAR_14;

 if ((VAR_11->mac.type < VAR_9) ||
     (VAR_11->phy.media_type != VAR_10))
  goto out;
 VAR_13 = FUNC_1(VAR_6);
 VAR_14 = FUNC_1(VAR_0);


 if (!(VAR_11->dev_spec._82575.eee_disable)) {
  u32 VAR_15 = FUNC_1(VAR_4);

  VAR_13 |= (VAR_8 | VAR_7);
  VAR_14 |= (VAR_3 | VAR_2 |
   VAR_1);


  if (VAR_15 & VAR_5)
   FUNC_0("LPI Clock Stop Bit should not be set!\n");

 } else {
  VAR_13 &= ~(VAR_8 |
   VAR_7);
  VAR_14 &= ~(VAR_3 |
   VAR_2 |
   VAR_1);
 }
 FUNC_2(VAR_6, VAR_13);
 FUNC_2(VAR_0, VAR_14);
 FUNC_1(VAR_6);
 FUNC_1(VAR_0);
out:

 return VAR_12;
}
