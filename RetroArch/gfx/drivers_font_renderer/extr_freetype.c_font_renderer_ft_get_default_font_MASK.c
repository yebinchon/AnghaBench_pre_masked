
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int directory_assets; } ;
struct TYPE_5__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;


 size_t FUNC_0 (char const**) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (char*,int ,char*,int) ;
 char const** VAR_1 ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_5(void)
{



   size_t VAR_2;




   for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
   {
      if (FUNC_3(VAR_1[VAR_2]))
         return VAR_1[VAR_2];
   }

   return ((void*)0);

}
