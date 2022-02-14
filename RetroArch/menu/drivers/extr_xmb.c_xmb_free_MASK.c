
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int carr; } ;
struct TYPE_4__ {int carr; } ;
struct TYPE_6__ {scalar_t__ thumbnail_path_data; scalar_t__ bg_file_path; scalar_t__ savestate_thumbnail_file_path; scalar_t__ box_message; TYPE_2__ raster_block2; TYPE_1__ raster_block; int * horizontal_list; int * selection_buf_old; } ;
typedef TYPE_3__ xmb_handle_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
   xmb_handle_t *VAR_1 = (xmb_handle_t*)VAR_0;

   if (VAR_1)
   {
      if (VAR_1->selection_buf_old)
      {
         FUNC_5(VAR_1->selection_buf_old, 0);
         FUNC_0(VAR_1->selection_buf_old);
      }

      if (VAR_1->horizontal_list)
      {
         FUNC_5(VAR_1->horizontal_list, 0);
         FUNC_0(VAR_1->horizontal_list);
      }

      VAR_1->selection_buf_old = ((void*)0);
      VAR_1->horizontal_list = ((void*)0);

      FUNC_4(&VAR_1->raster_block.carr);
      FUNC_4(&VAR_1->raster_block2.carr);

      if (!FUNC_3(VAR_1->box_message))
         FUNC_2(VAR_1->box_message);
      if (!FUNC_3(VAR_1->savestate_thumbnail_file_path))
         FUNC_2(VAR_1->savestate_thumbnail_file_path);
      if (!FUNC_3(VAR_1->bg_file_path))
         FUNC_2(VAR_1->bg_file_path);

      if (VAR_1->thumbnail_path_data)
         FUNC_2(VAR_1->thumbnail_path_data);
   }

   FUNC_1(((void*)0), ((void*)0));
}
