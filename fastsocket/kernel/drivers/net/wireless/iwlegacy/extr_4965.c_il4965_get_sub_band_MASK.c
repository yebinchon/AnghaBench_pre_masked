
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct il_priv {TYPE_1__* calib_info; } ;
typedef size_t s32 ;
struct TYPE_4__ {scalar_t__ ch_from; scalar_t__ ch_to; } ;
struct TYPE_3__ {TYPE_2__* band_info; } ;


 size_t VAR_0 ;

__attribute__((used)) static u32
FUNC_0(const struct il_priv *VAR_1, u32 VAR_2)
{
 s32 VAR_3 = -1;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->calib_info->band_info[VAR_3].ch_from == 0)
   continue;

  if (VAR_2 >= VAR_1->calib_info->band_info[VAR_3].ch_from &&
      VAR_2 <= VAR_1->calib_info->band_info[VAR_3].ch_to)
   break;
 }

 return VAR_3;
}
