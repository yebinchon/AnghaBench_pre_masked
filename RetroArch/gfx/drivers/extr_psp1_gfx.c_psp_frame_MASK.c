
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_frame_info_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct TYPE_4__ {int context_storage; int dList; scalar_t__ active; } ;
struct TYPE_5__ {int hw_render; int vblank_not_reached; int bpp_log2; TYPE_1__ menu; int frame_dList; int texture; scalar_t__ rgb32; scalar_t__ frame_coords; int tex_filter; int main_dList; scalar_t__ should_resize; int draw_buffer; scalar_t__ vsync; } ;
typedef TYPE_2__ psp1_video_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void const* VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,unsigned int,unsigned int) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,int ,unsigned int,unsigned int,unsigned int,void*,int ,int ,unsigned int,int ) ;
 int FUNC_12 (int ,int,int ,int *,void*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ,int ,unsigned int,int ) ;
 int FUNC_20 (void const*,unsigned int) ;

__attribute__((used)) static bool FUNC_21(void *VAR_11, const void *VAR_12,
      unsigned VAR_13, unsigned VAR_14, uint64_t VAR_15,
      unsigned VAR_16, const char *VAR_17, video_frame_info_t *VAR_18)
{
   psp1_video_t *VAR_19 = (psp1_video_t*)VAR_11;

   if (!VAR_13 || !VAR_14)
      return 0;

   if (((uint32_t)VAR_12&0x04000000) || (VAR_12 == VAR_10))
      VAR_19->hw_render = 1;
   else if (VAR_12)
      VAR_19->hw_render = 0;

   if (!VAR_19->hw_render)
      FUNC_17(0, 0);

   if (VAR_17)
   {
      FUNC_4(VAR_19->draw_buffer);
      FUNC_5(0,0);
      FUNC_3(VAR_17);
   }


   if ((VAR_19->vsync)&&(VAR_19->vblank_not_reached))
      FUNC_8();

   VAR_19->vblank_not_reached = 1;

   VAR_19->draw_buffer = FUNC_0(FUNC_16());

   if (VAR_19->should_resize)
      FUNC_7(VAR_19, VAR_18);

   FUNC_6(VAR_19->frame_coords, VAR_13, VAR_14);

   FUNC_15(VAR_1, VAR_19->main_dList);

   FUNC_18(VAR_19->tex_filter, VAR_19->tex_filter);
   FUNC_10(VAR_0);



   if (VAR_19->hw_render)
      FUNC_12(VAR_4, VAR_6 | VAR_8 |
            VAR_7, VAR_9, ((void*)0),
            (void*)(VAR_19->frame_coords));
   else
   {
      if (VAR_12)
      {
         FUNC_20(VAR_12,VAR_16 * VAR_14);
         FUNC_11(VAR_19->rgb32? VAR_3 : VAR_2, ((u32)VAR_12 & 0xF) >> VAR_19->bpp_log2,
               0, VAR_13, VAR_14, VAR_16 >> VAR_19->bpp_log2,
               (void*)((u32)VAR_12 & ~0xF), 0, 0, VAR_13, VAR_19->texture);
      }
      FUNC_19(0, FUNC_2(VAR_13), FUNC_2(VAR_14), VAR_13, VAR_19->texture);
      FUNC_9(VAR_19->frame_dList);
   }

   FUNC_13();





   if(VAR_19->menu.active)
   {
      FUNC_14(VAR_5, VAR_19->menu.dList, &(VAR_19->menu.context_storage));
      FUNC_17(0, 0);
   }

   return 1;
}
