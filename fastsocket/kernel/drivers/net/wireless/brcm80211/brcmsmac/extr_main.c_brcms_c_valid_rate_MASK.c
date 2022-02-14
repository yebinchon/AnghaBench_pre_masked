
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint ;
typedef int u32 ;
struct brcms_c_rateset {size_t count; scalar_t__* rates; int mcs; } ;
struct brcms_c_info {TYPE_4__* pub; TYPE_3__* hw; TYPE_2__** bandstate; TYPE_1__* band; } ;
struct TYPE_8__ {int _nbands; int unit; } ;
struct TYPE_7__ {int d11core; } ;
struct TYPE_6__ {struct brcms_c_rateset hw_rateset; } ;
struct TYPE_5__ {int bandtype; struct brcms_c_rateset hw_rateset; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct brcms_c_info*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct brcms_c_info *VAR_3, u32 VAR_4, int VAR_5,
      bool VAR_6)
{
 struct brcms_c_rateset *VAR_7;
 uint VAR_8;

 if ((VAR_5 == VAR_0) || (VAR_5 == VAR_3->band->bandtype))
  VAR_7 = &VAR_3->band->hw_rateset;
 else if (VAR_3->pub->_nbands > 1)
  VAR_7 = &VAR_3->bandstate[FUNC_0(VAR_3)]->hw_rateset;
 else

  return 0;


 if (FUNC_2(VAR_4)) {
  if ((VAR_4 & VAR_2) >= VAR_1)
   goto error;

  return FUNC_3(VAR_7->mcs, (VAR_4 & VAR_2));
 }

 for (VAR_8 = 0; VAR_8 < VAR_7->count; VAR_8++)
  if (VAR_7->rates[VAR_8] == FUNC_4(VAR_4))
   return 1;
 error:
 if (VAR_6)
  FUNC_1(VAR_3->hw->d11core, "wl%d: valid_rate: rate spec 0x%x "
     "not in hw_rateset\n", VAR_3->pub->unit, VAR_4);

 return 0;
}
