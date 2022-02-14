
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iommu {int name; int dev; scalar_t__ iopgd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ,int,int) ;
 int FUNC_3 (struct iommu*,int ) ;
 int FUNC_4 (struct iommu*,int,int ) ;
 unsigned long VAR_18 ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct iommu *VAR_19)
{
 u32 VAR_20, VAR_21;
 unsigned long VAR_22;

 if (!VAR_19->iopgd || !FUNC_0((u32)VAR_19->iopgd, VAR_17))
  return -VAR_0;

 VAR_21 = FUNC_7(VAR_19->iopgd);
 if (!FUNC_0(VAR_21, VAR_17))
  return -VAR_0;

 FUNC_4(VAR_19, VAR_15, VAR_9);

 VAR_22 = VAR_18 + FUNC_5(20);
 do {
  VAR_20 = FUNC_3(VAR_19, VAR_10);
  if (VAR_20 & VAR_14)
   break;
 } while (!FUNC_6(VAR_18, VAR_22));

 if (!(VAR_20 & VAR_14)) {
  FUNC_1(VAR_19->dev, "can't take mmu out of reset\n");
  return -VAR_1;
 }

 VAR_20 = FUNC_3(VAR_19, VAR_8);
 FUNC_2(VAR_19->dev, "%s: version %d.%d\n", VAR_19->name,
   (VAR_20 >> 4) & 0xf, VAR_20 & 0xf);

 VAR_20 = FUNC_3(VAR_19, VAR_9);
 VAR_20 &= ~VAR_12;
 VAR_20 |= (VAR_13 | VAR_11);
 FUNC_4(VAR_19, VAR_20, VAR_9);

 FUNC_4(VAR_19, VAR_7, VAR_6);
 FUNC_4(VAR_19, VAR_21, VAR_16);

 VAR_20 = FUNC_3(VAR_19, VAR_2);
 VAR_20 &= ~VAR_3;
 VAR_20 |= (VAR_4 | VAR_5);
 FUNC_4(VAR_19, VAR_20, VAR_2);

 return 0;
}
