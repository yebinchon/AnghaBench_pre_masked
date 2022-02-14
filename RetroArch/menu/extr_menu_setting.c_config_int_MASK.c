
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int rarch_setting_t ;
struct TYPE_8__ {int index; } ;
typedef TYPE_1__ rarch_setting_info_t ;
struct TYPE_9__ {int name; } ;
typedef TYPE_2__ rarch_setting_group_info_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
typedef int change_handler_t ;


 int FUNC_0 (int **,TYPE_1__*,int) ;
 int FUNC_1 (int **,TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int*,int,int ,int ,char const*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(
      rarch_setting_t **VAR_0,
      rarch_setting_info_t *VAR_1,
      int *VAR_2,
      enum msg_hash_enums VAR_3,
      enum msg_hash_enums VAR_4,
      int VAR_5,
      rarch_setting_group_info_t *VAR_6,
      rarch_setting_group_info_t *VAR_7,
      const char *VAR_8,
      change_handler_t VAR_9, change_handler_t VAR_10)
{
   (*VAR_0)[VAR_1->index++] = FUNC_3(
         FUNC_2(VAR_3),
         FUNC_2(VAR_4),
         VAR_2, VAR_5,
         VAR_6->name, VAR_7->name, VAR_8,
         VAR_9, VAR_10,
         0);

   FUNC_0(VAR_0, VAR_1, VAR_3);
   FUNC_1(VAR_0, VAR_1, VAR_4);
}
