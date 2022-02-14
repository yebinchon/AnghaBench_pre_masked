
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int type; int serdes_link_state; } ;
struct TYPE_5__ {scalar_t__ media_type; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_2__ phy; TYPE_1__ nvm; } ;
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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (struct e1000_hw*) ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static s32 FUNC_13(struct e1000_hw *VAR_15)
{
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 s32 VAR_20;




 VAR_20 = FUNC_4(VAR_15);
 if (VAR_20)
  FUNC_8("PCI-E Master disable polling has failed.\n");

 FUNC_8("Masking off all interrupts\n");
 FUNC_10(VAR_9, 0xffffffff);

 FUNC_10(VAR_10, 0);
 VAR_19 = FUNC_9(VAR_11);
 VAR_19 &= ~VAR_6;
 FUNC_10(VAR_11, VAR_19);
 FUNC_7();

 FUNC_12(10000, 20000);




 switch (VAR_15->mac.type) {
 case 130:
  VAR_20 = FUNC_1(VAR_15);
  break;
 case 129:
 case 128:
  VAR_20 = FUNC_2(VAR_15);
  break;
 default:
  break;
 }

 VAR_16 = FUNC_9(VAR_0);

 FUNC_8("Issuing a global reset to MAC\n");
 FUNC_10(VAR_0, VAR_16 | VAR_3);


 switch (VAR_15->mac.type) {
 case 129:
 case 128:

  if (!VAR_20)
   FUNC_3(VAR_15);
  break;
 default:
  break;
 }

 if (VAR_15->nvm.type == VAR_13) {
  FUNC_12(10, 20);
  VAR_17 = FUNC_9(VAR_1);
  VAR_17 |= VAR_2;
  FUNC_10(VAR_1, VAR_17);
  FUNC_7();
 }

 VAR_20 = FUNC_5(VAR_15);
 if (VAR_20)

  return VAR_20;






 switch (VAR_15->mac.type) {
 case 132:
 case 131:



  VAR_18 = FUNC_9(VAR_7);
  VAR_18 &= ~(VAR_5 | VAR_4);
  FUNC_10(VAR_7, VAR_18);
  break;
 case 130:
 case 129:
 case 128:
  FUNC_11(25);
  break;
 default:
  break;
 }


 FUNC_10(VAR_9, 0xffffffff);
 FUNC_9(VAR_8);

 if (VAR_15->mac.type == 132) {

  VAR_20 = FUNC_0(VAR_15);
  if (VAR_20)
   return VAR_20;

  FUNC_6(VAR_15, 1);
 }


 if (VAR_15->phy.media_type == VAR_12)
  VAR_15->mac.serdes_link_state = VAR_14;

 return 0;
}
