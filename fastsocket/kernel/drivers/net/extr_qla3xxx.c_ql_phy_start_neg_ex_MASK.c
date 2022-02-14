
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int portConfiguration; } ;
struct TYPE_4__ {int portConfiguration; } ;
struct TYPE_6__ {TYPE_2__ macCfg_port1; TYPE_1__ macCfg_port0; } ;
struct ql3_adapter {scalar_t__ phyType; size_t mac_index; TYPE_3__ nvram_data; } ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct ql3_adapter*,int ,int*,int ) ;
 int FUNC_1 (struct ql3_adapter*,int,int) ;
 int FUNC_2 (struct ql3_adapter*,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct ql3_adapter *VAR_24)
{
 u16 VAR_25;
 u16 VAR_26;

 if(VAR_24->phyType == VAR_2) {

  FUNC_1(VAR_24, 0x13, 0x0000);
 }

 if(VAR_24->mac_index == 0)
  VAR_26 = VAR_24->nvram_data.macCfg_port0.portConfiguration;
 else
  VAR_26 = VAR_24->nvram_data.macCfg_port1.portConfiguration;



 if(VAR_26 == 0)
  VAR_26 = VAR_20;


 FUNC_0(VAR_24, VAR_8, &VAR_25,
      VAR_1[VAR_24->mac_index]);
 VAR_25 &= ~VAR_7;

 if(VAR_26 & VAR_17) {
  if(VAR_26 & VAR_21)
   VAR_25 |= VAR_5;
  else
   VAR_25 |= VAR_6;
 }

 FUNC_2(VAR_24, VAR_8, VAR_25,
       VAR_1[VAR_24->mac_index]);


 FUNC_0(VAR_24, VAR_9, &VAR_25,
      VAR_1[VAR_24->mac_index]);
 VAR_25 &= ~VAR_14;

 if(VAR_26 & VAR_23)
  VAR_25 |= VAR_15 | VAR_16;

 if(VAR_26 & VAR_21) {
  if(VAR_26 & VAR_18)
   VAR_25 |= VAR_10;

  if(VAR_26 & VAR_19)
   VAR_25 |= VAR_12;
 }

 if(VAR_26 & VAR_22) {
  if(VAR_26 & VAR_18)
   VAR_25 |= VAR_11;

  if(VAR_26 & VAR_19)
   VAR_25 |= VAR_13;
 }

 if(VAR_26 &
    VAR_17) {
  VAR_25 |= 1;
 }

 FUNC_2(VAR_24, VAR_9, VAR_25,
       VAR_1[VAR_24->mac_index]);

 FUNC_0(VAR_24, VAR_0, &VAR_25, VAR_1[VAR_24->mac_index]);

 FUNC_2(VAR_24, VAR_0,
       VAR_25 | VAR_4 | VAR_3,
       VAR_1[VAR_24->mac_index]);
}
