
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int devid; int macVersion; int macRev; } ;
struct ath_hw {int (* get_mac_revision ) () ;int is_pciexpress; TYPE_1__ hw_version; } ;






 int VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
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
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ath_hw*,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_13)
{
 u32 VAR_14;

 switch (VAR_13->hw_version.devid) {
 case 131:
  VAR_13->hw_version.macVersion = VAR_9;
  break;
 case 130:
  VAR_13->hw_version.macVersion = VAR_10;
  if (VAR_13->get_mac_revision) {
   VAR_13->hw_version.macRev = VAR_13->get_mac_revision();
  } else {
   VAR_14 = FUNC_4(VAR_13, VAR_0);
   VAR_13->hw_version.macRev = FUNC_3(VAR_14, VAR_3);
  }
  return;
 case 129:
  VAR_13->hw_version.macVersion = VAR_11;
  VAR_14 = FUNC_4(VAR_13, VAR_0);
  VAR_13->hw_version.macRev = FUNC_3(VAR_14, VAR_3);
  return;
 case 128:
  VAR_13->hw_version.macVersion = VAR_12;
  return;
 }

 VAR_14 = FUNC_4(VAR_13, VAR_0) & VAR_1;

 if (VAR_14 == 0xFF) {
  VAR_14 = FUNC_4(VAR_13, VAR_0);
  VAR_13->hw_version.macVersion =
   (VAR_14 & VAR_7) >> VAR_5;
  VAR_13->hw_version.macRev = FUNC_3(VAR_14, VAR_3);

  if (FUNC_1(VAR_13) || FUNC_2(VAR_13))
   VAR_13->is_pciexpress = 1;
  else
   VAR_13->is_pciexpress = (VAR_14 &
          VAR_4) ? 0 : 1;
 } else {
  if (!FUNC_0(VAR_13))
   VAR_13->hw_version.macVersion = FUNC_3(VAR_14, VAR_6);

  VAR_13->hw_version.macRev = VAR_14 & VAR_2;

  if (VAR_13->hw_version.macVersion == VAR_8)
   VAR_13->is_pciexpress = 1;
 }
}
