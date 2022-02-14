
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int raid_level; } ;
typedef TYPE_1__ drive_info_struct ;
struct TYPE_6__ {int highest_lun; TYPE_1__** drv; } ;
typedef TYPE_2__ ctlr_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(ctlr_info_t *VAR_2, int VAR_3)
{
 int VAR_4;
 drive_info_struct *VAR_5;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {


  if (VAR_2->drv[VAR_4] && VAR_4 != 0)
   continue;




  if (VAR_4 == 0 && VAR_2->drv[VAR_4] && VAR_2->drv[VAR_4]->raid_level != -1)
   continue;





  if (VAR_4 > VAR_2->highest_lun && !VAR_3)
   VAR_2->highest_lun = VAR_4;


  if (VAR_4 == 0 && VAR_2->drv[VAR_4] != ((void*)0))
   return VAR_4;





  VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
  if (!VAR_5)
   return -1;
  VAR_5->raid_level = -1;
  VAR_2->drv[VAR_4] = VAR_5;
  return VAR_4;
 }
 return -1;
}
