
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d11rxhdr {int PhyRxStatus_1; int PhyRxStatus_0; int PhyRxStatus_2; } ;
struct brcms_phy {TYPE_1__* sh; } ;
typedef int s16 ;
struct TYPE_2__ {scalar_t__ rssi_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_0(struct brcms_phy *VAR_5, struct d11rxhdr *VAR_6)
{
 s16 VAR_7, VAR_8, VAR_9;
 s16 VAR_10, VAR_11;

 VAR_7 = 0;
 VAR_8 = VAR_6->PhyRxStatus_1 & VAR_0;
 VAR_9 = (VAR_6->PhyRxStatus_1 & VAR_1) >> 8;

 if (VAR_8 > 127)
  VAR_8 -= 256;
 if (VAR_9 > 127)
  VAR_9 -= 256;

 VAR_10 = VAR_6->PhyRxStatus_0 & 0x00ff;
 VAR_11 = VAR_6->PhyRxStatus_2 & 0x00ff;
 if (VAR_11 > 127)
  VAR_11 -= 256;

 if (((VAR_8 == 16) || (VAR_8 == 32))) {
  VAR_8 = VAR_9;
  VAR_9 = VAR_11;
 }

 if (VAR_5->sh->rssi_mode == VAR_3)
  VAR_7 = (VAR_8 > VAR_9) ? VAR_8 : VAR_9;
 else if (VAR_5->sh->rssi_mode == VAR_4)
  VAR_7 = (VAR_8 < VAR_9) ? VAR_8 : VAR_9;
 else if (VAR_5->sh->rssi_mode == VAR_2)
  VAR_7 = (VAR_8 + VAR_9) >> 1;

 return VAR_7;
}
