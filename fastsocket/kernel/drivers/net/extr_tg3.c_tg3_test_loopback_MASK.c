
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tg3 {int dma_limit; int phy_flags; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct tg3*) ;
 scalar_t__ FUNC_3 (struct tg3*,int ) ;
 int FUNC_4 (struct tg3*,int) ;
 int FUNC_5 (struct tg3*,int ,int) ;
 int FUNC_6 (struct tg3*,int) ;
 int FUNC_7 (struct tg3*,int) ;
 scalar_t__ FUNC_8 (struct tg3*,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct tg3 *VAR_23, u64 *VAR_24, bool VAR_25)
{
 int VAR_26 = -VAR_2;
 u32 VAR_27;
 u32 VAR_28 = 9000;

 if (VAR_23->dma_limit)
  VAR_28 = VAR_23->dma_limit - VAR_5;

 VAR_27 = VAR_23->phy_flags & VAR_13;
 VAR_23->phy_flags &= ~VAR_13;

 if (!FUNC_1(VAR_23->dev)) {
  VAR_24[VAR_12] = VAR_11;
  VAR_24[VAR_16] = VAR_11;
  if (VAR_25)
   VAR_24[VAR_9] = VAR_11;
  goto done;
 }

 VAR_26 = FUNC_7(VAR_23, 1);
 if (VAR_26) {
  VAR_24[VAR_12] = VAR_11;
  VAR_24[VAR_16] = VAR_11;
  if (VAR_25)
   VAR_24[VAR_9] = VAR_11;
  goto done;
 }

 if (FUNC_3(VAR_23, VAR_3)) {
  int VAR_29;


  for (VAR_29 = VAR_7;
       VAR_29 < VAR_7 + VAR_17; VAR_29 += 4)
   FUNC_10(VAR_29, 0x0);
 }






 if (FUNC_2(VAR_23) != VAR_0 &&
     !FUNC_3(VAR_23, VAR_1)) {
  FUNC_4(VAR_23, 1);

  if (FUNC_8(VAR_23, VAR_4, 0))
   VAR_24[VAR_12] |= VAR_18;

  if (FUNC_3(VAR_23, VAR_6) &&
      FUNC_8(VAR_23, VAR_28 + VAR_5, 0))
   VAR_24[VAR_12] |= VAR_10;

  FUNC_4(VAR_23, 0);
 }

 if (!(VAR_23->phy_flags & VAR_15) &&
     !FUNC_3(VAR_23, VAR_22)) {
  int VAR_30;

  FUNC_5(VAR_23, 0, 0);


  for (VAR_30 = 0; VAR_30 < 100; VAR_30++) {
   if (FUNC_9(VAR_8) & VAR_21)
    break;
   FUNC_0(1);
  }

  if (FUNC_8(VAR_23, VAR_4, 0))
   VAR_24[VAR_16] |= VAR_18;
  if (FUNC_3(VAR_23, VAR_20) &&
      FUNC_8(VAR_23, VAR_4, 1))
   VAR_24[VAR_16] |= VAR_19;
  if (FUNC_3(VAR_23, VAR_6) &&
      FUNC_8(VAR_23, VAR_28 + VAR_5, 0))
   VAR_24[VAR_16] |= VAR_10;

  if (VAR_25) {
   FUNC_5(VAR_23, 0, 1);





   FUNC_0(40);

   if (FUNC_8(VAR_23, VAR_4, 0))
    VAR_24[VAR_9] |=
       VAR_18;
   if (FUNC_3(VAR_23, VAR_20) &&
       FUNC_8(VAR_23, VAR_4, 1))
    VAR_24[VAR_9] |=
       VAR_19;
   if (FUNC_3(VAR_23, VAR_6) &&
       FUNC_8(VAR_23, VAR_28 + VAR_5, 0))
    VAR_24[VAR_9] |=
       VAR_10;
  }


  if (VAR_23->phy_flags & VAR_14)
   FUNC_6(VAR_23, 1);
 }

 VAR_26 = (VAR_24[VAR_12] | VAR_24[VAR_16] |
        VAR_24[VAR_9]) ? -VAR_2 : 0;

done:
 VAR_23->phy_flags |= VAR_27;

 return VAR_26;
}
