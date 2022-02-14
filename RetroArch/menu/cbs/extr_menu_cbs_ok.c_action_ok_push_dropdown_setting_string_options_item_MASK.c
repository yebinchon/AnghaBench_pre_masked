
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int string; } ;
struct TYPE_7__ {TYPE_1__ target; } ;
struct TYPE_8__ {int (* change_handler ) (TYPE_3__*) ;int size; TYPE_2__ value; } ;
typedef TYPE_3__ rarch_setting_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (char const*) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0,
      const char *VAR_1, unsigned VAR_2, size_t VAR_3, size_t VAR_4)
{
   enum msg_hash_enums VAR_5 = (enum msg_hash_enums)FUNC_1(VAR_1);
   rarch_setting_t *VAR_6 = FUNC_2(VAR_5);

   if (!VAR_6)
      return -1;

   FUNC_3(VAR_6->value.target.string, VAR_0,
         VAR_6->size);

   if (VAR_6->change_handler)
      VAR_6->change_handler(VAR_6);

   return FUNC_0(((void*)0), ((void*)0), 0, 0);
}
