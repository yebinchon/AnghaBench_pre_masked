
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {scalar_t__ a_band_high_disable; } ;
struct brcms_chanvec {int vec; } ;
struct TYPE_3__ {size_t chan; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (struct brcms_chanvec*,int ,int) ;
 int FUNC_2 (int ,size_t) ;

void
FUNC_3(struct brcms_phy_pub *VAR_6, uint VAR_7,
         struct brcms_chanvec *VAR_8)
{
 struct brcms_phy *VAR_9 = (struct brcms_phy *) VAR_6;
 uint VAR_10;
 uint VAR_11;

 FUNC_1(VAR_8, 0, sizeof(struct brcms_chanvec));

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++) {
  VAR_11 = VAR_5[VAR_10].chan;

  if ((VAR_9->a_band_high_disable) && (VAR_11 >= VAR_3)
      && (VAR_11 <= VAR_4))
   continue;

  if ((VAR_7 == VAR_0 && VAR_11 <= VAR_2) ||
      (VAR_7 == VAR_1 && VAR_11 > VAR_2))
   FUNC_2(VAR_8->vec, VAR_11);
 }
}
