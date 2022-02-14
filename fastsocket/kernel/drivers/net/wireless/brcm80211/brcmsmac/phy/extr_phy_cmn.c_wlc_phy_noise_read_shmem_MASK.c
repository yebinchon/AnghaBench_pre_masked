
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_4__ {size_t phy_corenum; } ;
struct brcms_phy {size_t nphy_noise_index; scalar_t__** nphy_noise_win; TYPE_2__ pubpi; TYPE_1__* sh; } ;
typedef scalar_t__ s8 ;
typedef int noise_dbm_ant ;
typedef int cmplx_pwr ;
struct TYPE_3__ {int physhim; } ;


 size_t FUNC_0 (size_t,int ) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (size_t*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct brcms_phy*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static s8 FUNC_5(struct brcms_phy *VAR_4)
{
 u32 VAR_5[VAR_0];
 s8 VAR_6[VAR_0];
 u16 VAR_7, VAR_8;
 u32 VAR_9 = 0;
 s8 VAR_10 = VAR_1;
 u8 VAR_11, VAR_12;

 FUNC_2((u8 *) VAR_5, 0, sizeof(VAR_5));
 FUNC_2((u8 *) VAR_6, 0, sizeof(VAR_6));

 for (VAR_11 = 0, VAR_12 = 0; VAR_12 < VAR_4->pubpi.phy_corenum; VAR_11 += 2,
      VAR_12++) {
  VAR_7 = FUNC_3(VAR_4->sh->physhim, FUNC_1(VAR_11));
  VAR_8 = FUNC_3(VAR_4->sh->physhim,
      FUNC_1(VAR_11 + 1));
  VAR_5[VAR_12] = (VAR_8 << 16) + VAR_7;
  VAR_9 += VAR_5[VAR_12];
  if (VAR_5[VAR_12] == 0)
   VAR_6[VAR_12] = VAR_1;
  else
   VAR_5[VAR_12] >>= VAR_2;
 }

 if (VAR_9 != 0)
  FUNC_4(VAR_4, VAR_5, VAR_6);

 for (VAR_12 = 0; VAR_12 < VAR_4->pubpi.phy_corenum; VAR_12++) {
  VAR_4->nphy_noise_win[VAR_12][VAR_4->nphy_noise_index] =
   VAR_6[VAR_12];

  if (VAR_6[VAR_12] > VAR_10)
   VAR_10 = VAR_6[VAR_12];
 }
 VAR_4->nphy_noise_index =
  FUNC_0(VAR_4->nphy_noise_index, VAR_3);

 return VAR_10;

}
