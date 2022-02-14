
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* omap; } ;
typedef TYPE_2__ omap_video_t ;
struct TYPE_3__ {int sync; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, bool VAR_1)
{
   omap_video_t *VAR_2;

   if (!VAR_0)
      return;

   VAR_2 = VAR_0;
   VAR_2->omap->sync = !VAR_1;
}
