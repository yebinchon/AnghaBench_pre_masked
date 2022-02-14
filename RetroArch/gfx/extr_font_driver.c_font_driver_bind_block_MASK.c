
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int renderer_data; TYPE_1__* renderer; } ;
typedef TYPE_2__ font_data_t ;
struct TYPE_3__ {int (* bind_block ) (int ,void*) ;} ;


 int FUNC_0 (int ,void*) ;
 void* VAR_0 ;

void FUNC_1(void *VAR_1, void *VAR_2)
{
   font_data_t *VAR_3 = (font_data_t*)(VAR_1 ? VAR_1 : VAR_0);

   if (VAR_3 && VAR_3->renderer && VAR_3->renderer->bind_block)
      VAR_3->renderer->bind_block(VAR_3->renderer_data, VAR_2);
}
