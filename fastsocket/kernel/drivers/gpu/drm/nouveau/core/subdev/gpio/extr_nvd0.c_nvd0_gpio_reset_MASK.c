
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvd0_gpio_priv {int dummy; } ;
struct nouveau_gpio {int (* set ) (struct nouveau_gpio*,int ,scalar_t__,scalar_t__,scalar_t__) ;} ;
struct nouveau_bios {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nouveau_bios*,int ,int,scalar_t__*,scalar_t__*) ;
 struct nouveau_bios* FUNC_1 (struct nouveau_gpio*) ;
 int FUNC_2 (struct nvd0_gpio_priv*,int,int,scalar_t__) ;
 int FUNC_3 (struct nouveau_bios*,int ) ;
 int FUNC_4 (struct nouveau_gpio*,int ,scalar_t__,scalar_t__,scalar_t__) ;

void
FUNC_5(struct nouveau_gpio *VAR_1, u8 VAR_2)
{
 struct nouveau_bios *VAR_3 = FUNC_1(VAR_1);
 struct nvd0_gpio_priv *VAR_4 = (void *)VAR_1;
 u8 VAR_5, VAR_6;
 u16 VAR_7;
 int VAR_8 = -1;

 while ((VAR_7 = FUNC_0(VAR_3, 0, ++VAR_8, &VAR_5, &VAR_6))) {
  u32 VAR_9 = FUNC_3(VAR_3, VAR_7);
  u8 VAR_10 = (VAR_9 & 0x0000003f);
  u8 VAR_11 = !!(VAR_9 & 0x00000080);
  u8 VAR_12 = (VAR_9 & 0x0000ff00) >> 8;
  u8 VAR_13 = (VAR_9 & 0x00ff0000) >> 16;
  u8 VAR_14 = (VAR_9 & 0x1f000000) >> 24;

  if ( VAR_12 == VAR_0 ||
      (VAR_2 != VAR_0 && VAR_2 != VAR_12))
   continue;

  VAR_1->set(VAR_1, 0, VAR_12, VAR_10, VAR_11);

  FUNC_2(VAR_4, 0x00d610 + (VAR_10 * 4), 0xff, VAR_13);
  if (VAR_14--)
   FUNC_2(VAR_4, 0x00d740 + (VAR_14 * 4), 0xff, VAR_10);
 }
}
