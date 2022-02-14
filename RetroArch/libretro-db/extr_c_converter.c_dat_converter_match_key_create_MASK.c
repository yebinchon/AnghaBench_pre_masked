
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* value; void* hash; struct TYPE_3__* next; } ;
typedef TYPE_1__ dat_converter_match_key_t ;


 void* FUNC_0 (char*) ;
 void* FUNC_1 (int) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static dat_converter_match_key_t* FUNC_3(
      const char* VAR_0)
{
   dat_converter_match_key_t* VAR_1;
   dat_converter_match_key_t* VAR_2;
   char* VAR_3;

   VAR_1 = FUNC_1(sizeof(*VAR_1));
   VAR_1->value = FUNC_2(VAR_0);
   VAR_1->next = ((void*)0);
   VAR_2 = VAR_1;

   VAR_3 = VAR_1->value;
   while (*VAR_3++)
   {
      if (*VAR_3 == '.')
      {
         *VAR_3++ = '\0';
         VAR_2->hash = FUNC_0(VAR_2->value);
         VAR_2->next = FUNC_1(sizeof(*VAR_1));
         VAR_2 = VAR_2->next;
         VAR_2->value = VAR_3;
         VAR_2->next = ((void*)0);
      }
   }
   VAR_2->hash = FUNC_0(VAR_2->value);

   return VAR_1;
}
