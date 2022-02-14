
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int renderer_data; TYPE_1__* renderer; } ;
typedef TYPE_2__ font_data_t ;
struct TYPE_3__ {int (* get_line_height ) (int ) ;} ;


 int FUNC_0 (void*,char*,int,float) ;
 int FUNC_1 (float) ;
 int FUNC_2 (int ) ;
 void* VAR_0 ;

int FUNC_3(void *VAR_1, float VAR_2)
{
   int VAR_3;
   font_data_t *VAR_4 = (font_data_t*)(VAR_1 ? VAR_1 : VAR_0);


   if (VAR_4 && VAR_4->renderer && VAR_4->renderer->get_line_height)
      if ((VAR_3 = VAR_4->renderer->get_line_height(VAR_4->renderer_data)) != -1)
         return (int)(VAR_3 * FUNC_1(VAR_2));


   return FUNC_0(VAR_1, "a", 1, VAR_2);
}
