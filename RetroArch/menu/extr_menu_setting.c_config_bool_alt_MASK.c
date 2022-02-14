
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int rarch_setting_t ;
struct TYPE_7__ {int index; } ;
typedef TYPE_1__ rarch_setting_info_t ;
struct TYPE_8__ {int name; } ;
typedef TYPE_2__ rarch_setting_group_info_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
typedef int change_handler_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int **,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,char const*,int*,int,int ,int ,int ,int ,char const*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(
      rarch_setting_t **VAR_1,
      rarch_setting_info_t *VAR_2,
      bool *VAR_3,
      const char *VAR_4, const char *VAR_5,
      bool VAR_6,
      enum msg_hash_enums VAR_7,
      enum msg_hash_enums VAR_8,
      rarch_setting_group_info_t *VAR_9,
      rarch_setting_group_info_t *VAR_10,
      const char *VAR_11,
      change_handler_t VAR_12,
      change_handler_t VAR_13,
      uint32_t VAR_14)
{
   (*VAR_1)[VAR_2->index++] = FUNC_2(VAR_4, VAR_5, VAR_3,
         VAR_6,
         FUNC_1(VAR_7), FUNC_1(VAR_8),
         VAR_9->name, VAR_10->name, VAR_11,
         VAR_12, VAR_13, 1);
   if (VAR_14 != VAR_0)
      FUNC_0(VAR_1, VAR_2, VAR_14);
}
