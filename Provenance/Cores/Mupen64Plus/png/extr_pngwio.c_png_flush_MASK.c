
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
struct TYPE_4__ {int (* output_flush_fn ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(png_structrp VAR_0)
{
   if (VAR_0->output_flush_fn != ((void*)0))
      (*(VAR_0->output_flush_fn))(VAR_0);
}
