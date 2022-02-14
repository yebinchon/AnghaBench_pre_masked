
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef size_t u16 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {size_t bw; scalar_t__ a_band_high_disable; } ;
struct TYPE_3__ {size_t chan; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t FUNC_2 (size_t) ;
 TYPE_1__* VAR_11 ;
 size_t FUNC_3 (size_t) ;

u16 FUNC_4(struct brcms_phy_pub *VAR_12, uint VAR_13)
{
 struct brcms_phy *VAR_14 = (struct brcms_phy *) VAR_12;
 uint VAR_15;
 uint VAR_16;
 u16 VAR_17;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_11); VAR_15++) {
  VAR_16 = VAR_11[VAR_15].chan;

  if (FUNC_1(VAR_14) && VAR_14->bw == VAR_9) {
   uint VAR_18;

   for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_11); VAR_18++) {
    if (VAR_11[VAR_18].chan ==
        VAR_16 + VAR_2)
     break;
   }

   if (VAR_18 == FUNC_0(VAR_11))
    continue;

   VAR_16 = FUNC_3(VAR_16);
   VAR_17 = VAR_16 | VAR_9 |
      VAR_10;
   if (VAR_13 == VAR_0)
    VAR_17 |= VAR_7;
   else
    VAR_17 |= VAR_8;
  } else
   VAR_17 = FUNC_2(VAR_16);

  if ((VAR_14->a_band_high_disable) && (VAR_16 >= VAR_4)
      && (VAR_16 <= VAR_6))
   continue;

  if ((VAR_13 == VAR_0 && VAR_16 <= VAR_3) ||
      (VAR_13 == VAR_1 && VAR_16 > VAR_3))
   return VAR_17;
 }

 return (u16) VAR_5;
}
