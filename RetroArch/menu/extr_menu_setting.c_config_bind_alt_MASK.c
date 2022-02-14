
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct retro_keybind {int dummy; } ;
typedef int rarch_setting_t ;
struct TYPE_7__ {int index; } ;
typedef TYPE_1__ rarch_setting_info_t ;
struct TYPE_8__ {int name; } ;
typedef TYPE_2__ rarch_setting_group_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,TYPE_1__*,int) ;
 int FUNC_1 (char const*,char const*,struct retro_keybind*,int ,int ,struct retro_keybind const*,int ,int ,char const*,int) ;

__attribute__((used)) static void FUNC_2(
      rarch_setting_t **VAR_2,
      rarch_setting_info_t *VAR_3,
      struct retro_keybind *VAR_4,
      uint32_t VAR_5, uint32_t VAR_6,
      const char *VAR_7, const char *VAR_8,
      const struct retro_keybind *VAR_9,
      rarch_setting_group_info_t *VAR_10,
      rarch_setting_group_info_t *VAR_11,
      const char *VAR_12)
{
   (*VAR_2)[VAR_3->index++] = FUNC_1(VAR_7, VAR_8, VAR_4,
         VAR_5, VAR_6, VAR_9,
         VAR_10->name, VAR_11->name, VAR_12,
         1);

   FUNC_0(VAR_2, VAR_3, VAR_0 | VAR_1);
}
