
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct e1000_hw {scalar_t__ mac_type; scalar_t__ media_type; } ;
struct e1000_adapter {int wol; scalar_t__ en_mng_pt; int flags; struct e1000_hw hw; } ;


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
 int FUNC_0 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct e1000_adapter*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 struct e1000_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct pci_dev*) ;
 struct net_device* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct pci_dev *VAR_19, bool *VAR_20)
{
 struct net_device *VAR_21 = FUNC_12(VAR_19);
 struct e1000_adapter *VAR_22 = FUNC_8(VAR_21);
 struct e1000_hw *VAR_23 = &VAR_22->hw;
 u32 VAR_24, VAR_25, VAR_26, VAR_27;
 u32 VAR_28 = VAR_22->wol;




 FUNC_9(VAR_21);

 if (FUNC_10(VAR_21)) {
  FUNC_0(FUNC_14(VAR_15, &VAR_22->flags));
  FUNC_1(VAR_22);
 }







 VAR_27 = FUNC_6(VAR_12);
 if (VAR_27 & VAR_7)
  VAR_28 &= ~VAR_9;

 if (VAR_28) {
  FUNC_5(VAR_22);
  FUNC_4(VAR_21);

  VAR_26 = FUNC_6(VAR_11);


  if (VAR_28 & VAR_10)
   VAR_26 |= VAR_6;


  FUNC_7(VAR_11, VAR_26 | VAR_5);

  if (VAR_23->mac_type >= VAR_16) {
   VAR_24 = FUNC_6(VAR_0);




   VAR_24 |= 0x00100000 |
    0x00200000;
   FUNC_7(VAR_0, VAR_24);
  }

  if (VAR_23->media_type == VAR_17 ||
      VAR_23->media_type == VAR_18) {

   VAR_25 = FUNC_6(VAR_1);
   VAR_25 |= VAR_4;
   FUNC_7(VAR_1, VAR_25);
  }

  FUNC_7(VAR_13, VAR_8);
  FUNC_7(VAR_14, VAR_28);
 } else {
  FUNC_7(VAR_13, 0);
  FUNC_7(VAR_14, 0);
 }

 FUNC_3(VAR_22);

 *VAR_20 = !!VAR_28;


 if (VAR_22->en_mng_pt)
  *VAR_20 = 1;

 if (FUNC_10(VAR_21))
  FUNC_2(VAR_22);

 FUNC_11(VAR_19);

 return 0;
}
