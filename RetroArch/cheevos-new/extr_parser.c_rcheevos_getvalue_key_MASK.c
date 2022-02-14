
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_key; scalar_t__ key_hash; } ;
typedef TYPE_1__ rcheevos_getvalueud_t ;


 scalar_t__ FUNC_0 (char const*,size_t) ;

__attribute__((used)) static int FUNC_1(void* VAR_0,
      const char* VAR_1, size_t VAR_2)
{
   rcheevos_getvalueud_t* VAR_3 = (rcheevos_getvalueud_t*)VAR_0;

   VAR_3->is_key = FUNC_0(VAR_1, VAR_2) == VAR_3->key_hash;
   return 0;
}
