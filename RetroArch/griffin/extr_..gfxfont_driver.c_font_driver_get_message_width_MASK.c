
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int renderer_data; TYPE_1__* renderer; } ;
typedef TYPE_2__ font_data_t ;
struct TYPE_3__ {int (* get_message_width ) (int ,char const*,unsigned int,float) ;} ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int ,char const*,unsigned int,float) ;
 void* VAR_0 ;

int FUNC_2(void *VAR_1,
      const char *VAR_2, unsigned VAR_3, float VAR_4)
{
   font_data_t *VAR_5 = (font_data_t*)(VAR_1 ? VAR_1 : VAR_0);
   if (VAR_3 == 0 && VAR_2)
      VAR_3 = (unsigned)FUNC_0(VAR_2);
   if (VAR_5 && VAR_5->renderer && VAR_5->renderer->get_message_width)
      return VAR_5->renderer->get_message_width(VAR_5->renderer_data, VAR_2, VAR_3, VAR_4);
   return -1;
}
