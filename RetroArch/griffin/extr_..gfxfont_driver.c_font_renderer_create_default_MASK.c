
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* (* get_default_font ) () ;int ident; void* (* init ) (char const*,unsigned int) ;} ;
typedef TYPE_1__ font_renderer_driver_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__** VAR_0 ;
 char* FUNC_2 () ;
 void* FUNC_3 (char const*,unsigned int) ;

int FUNC_4(
      const font_renderer_driver_t **VAR_1,
      void **VAR_2,
      const char *VAR_3, unsigned VAR_4)
{
   unsigned VAR_5;

   for (VAR_5 = 0; VAR_0[VAR_5]; VAR_5++)
   {
      const char *VAR_6 = VAR_3;

      if (!VAR_6)
         VAR_6 = VAR_0[VAR_5]->get_default_font();
      if (!VAR_6)
         continue;

      *VAR_2 = VAR_0[VAR_5]->init(VAR_6, VAR_4);
      if (*VAR_2)
      {
         FUNC_1("[Font]: Using font rendering backend: %s.\n",
               VAR_0[VAR_5]->ident);
         *VAR_1 = VAR_0[VAR_5];
         return 1;
      }
      else
         FUNC_0("Failed to create rendering backend: %s.\n",
               VAR_0[VAR_5]->ident);
   }

   *VAR_1 = ((void*)0);
   *VAR_2 = ((void*)0);

   return 0;
}
