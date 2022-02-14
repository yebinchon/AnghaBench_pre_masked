
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {scalar_t__ nphy_noise_index; int ** nphy_noise_win; TYPE_1__* sh; } ;
typedef scalar_t__ s8 ;
struct TYPE_2__ {scalar_t__ phy_noise_index; scalar_t__* phy_noise_window; } ;


 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

void FUNC_1(struct brcms_phy_pub *VAR_6, bool VAR_7, int VAR_8)
{
 struct brcms_phy *VAR_9 = (struct brcms_phy *) VAR_6;
 uint VAR_10;
 uint VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  VAR_9->sh->phy_noise_window[VAR_10] = (s8) (VAR_8 & 0xff);
 if (FUNC_0(VAR_9)) {
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
   VAR_9->sh->phy_noise_window[VAR_10] =
    VAR_1;
 }
 VAR_9->sh->phy_noise_index = 0;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  for (VAR_11 = VAR_4; VAR_11 < VAR_5; VAR_11++)
   VAR_9->nphy_noise_win[VAR_11][VAR_10] = VAR_2;
 }
 VAR_9->nphy_noise_index = 0;
}
