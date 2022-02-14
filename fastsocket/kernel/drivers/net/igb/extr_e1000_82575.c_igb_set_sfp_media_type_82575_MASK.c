
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct e1000_sfp_flags {scalar_t__ e1000_base_t; scalar_t__ e100_base_fx; scalar_t__ e1000_base_sx; scalar_t__ e1000_base_lx; } ;
struct TYPE_4__ {void* media_type; } ;
struct e1000_dev_spec_82575 {int module_plugged; int sgmii_active; struct e1000_sfp_flags eth_flags; } ;
struct TYPE_3__ {struct e1000_dev_spec_82575 _82575; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_11)
{
 s32 VAR_12 = VAR_3;
 u32 VAR_13 = 0;
 struct e1000_dev_spec_82575 *VAR_14 = &VAR_11->dev_spec._82575;
 struct e1000_sfp_flags *VAR_15 = &VAR_14->eth_flags;
 u8 VAR_16 = 0;
 s32 VAR_17 = 3;


 VAR_13 = FUNC_4(VAR_0);
 VAR_13 &= ~VAR_1;
 FUNC_5(VAR_0, VAR_13 | VAR_2);

 FUNC_6();


 while (VAR_17) {
  VAR_12 = FUNC_2(VAR_11,
   FUNC_0(VAR_5),
   &VAR_16);
  if (VAR_12 == 0)
   break;
  FUNC_3(100);
  VAR_17--;
 }
 if (VAR_12 != 0)
  goto out;

 VAR_12 = FUNC_2(VAR_11,
   FUNC_0(VAR_4),
   (u8 *)VAR_15);
 if (VAR_12 != 0)
  goto out;


 if ((VAR_16 == VAR_7) ||
     (VAR_16 == VAR_6)) {
  VAR_14->module_plugged = 1;
  if (VAR_15->e1000_base_lx || VAR_15->e1000_base_sx) {
   VAR_11->phy.media_type = VAR_9;
  } else if (VAR_15->e100_base_fx) {
   VAR_14->sgmii_active = 1;
   VAR_11->phy.media_type = VAR_9;
  } else if (VAR_15->e1000_base_t) {
   VAR_14->sgmii_active = 1;
   VAR_11->phy.media_type = VAR_8;
  } else {
   VAR_11->phy.media_type = VAR_10;
   FUNC_1("PHY module has not been recognized\n");
   goto out;
  }
 } else {
  VAR_11->phy.media_type = VAR_10;
 }
 VAR_12 = 0;
out:

 FUNC_5(VAR_0, VAR_13);
 return VAR_12;
}
