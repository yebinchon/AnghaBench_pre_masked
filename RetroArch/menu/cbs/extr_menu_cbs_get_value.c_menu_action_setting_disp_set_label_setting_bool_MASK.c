
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* boolean; } ;
struct TYPE_8__ {TYPE_3__ target; } ;
struct TYPE_11__ {TYPE_1__ value; } ;
typedef TYPE_4__ rarch_setting_t ;
struct TYPE_12__ {TYPE_2__* list; } ;
typedef TYPE_5__ file_list_t ;
struct TYPE_9__ {int label; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ) ;
 char const* FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_3(file_list_t* VAR_2,
      unsigned *VAR_3, unsigned VAR_4, unsigned VAR_5,
      const char *VAR_6,
      char *VAR_7, size_t VAR_8,
      const char *VAR_9,
      char *VAR_10, size_t VAR_11)
{
   rarch_setting_t *VAR_12 = FUNC_0(VAR_2->list[VAR_5].label);

   *VAR_7 = '\0';
   *VAR_3 = 19;

   if (VAR_12)
   {
      if (*VAR_12->value.target.boolean)
         FUNC_2(VAR_7, FUNC_1(VAR_1), VAR_8);
      else
         FUNC_2(VAR_7, FUNC_1(VAR_0), VAR_8);
   }

   FUNC_2(VAR_10, VAR_9, VAR_11);
}
