
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int device; } ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct e1000_adapter {int flags; int max_hw_frame_size; struct e1000_hw hw; struct pci_dev* pdev; } ;
typedef scalar_t__ s32 ;


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


 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_adapter *VAR_12)
{
 struct e1000_hw *VAR_13 = &VAR_12->hw;
 static int VAR_14;
 struct pci_dev *VAR_15 = VAR_12->pdev;
 int VAR_16 = FUNC_3(VAR_11) & VAR_6;
 s32 VAR_17;

 VAR_17 = FUNC_0(VAR_13);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_1(VAR_13);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_2(VAR_13);
 if (VAR_17)
  return VAR_17;


 switch (VAR_15->device) {
 case 133:
 case 131:
 case 132:
 case 130:
  VAR_12->flags |= VAR_9;

  if (VAR_14 == 0)
   VAR_12->flags |= VAR_10;

  VAR_14++;
  if (VAR_14 == 4)
   VAR_14 = 0;
  break;
 default:
  break;
 }

 switch (VAR_12->hw.mac.type) {
 case 129:

  if (((VAR_15->device == VAR_2) ||
       (VAR_15->device == VAR_3) ||
       (VAR_15->device == VAR_1)) &&
      (VAR_16))
   VAR_12->flags &= ~VAR_8;

  if (VAR_12->flags & VAR_9 &&
      (!(VAR_12->flags & VAR_10)))
   VAR_12->flags &= ~VAR_8;

  if (VAR_15->device == VAR_4)
   VAR_12->flags &= ~VAR_8;
  break;
 case 128:
  if (VAR_15->device == VAR_5) {
   VAR_12->flags |= VAR_7;
   VAR_12->max_hw_frame_size = VAR_0;
  }
  break;
 default:
  break;
 }

 return 0;
}
