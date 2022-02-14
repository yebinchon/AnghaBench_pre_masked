
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {unsigned long pio_mask; unsigned long mwdma_mask; unsigned long udma_mask; } ;
typedef int buf ;







 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ata_device*,int ,char*,char*) ;
 char* FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long*,unsigned long*,unsigned long*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,int,char*,char*,...) ;

int FUNC_7(struct ata_device *VAR_7, unsigned int VAR_8)
{
 char VAR_9[32];
 unsigned long VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;

 VAR_15 = !!(VAR_8 & VAR_0);
 VAR_8 &= ~VAR_0;

 VAR_11 = VAR_10 = FUNC_3(VAR_7->pio_mask,
        VAR_7->mwdma_mask,
        VAR_7->udma_mask);
 FUNC_4(VAR_11, &VAR_12, &VAR_13, &VAR_14);

 switch (VAR_8) {
 case 128:
  VAR_16 = FUNC_5(VAR_12) - 1;
  VAR_12 &= ~(1 << VAR_16);
  break;

 case 131:
  if (VAR_14) {
   VAR_16 = FUNC_5(VAR_14) - 1;
   VAR_14 &= ~(1 << VAR_16);
   if (!VAR_14)
    return -VAR_5;
  } else if (VAR_13) {
   VAR_16 = FUNC_5(VAR_13) - 1;
   VAR_13 &= ~(1 << VAR_16);
   if (!VAR_13)
    return -VAR_5;
  }
  break;

 case 132:
  VAR_14 &= VAR_4;
  break;

 case 129:
  VAR_12 &= 1;
 case 130:
  VAR_13 = 0;
  VAR_14 = 0;
  break;

 default:
  FUNC_0();
 }

 VAR_11 &= FUNC_3(VAR_12, VAR_13, VAR_14);

 if (!(VAR_11 & VAR_2) || VAR_11 == VAR_10)
  return -VAR_5;

 if (!VAR_15) {
  if (VAR_11 & (VAR_1 | VAR_3))
   FUNC_6(VAR_9, sizeof(VAR_9), "%s:%s",
     FUNC_2(VAR_11),
     FUNC_2(VAR_11 & VAR_2));
  else
   FUNC_6(VAR_9, sizeof(VAR_9), "%s",
     FUNC_2(VAR_11));

  FUNC_1(VAR_7, VAR_6,
          "limiting speed to %s\n", VAR_9);
 }

 FUNC_4(VAR_11, &VAR_7->pio_mask, &VAR_7->mwdma_mask,
       &VAR_7->udma_mask);

 return 0;
}
