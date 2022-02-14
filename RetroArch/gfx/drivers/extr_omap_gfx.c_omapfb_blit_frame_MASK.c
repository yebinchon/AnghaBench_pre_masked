
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {unsigned int bpp; TYPE_3__* current_state; TYPE_1__* cur_page; } ;
typedef TYPE_4__ omapfb_data_t ;
struct TYPE_7__ {unsigned int xres; } ;
struct TYPE_8__ {TYPE_2__ si; } ;
struct TYPE_6__ {void* buf; } ;


 int FUNC_0 (void*,void const*,unsigned int) ;

__attribute__((used)) static void FUNC_1(omapfb_data_t *VAR_0, const void *VAR_1,
      unsigned VAR_2, unsigned VAR_3)
{
   unsigned VAR_4;
   void *VAR_5 = VAR_0->cur_page->buf;
   unsigned VAR_6 = VAR_0->current_state->si.xres * VAR_0->bpp;

   for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
      FUNC_0(VAR_5 + VAR_6 * VAR_4, VAR_1 + VAR_3 * VAR_4, VAR_6);
}
