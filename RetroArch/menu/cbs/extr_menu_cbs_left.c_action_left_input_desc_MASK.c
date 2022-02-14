
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int** input_remap_ids; } ;
struct TYPE_7__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {int ** input_desc_btn; } ;
typedef TYPE_3__ rarch_system_info_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_2__* FUNC_0 () ;
 TYPE_3__* FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_4, const char *VAR_5,
   bool VAR_6)
{
   rarch_system_info_t *VAR_7 = FUNC_1();
   settings_t *VAR_8 = FUNC_0();
   unsigned VAR_9, VAR_10, VAR_11;

   if (!VAR_8 || !VAR_7)
      return 0;

   VAR_10 = (VAR_4 - VAR_0) / (VAR_2 + 8);
   VAR_9 = (VAR_4 - VAR_0) - (VAR_2 + 8) * VAR_10;

   if (VAR_8->uints.input_remap_ids[VAR_10][VAR_9] == VAR_3)
      VAR_8->uints.input_remap_ids[VAR_10][VAR_9] = VAR_1 - 1;

   if (VAR_8->uints.input_remap_ids[VAR_10][VAR_9] > 0)
      VAR_8->uints.input_remap_ids[VAR_10][VAR_9]--;
   else if (VAR_8->uints.input_remap_ids[VAR_10][VAR_9] == 0)
      VAR_8->uints.input_remap_ids[VAR_10][VAR_9] = VAR_3;
   else
      VAR_8->uints.input_remap_ids[VAR_10][VAR_9] = VAR_1 - 1;

   VAR_11 = VAR_8->uints.input_remap_ids[VAR_10][VAR_9];



   if (VAR_11 != VAR_3)
   {
      if ((FUNC_2(VAR_7->input_desc_btn[VAR_10][VAR_11]) && VAR_11 < VAR_1) )

         FUNC_3(VAR_4, VAR_5, VAR_6);
   }

   return 0;
}
