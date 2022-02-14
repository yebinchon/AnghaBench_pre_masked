
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_11__ {scalar_t__ antswctrllut; } ;
struct TYPE_10__ {scalar_t__ antswctrllut; } ;
struct TYPE_9__ {int phy_rev; } ;
struct brcms_phy {TYPE_5__* d11core; TYPE_3__ srom_fem5g; TYPE_2__ srom_fem2g; TYPE_1__ pubpi; } ;
struct TYPE_13__ {TYPE_4__* bus; } ;
struct TYPE_12__ {int drv_cc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 int FUNC_6 (TYPE_5__*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_8 (struct brcms_phy*,int,int) ;

void FUNC_9(struct brcms_phy_pub *VAR_5, bool VAR_6)
{
 struct brcms_phy *VAR_7 = (struct brcms_phy *) VAR_5;
 u16 VAR_8 = 0xfc00;
 u32 VAR_9 = 0;

 if (FUNC_1(VAR_7->pubpi.phy_rev, 7))
  return;

 if (FUNC_1(VAR_7->pubpi.phy_rev, 3)) {
  u16 VAR_10 = 0x211, VAR_11 = 0x222, VAR_12 = 0x144, VAR_13 = 0x188;

  if (!VAR_6)
   return;

  if (VAR_7->srom_fem2g.antswctrllut == 0) {
   FUNC_7(VAR_7, VAR_1,
       1, 0x02, 16, &VAR_10);
   FUNC_7(VAR_7, VAR_1,
       1, 0x03, 16, &VAR_11);
   FUNC_7(VAR_7, VAR_1,
       1, 0x08, 16, &VAR_12);
   FUNC_7(VAR_7, VAR_1,
       1, 0x0C, 16, &VAR_13);
  }

  if (VAR_7->srom_fem5g.antswctrllut == 0) {
   FUNC_7(VAR_7, VAR_1,
       1, 0x12, 16, &VAR_10);
   FUNC_7(VAR_7, VAR_1,
       1, 0x13, 16, &VAR_11);
   FUNC_7(VAR_7, VAR_1,
       1, 0x18, 16, &VAR_12);
   FUNC_7(VAR_7, VAR_1,
       1, 0x1C, 16, &VAR_13);
  }
 } else {

  FUNC_8(VAR_7, 0xc8, 0x0);
  FUNC_8(VAR_7, 0xc9, 0x0);

  FUNC_2(&VAR_7->d11core->bus->drv_cc, VAR_8, VAR_8);

  VAR_9 = FUNC_4(VAR_7->d11core, FUNC_0(VAR_2));
  VAR_9 &= ~VAR_0;
  FUNC_6(VAR_7->d11core, FUNC_0(VAR_2), VAR_9);

  FUNC_5(VAR_7->d11core, FUNC_0(VAR_3), VAR_8);

  FUNC_3(VAR_7->d11core, FUNC_0(VAR_4), ~VAR_8);

  if (VAR_6) {
   FUNC_8(VAR_7, 0xf8, 0x02d8);
   FUNC_8(VAR_7, 0xf9, 0x0301);
   FUNC_8(VAR_7, 0xfa, 0x02d8);
   FUNC_8(VAR_7, 0xfb, 0x0301);
  }
 }
}
