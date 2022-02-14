
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* parent_group; char const* values; } ;
typedef TYPE_1__ rarch_setting_t ;
typedef enum setting_type { ____Placeholder_setting_type } setting_type ;
typedef int change_handler_t ;


 TYPE_1__ FUNC_0 (int,char const*,char const*,char*,unsigned int,char const*,char const*,char const*,char const*,char const*,int ,int ,int) ;

__attribute__((used)) static rarch_setting_t FUNC_1(enum setting_type VAR_0,
      const char* VAR_1, const char* VAR_2, char* VAR_3,
      unsigned VAR_4, const char* VAR_5,
      const char *VAR_6, const char *VAR_7,
      const char *VAR_8, const char *VAR_9, const char *VAR_10,
      change_handler_t VAR_11, change_handler_t VAR_12,
      bool VAR_13)
{
  rarch_setting_t VAR_14 = FUNC_0(VAR_0, VAR_1,
        VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8,
        VAR_9, VAR_10, VAR_11, VAR_12,
        VAR_13);

  VAR_14.parent_group = VAR_10;
  VAR_14.values = VAR_7;
  return VAR_14;
}
