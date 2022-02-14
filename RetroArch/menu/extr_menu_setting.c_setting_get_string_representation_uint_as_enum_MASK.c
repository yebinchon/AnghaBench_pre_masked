
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* unsigned_integer; } ;
struct TYPE_6__ {TYPE_1__ target; } ;
struct TYPE_7__ {TYPE_2__ value; scalar_t__ index_offset; } ;
typedef TYPE_3__ rarch_setting_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,char*) ;

__attribute__((used)) static void FUNC_2(
      rarch_setting_t *VAR_0,
      char *VAR_1, size_t VAR_2)
{
   if (VAR_0)
      FUNC_1(VAR_1, VAR_2, "%s",
            FUNC_0((enum msg_hash_enums)(
               VAR_0->index_offset+(
                  *VAR_0->value.target.unsigned_integer))));
}
