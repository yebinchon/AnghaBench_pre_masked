
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int video_driver_data; } ;
struct TYPE_8__ {int images_count; int io_count; int view_array; struct TYPE_8__* io; struct TYPE_8__* name; struct TYPE_8__* images; TYPE_2__ render_info; TYPE_1__* render; struct TYPE_8__* base_path; } ;
struct TYPE_6__ {int (* free_image ) (int ,TYPE_3__) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_3__) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (int *) ;

void FUNC_3(void)
{
   int VAR_1;

   if (!VAR_0)
      return;

   FUNC_0(VAR_0->base_path);

   for (VAR_1 = 1; VAR_1 < VAR_0->images_count; ++VAR_1)
   {
      VAR_0->render->free_image(
         VAR_0->render_info.video_driver_data,
         VAR_0->images[VAR_1]
      );
   }

   FUNC_0(VAR_0->images);

   for (VAR_1 = 0; VAR_1 < VAR_0->io_count; ++VAR_1)
      FUNC_0(VAR_0->io[VAR_1].name);

   FUNC_0(VAR_0->io);

   FUNC_2(&VAR_0->view_array);

   FUNC_0(VAR_0);
   VAR_0 = ((void*)0);
}
