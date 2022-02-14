
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int ui_type; } ;
typedef TYPE_1__ rarch_setting_t ;
struct TYPE_16__ {int index; } ;
typedef TYPE_2__ rarch_setting_info_t ;
struct TYPE_17__ {int name; } ;
typedef TYPE_3__ rarch_setting_group_info_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
typedef int change_handler_t ;


 int FUNC_0 (TYPE_1__**,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__**,TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__**,TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 TYPE_1__ FUNC_4 (int ,int ,int ,char*,unsigned int,char const*,char*,int ,int ,char const*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(
      rarch_setting_t **VAR_3,
      rarch_setting_info_t *VAR_4,
      char *VAR_5, size_t VAR_6,
      enum msg_hash_enums VAR_7,
      enum msg_hash_enums VAR_8,
      const char *VAR_9,
      rarch_setting_group_info_t *VAR_10,
      rarch_setting_group_info_t *VAR_11,
      const char *VAR_12,
      change_handler_t VAR_13, change_handler_t VAR_14)
{
   (*VAR_3)[VAR_4->index++] = FUNC_4(VAR_1,
         FUNC_3(VAR_7),
         FUNC_3(VAR_8),
         VAR_5, (unsigned)VAR_6, VAR_9, "",
         VAR_10->name, VAR_11->name, VAR_12,
         VAR_13, VAR_14,
         0);
   (*VAR_3)[VAR_4->index - 1].ui_type = VAR_2;
   FUNC_2(VAR_3, VAR_4, VAR_0);
   FUNC_0(VAR_3, VAR_4, VAR_7);
   FUNC_1(VAR_3, VAR_4, VAR_8);
}
