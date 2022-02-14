
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* value; } ;
typedef TYPE_1__ dat_converter_match_key_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(dat_converter_match_key_t* VAR_0)
{
   if (!VAR_0)
      return;

   FUNC_0(VAR_0->value);

   while (VAR_0)
   {
      dat_converter_match_key_t* VAR_1 = VAR_0->next;
      FUNC_0(VAR_0);
      VAR_0 = VAR_1;
   }
}
