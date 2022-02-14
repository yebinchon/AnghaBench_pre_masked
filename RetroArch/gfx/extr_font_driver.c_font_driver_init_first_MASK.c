
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int font_renderer_t ;
struct TYPE_3__ {float size; void* renderer_data; int const* renderer; } ;
typedef TYPE_1__ font_data_t ;
typedef enum font_driver_render_api { ____Placeholder_font_driver_render_api } font_driver_render_api ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (void const**,void**,void*,char const*,float,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (void const**,void**,void*,char const*,float,int,int (*) (void const**,void**,void*,char const*,float,int,int),int) ;

font_data_t *FUNC_4(
      void *VAR_0, const char *VAR_1, float VAR_2,
      bool VAR_3, bool VAR_4,
      enum font_driver_render_api VAR_5)
{
   const void *VAR_6 = ((void*)0);
   void *VAR_7 = ((void*)0);
   bool VAR_8 = 0;
   VAR_8 = FUNC_1(&VAR_6, &VAR_7,
         VAR_0, VAR_1, VAR_2, VAR_5, VAR_4);

   if (VAR_8)
   {
      font_data_t *VAR_9 = (font_data_t*)FUNC_0(1, sizeof(*VAR_9));
      VAR_9->renderer = (const font_renderer_t*)VAR_6;
      VAR_9->renderer_data = VAR_7;
      VAR_9->size = VAR_2;
      return VAR_9;
   }

   return ((void*)0);
}
