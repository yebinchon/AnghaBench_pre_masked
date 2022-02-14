
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef int png_inforp ;
struct TYPE_4__ {int (* info_fn ) (TYPE_1__*,int ) ;} ;


 int FUNC_0 (TYPE_1__*,int ) ;

void
FUNC_1(png_structrp VAR_0, png_inforp VAR_1)
{
   if (VAR_0->info_fn != ((void*)0))
      (*(VAR_0->info_fn))(VAR_0, VAR_1);
}
