
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_keysc_info {size_t mode; int* keycodes; scalar_t__ kycr2_delay; scalar_t__ delay; } ;
struct sh_keysc_priv {unsigned long last_keys; int input; scalar_t__ iomem_base; struct sh_keysc_info pdata; } ;
struct platform_device {int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int keyout; int keyin; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned char,scalar_t__) ;
 struct sh_keysc_priv* FUNC_5 (struct platform_device*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct platform_device *VAR_11 = VAR_10;
 struct sh_keysc_priv *VAR_12 = FUNC_5(VAR_11);
 struct sh_keysc_info *VAR_13 = &VAR_12->pdata;
 unsigned long VAR_14, VAR_15, VAR_16, VAR_17;
 unsigned char VAR_18, VAR_19;
 int VAR_20, VAR_21;

 FUNC_0(&VAR_11->dev, "isr!\n");

 VAR_15 = ~0;
 VAR_16 = 0;

 do {
  VAR_14 = 0;
  VAR_18 = 0;

  FUNC_4(VAR_2, VAR_12->iomem_base + VAR_4);

  for (VAR_20 = 0; VAR_20 < VAR_8[VAR_13->mode].keyout; VAR_20++) {
   FUNC_4(0xfff ^ (3 << (VAR_20 * 2)),
      VAR_12->iomem_base + VAR_6);
   FUNC_6(VAR_13->delay);
   VAR_19 = FUNC_3(VAR_12->iomem_base + VAR_5);
   VAR_14 |= VAR_19 << (VAR_8[VAR_13->mode].keyin * VAR_20);
   VAR_19 ^= (1 << VAR_8[VAR_13->mode].keyin) - 1;
   VAR_18 |= VAR_19;
  }

  FUNC_4(0, VAR_12->iomem_base + VAR_6);
  FUNC_4(VAR_3 | (VAR_18 << 8),
     VAR_12->iomem_base + VAR_4);

  if (VAR_13->kycr2_delay)
   FUNC_6(VAR_13->kycr2_delay);

  VAR_14 ^= ~0;
  VAR_14 &= (1 << (VAR_8[VAR_13->mode].keyin *
          VAR_8[VAR_13->mode].keyout)) - 1;
  VAR_15 &= VAR_14;
  VAR_16 |= VAR_14;

  FUNC_0(&VAR_11->dev, "keys 0x%08lx\n", VAR_14);

 } while (FUNC_3(VAR_12->iomem_base + VAR_4) & 0x01);

 FUNC_0(&VAR_11->dev, "last_keys 0x%08lx keys0 0x%08lx keys1 0x%08lx\n",
  VAR_12->last_keys, VAR_16, VAR_15);

 for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++) {
  VAR_21 = VAR_13->keycodes[VAR_20];
  if (!VAR_21)
   continue;

  VAR_17 = 1 << VAR_20;

  if (!((VAR_12->last_keys ^ VAR_16) & VAR_17))
   continue;

  if ((VAR_15 | VAR_16) & VAR_17) {
   FUNC_1(VAR_12->input, VAR_0, VAR_21, 1);
   VAR_12->last_keys |= VAR_17;
  }

  if (!(VAR_15 & VAR_17)) {
   FUNC_1(VAR_12->input, VAR_0, VAR_21, 0);
   VAR_12->last_keys &= ~VAR_17;
  }

 }
 FUNC_2(VAR_12->input);

 return VAR_1;
}
