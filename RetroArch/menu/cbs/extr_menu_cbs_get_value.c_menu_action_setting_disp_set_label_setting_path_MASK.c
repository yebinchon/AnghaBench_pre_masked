
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int string; } ;
struct TYPE_10__ {TYPE_2__ target; } ;
struct TYPE_11__ {TYPE_3__ value; } ;
typedef TYPE_4__ rarch_setting_t ;
struct TYPE_12__ {TYPE_1__* list; } ;
typedef TYPE_5__ file_list_t ;
struct TYPE_8__ {int label; } ;


 TYPE_4__* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_4(file_list_t* VAR_0,
      unsigned *VAR_1, unsigned VAR_2, unsigned VAR_3,
      const char *VAR_4,
      char *VAR_5, size_t VAR_6,
      const char *VAR_7,
      char *VAR_8, size_t VAR_9)
{
   rarch_setting_t *VAR_10 = FUNC_0(VAR_0->list[VAR_3].label);
   const char *VAR_11 = VAR_10 ? FUNC_1(VAR_10->value.target.string) : ((void*)0);

   *VAR_1 = 19;

   if (!FUNC_2(VAR_11))
      FUNC_3(VAR_5, VAR_11, VAR_6);

   FUNC_3(VAR_8, VAR_7, VAR_9);
}
