
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int* unsigned_integer; } ;
struct TYPE_7__ {TYPE_1__ target; } ;
struct TYPE_8__ {int (* change_handler ) (TYPE_3__*) ;TYPE_2__ value; scalar_t__ offset_by; } ;
typedef TYPE_3__ rarch_setting_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;


 int FUNC_0 (int *,int *,int ,int ) ;
 unsigned int FUNC_1 (char const*) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0,
      const char *VAR_1, unsigned VAR_2, size_t VAR_3, size_t VAR_4)
{
   unsigned VAR_5;
   enum msg_hash_enums VAR_6 = (enum msg_hash_enums)FUNC_1(VAR_1);
   rarch_setting_t *VAR_7 = FUNC_2(VAR_6);

   if (!VAR_7)
      return -1;

   VAR_5 = (unsigned)(VAR_3 + VAR_7->offset_by);

   if (!FUNC_3(VAR_0))
   {
      unsigned VAR_8 = FUNC_1(VAR_0);
      if (VAR_8 != VAR_5)
         VAR_5 = VAR_8;
   }

   *VAR_7->value.target.unsigned_integer = VAR_5;

   if (VAR_7->change_handler)
      VAR_7->change_handler(VAR_7);

   return FUNC_0(((void*)0), ((void*)0), 0, 0);
}
