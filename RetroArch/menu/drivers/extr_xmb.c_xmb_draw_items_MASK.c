
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int alpha; } ;
typedef TYPE_1__ xmb_node_t ;
struct TYPE_22__ {size_t system_tab_end; TYPE_5__* selection_buf_old; } ;
typedef TYPE_2__ xmb_handle_t ;
typedef int video_frame_info_t ;
typedef scalar_t__ uint8_t ;
struct TYPE_23__ {int label_enabled; int sublabel_enabled; } ;
typedef TYPE_3__ menu_entry_t ;
struct TYPE_24__ {int scale_x; int scale_y; int scale_z; int scale_enable; scalar_t__ rotation; int * matrix; } ;
typedef TYPE_4__ menu_display_ctx_rotate_draw_t ;
typedef int math_matrix_4x4 ;
struct TYPE_25__ {int size; } ;
typedef TYPE_5__ file_list_t ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (int ,size_t*) ;
 int FUNC_6 (TYPE_3__*,int ,size_t,TYPE_5__*,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*,unsigned int,size_t,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_9 (int *,TYPE_3__*,int *,TYPE_2__*,TYPE_1__*,TYPE_5__*,float*,size_t,size_t,unsigned int,unsigned int) ;
 TYPE_1__* FUNC_10 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static void FUNC_11(
      video_frame_info_t *VAR_1,
      xmb_handle_t *VAR_2,
      file_list_t *VAR_3,
      size_t VAR_4, size_t VAR_5, float *VAR_6,
      unsigned VAR_7, unsigned VAR_8)
{
   size_t VAR_9;
   unsigned VAR_10, VAR_11;
   math_matrix_4x4 VAR_12;
   menu_display_ctx_rotate_draw_t VAR_13;
   xmb_node_t *VAR_14 = ((void*)0);
   size_t VAR_15 = 0;

   if (!VAR_3 || !VAR_3->size || !VAR_2)
      return;

   if (VAR_5 > VAR_2->system_tab_end)
      VAR_14 = FUNC_10(
            VAR_2, (unsigned)(VAR_5 - (VAR_2->system_tab_end + 1)));

   VAR_15 = FUNC_0(VAR_3);

   VAR_13.matrix = &VAR_12;
   VAR_13.rotation = 0;
   VAR_13.scale_x = 1;
   VAR_13.scale_y = 1;
   VAR_13.scale_z = 1;
   VAR_13.scale_enable = 1;

   FUNC_4(&VAR_13, VAR_1);

   FUNC_5(VAR_0, &VAR_9);

   if (VAR_3 == VAR_2->selection_buf_old)
   {
      xmb_node_t *VAR_16 = (xmb_node_t*)
         FUNC_1(VAR_3, VAR_4);

      if (VAR_16 && (uint8_t)(255 * VAR_16->alpha) == 0)
         return;

      VAR_9 = 0;
   }

   VAR_10 = (unsigned)VAR_9;
   VAR_11 = (unsigned)(VAR_15 - 1);

   FUNC_8(VAR_2, VAR_8, VAR_15, (unsigned)VAR_4, &VAR_10, &VAR_11);

   FUNC_2(VAR_1);

   for (VAR_9 = VAR_10; VAR_9 <= VAR_11; VAR_9++)
   {
      int VAR_17;
      menu_entry_t VAR_18;
      FUNC_7(&VAR_18);
      VAR_18.label_enabled = 0;
      VAR_18.sublabel_enabled = (VAR_9 == VAR_4);
      FUNC_6(&VAR_18, 0, VAR_9, VAR_3, 1);
      VAR_17 = FUNC_9(VAR_1,
            &VAR_18,
            &VAR_12,
            VAR_2, VAR_14,
            VAR_3, VAR_6,
            VAR_9, VAR_4,
            VAR_7, VAR_8);
      if (VAR_17 == -1)
         break;
   }

   FUNC_3(VAR_1);
}
