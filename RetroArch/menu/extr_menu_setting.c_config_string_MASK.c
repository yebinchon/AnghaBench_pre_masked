
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
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,char*,unsigned int,char const*,char*,int ,int ,char const*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(
      rarch_setting_t **VAR_1,
      rarch_setting_info_t *VAR_2,
      char *VAR_3, size_t VAR_4,
      enum msg_hash_enums VAR_5,
      enum msg_hash_enums VAR_6,
      const char *VAR_7,
      rarch_setting_group_info_t *VAR_8,
      rarch_setting_group_info_t *VAR_9,
      const char *VAR_10,
      change_handler_t VAR_11, change_handler_t VAR_12)
{
   (*VAR_1)[VAR_2->index++] = FUNC_3(VAR_0,
         FUNC_2(VAR_5),
         FUNC_2(VAR_6),
         VAR_3, (unsigned)VAR_4, VAR_7, "",
         VAR_8->name, VAR_9->name, VAR_10,
         VAR_11, VAR_12, 0);
   FUNC_0(VAR_1, VAR_2, VAR_5);
   FUNC_1(VAR_1, VAR_2, VAR_6);
}
