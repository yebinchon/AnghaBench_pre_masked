
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nv50_gpio_priv {int dummy; } ;
struct nouveau_gpio {int (* set ) (struct nouveau_gpio*,int ,int,int,int) ;} ;
struct nouveau_bios {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_bios*,int ,int,int*,int*) ;
 struct nouveau_bios* FUNC_1 (struct nouveau_gpio*) ;
 int FUNC_2 (struct nv50_gpio_priv*,int,int,int) ;
 int FUNC_3 (struct nouveau_bios*,int ) ;
 int FUNC_4 (struct nouveau_gpio*,int ,int,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nouveau_gpio *VAR_1, u8 VAR_2)
{
 struct nouveau_bios *VAR_3 = FUNC_1(VAR_1);
 struct nv50_gpio_priv *VAR_4 = (void *)VAR_1;
 u8 VAR_5, VAR_6;
 u16 VAR_7;
 int VAR_8 = -1;

 while ((VAR_7 = FUNC_0(VAR_3, 0, ++VAR_8, &VAR_5, &VAR_6))) {
  static const u32 VAR_9[] = { 0xe100, 0xe28c };
  u32 VAR_10 = FUNC_3(VAR_3, VAR_7);
  u8 VAR_11 = (VAR_10 & 0x0000001f);
  u8 VAR_12 = (VAR_10 & 0x0000ff00) >> 8;
  u8 VAR_13 = !!(VAR_10 & 0x01000000);
  u8 VAR_14 = !!(VAR_10 & 0x02000000);
  u8 VAR_15 = !!(VAR_10 & 0x04000000);
  u32 VAR_16 = (VAR_15 << 16) | VAR_14;
  u32 VAR_17 = VAR_9[VAR_11 >> 4]; VAR_11 &= 0x0f;

  if ( VAR_12 == VAR_0 ||
      (VAR_2 != VAR_0 && VAR_2 != VAR_12))
   continue;

  VAR_1->set(VAR_1, 0, VAR_12, VAR_11, VAR_13);

  FUNC_2(VAR_4, VAR_17, 0x00010001 << VAR_11, VAR_16 << VAR_11);
 }
}
