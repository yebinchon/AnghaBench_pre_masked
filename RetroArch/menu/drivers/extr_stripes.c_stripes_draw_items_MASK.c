
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int video_frame_info_t ;
typedef scalar_t__ uint8_t ;
struct TYPE_17__ {int alpha; } ;
typedef TYPE_1__ stripes_node_t ;
struct TYPE_18__ {size_t system_tab_end; TYPE_4__* selection_buf_old; } ;
typedef TYPE_2__ stripes_handle_t ;
typedef int menu_entry_t ;
struct TYPE_19__ {int scale_x; int scale_y; int scale_z; int scale_enable; scalar_t__ rotation; int * matrix; } ;
typedef TYPE_3__ menu_display_ctx_rotate_draw_t ;
typedef int math_matrix_4x4 ;
struct TYPE_20__ {int size; } ;
typedef TYPE_4__ file_list_t ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int ,size_t*) ;
 int FUNC_6 (int *,int ,size_t,TYPE_4__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,unsigned int,size_t,size_t,unsigned int*,unsigned int*) ;
 int FUNC_9 (int *,int *,int *,TYPE_2__*,TYPE_1__*,TYPE_4__*,float*,char const*,char const*,size_t,size_t,unsigned int,unsigned int) ;
 TYPE_1__* FUNC_10 (TYPE_2__*,unsigned int) ;
 char* FUNC_11 (char) ;

__attribute__((used)) static void FUNC_12(
      video_frame_info_t *VAR_1,
      stripes_handle_t *VAR_2,
      file_list_t *VAR_3,
      size_t VAR_4, size_t VAR_5, float *VAR_6,
      unsigned VAR_7, unsigned VAR_8)
{
   size_t VAR_9;
   unsigned VAR_10, VAR_11;
   math_matrix_4x4 VAR_12;
   menu_display_ctx_rotate_draw_t VAR_13;
   stripes_node_t *VAR_14 = ((void*)0);
   size_t VAR_15 = 0;
   const char *VAR_16 = FUNC_11('R');
   const char *VAR_17= FUNC_11('L');

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
      stripes_node_t *VAR_18 = (stripes_node_t*)
            FUNC_1(VAR_3, VAR_4);

      if (VAR_18 && (uint8_t)(255 * VAR_18->alpha) == 0)
         return;

      VAR_9 = 0;
   }

   VAR_10 = VAR_9;
   VAR_11 = VAR_15 - 1;

   FUNC_8(VAR_2, VAR_8, VAR_15, VAR_4, &VAR_10, &VAR_11);

   FUNC_2(VAR_1);

   for (VAR_9 = VAR_10; VAR_9 <= VAR_11; VAR_9++)
   {
      int VAR_19;
      menu_entry_t VAR_20;
      FUNC_7(&VAR_20);
      FUNC_6(&VAR_20, 0, VAR_9, VAR_3, 1);
      VAR_19 = FUNC_9(VAR_1,
            &VAR_20,
            &VAR_12,
            VAR_2, VAR_14,
            VAR_3, VAR_6, VAR_16, VAR_17,
            VAR_9, VAR_4,
            VAR_7, VAR_8);
      if (VAR_19 == -1)
         break;
   }

   FUNC_3(VAR_1);
}
