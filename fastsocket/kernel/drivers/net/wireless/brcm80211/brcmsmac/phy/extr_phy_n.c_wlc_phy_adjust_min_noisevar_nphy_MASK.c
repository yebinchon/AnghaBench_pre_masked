
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bufcount; int* tone_id; int* min_noise_vars; } ;
struct brcms_phy {int nphy_noisevars_adjusted; TYPE_1__ nphy_saved_noisevars; int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_2 (struct brcms_phy*,int ,int,int,int,int*) ;

__attribute__((used)) static void
FUNC_3(struct brcms_phy *VAR_3, int VAR_4,
     int *VAR_5, u32 *VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 int VAR_9;
 int VAR_10 =
  FUNC_0(VAR_3->radio_chanspec) ?
  VAR_1 : VAR_0;

 if (VAR_3->nphy_noisevars_adjusted) {
  for (VAR_7 = 0; VAR_7 < VAR_3->nphy_saved_noisevars.bufcount; VAR_7++) {
   VAR_9 = VAR_3->nphy_saved_noisevars.tone_id[VAR_7];
   VAR_8 = (VAR_9 >= 0) ?
     ((VAR_9 *
       2) + 1) : (VAR_10 + (VAR_9 * 2) + 1);
   FUNC_2(
    VAR_3, VAR_2, 1,
    VAR_8, 32,
    &VAR_3->nphy_saved_noisevars.min_noise_vars[VAR_7]);
  }

  VAR_3->nphy_saved_noisevars.bufcount = 0;
  VAR_3->nphy_noisevars_adjusted = 0;
 }

 if ((VAR_6 != ((void*)0)) && (VAR_5 != ((void*)0))) {
  VAR_3->nphy_saved_noisevars.bufcount = 0;

  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   VAR_9 = VAR_5[VAR_7];
   VAR_8 = (VAR_9 >= 0) ?
     ((VAR_9 * 2) + 1) :
     (VAR_10 + (VAR_9 * 2) + 1);
   VAR_3->nphy_saved_noisevars.tone_id[VAR_7] = VAR_9;
   FUNC_1(VAR_3, VAR_2, 1,
      VAR_8, 32,
      &VAR_3->nphy_saved_noisevars.
      min_noise_vars[VAR_7]);
   FUNC_2(VAR_3, VAR_2, 1,
       VAR_8, 32, &VAR_6[VAR_7]);
   VAR_3->nphy_saved_noisevars.bufcount++;
  }

  VAR_3->nphy_noisevars_adjusted = 1;
 }
}
