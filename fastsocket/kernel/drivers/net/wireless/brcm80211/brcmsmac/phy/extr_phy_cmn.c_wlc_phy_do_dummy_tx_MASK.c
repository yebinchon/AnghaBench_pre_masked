
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct brcms_phy {TYPE_1__* sh; struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;
struct TYPE_2__ {int corerev; int physhim; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;
 scalar_t__ FUNC_3 (struct brcms_phy*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct bcma_device*,int ) ;
 int FUNC_5 (struct bcma_device*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int) ;
 int VAR_12 ;
 int FUNC_7 (int ,int ,int,int *) ;
 int FUNC_8 (struct brcms_phy*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void FUNC_9(struct brcms_phy *VAR_16, bool VAR_17, bool VAR_18)
{

 struct bcma_device *VAR_19 = VAR_16->d11core;
 int VAR_20, VAR_21;
 u8 VAR_22[20] = {
  0xcc, 0x01, 0x02, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00
 };
 u8 VAR_23[20] = {
  0x6e, 0x84, 0x0b, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00
 };
 u32 *VAR_24;

 VAR_24 = (u32 *) (VAR_17 ? VAR_22 : VAR_23);
 FUNC_7(VAR_16->sh->physhim, 0, 20,
          VAR_24);

 FUNC_5(VAR_19, FUNC_0(VAR_13), 0);

 if (FUNC_1(VAR_16->sh->corerev, 11))
  FUNC_5(VAR_19, FUNC_0(VAR_12), 0x100);
 else
  FUNC_5(VAR_19, FUNC_0(VAR_12), 0);

 FUNC_5(VAR_19, FUNC_0(VAR_7),
       (VAR_17 ? 1 : 0) | VAR_3);
 if (FUNC_3(VAR_16) || FUNC_2(VAR_16))
  FUNC_5(VAR_19, FUNC_0(VAR_8), 0x1A02);

 FUNC_5(VAR_19, FUNC_0(VAR_10), 0);
 FUNC_5(VAR_19, FUNC_0(VAR_11), 0);

 FUNC_5(VAR_19, FUNC_0(VAR_14), 0);
 FUNC_5(VAR_19, FUNC_0(VAR_15), 20);

 FUNC_5(VAR_19, FUNC_0(VAR_13),
       ((8 << 8) | (1 << 5) | (1 << 2) | 2));

 FUNC_5(VAR_19, FUNC_0(VAR_6), 0);

 if (!VAR_18) {
  if (FUNC_3(VAR_16))
   FUNC_8(VAR_16, VAR_1);
 }

 if (FUNC_3(VAR_16) || FUNC_2(VAR_16))
  FUNC_5(VAR_19, FUNC_0(VAR_5), 0xD0);
 else
  FUNC_5(VAR_19, FUNC_0(VAR_5), ((1 << 5) | (1 << 4)));

 (void)FUNC_4(VAR_19, FUNC_0(VAR_5));

 VAR_20 = 0;
 VAR_21 = VAR_17 ? 30 : 250;
 while ((VAR_20++ < VAR_21)
        && (FUNC_4(VAR_19, FUNC_0(VAR_9)) & (1 << 7)))
  FUNC_6(10);

 VAR_20 = 0;

 while ((VAR_20++ < 10) &&
        ((FUNC_4(VAR_19, FUNC_0(VAR_9)) & (1 << 10)) == 0))
  FUNC_6(10);

 VAR_20 = 0;

 while ((VAR_20++ < 10) &&
        ((FUNC_4(VAR_19, FUNC_0(VAR_4)) & (1 << 8))))
  FUNC_6(10);

 if (!VAR_18) {
  if (FUNC_3(VAR_16))
   FUNC_8(VAR_16, VAR_2);
 }
}
