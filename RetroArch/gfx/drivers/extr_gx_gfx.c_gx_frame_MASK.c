
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_18__ {scalar_t__ fps_show; } ;
typedef TYPE_3__ video_frame_info_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u8 ;
struct TYPE_16__ {scalar_t__ video_overscan_correction_top; scalar_t__ video_overscan_correction_bottom; } ;
struct TYPE_19__ {TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;
typedef int mem2_txt ;
typedef int mem1_txt ;
struct TYPE_17__ {int full_height; } ;
struct TYPE_20__ {scalar_t__ overscan_correction_top; scalar_t__ overscan_correction_bottom; int should_resize; void const* menu_data; int * framebuf; scalar_t__ double_strike; TYPE_2__ vp; scalar_t__ menu_texture_enable; scalar_t__ overlay_enable; scalar_t__ rgb32; } ;
typedef TYPE_5__ gx_video_t ;
struct TYPE_21__ {int obj; int data; } ;
struct TYPE_15__ {int obj; int data; int height; int width; } ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 TYPE_4__* FUNC_16 () ;
 int FUNC_17 (void const*,int ,unsigned int,unsigned int,size_t) ;
 int FUNC_18 (void const*,int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_19 (void const*,int ,unsigned int,unsigned int,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_13__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_20 (TYPE_5__*,unsigned int,unsigned int,char const*) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_23 (TYPE_5__*) ;
 int FUNC_24 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_25 (void*,unsigned int,unsigned int) ;
 int FUNC_26 (unsigned int*,unsigned int*,size_t*) ;
 int FUNC_27 (TYPE_3__*) ;
 TYPE_6__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_28 (char*,int,char*,int,int) ;

__attribute__((used)) static bool FUNC_29(void *VAR_19, const void *VAR_20,
      unsigned VAR_21, unsigned VAR_22,
      uint64_t VAR_23, unsigned VAR_24,
      const char *VAR_25,
      video_frame_info_t *VAR_26)
{
   char VAR_27[128];
   settings_t *VAR_28 = FUNC_16();
   gx_video_t *VAR_29 = (gx_video_t*)VAR_19;
   u8 VAR_30 = VAR_1;
   uint32_t VAR_31 = 0;

   VAR_27[0] = '\0';

   if(!VAR_29 || (!VAR_20 && !VAR_29->menu_texture_enable) || !VAR_28)
      return 1;

   if (!VAR_20)
      VAR_21 = VAR_22 = 4;

   if ((VAR_29->overscan_correction_top != VAR_28->uints.video_overscan_correction_top) ||
       (VAR_29->overscan_correction_bottom != VAR_28->uints.video_overscan_correction_bottom))
   {
      VAR_29->overscan_correction_top = VAR_28->uints.video_overscan_correction_top;
      VAR_29->overscan_correction_bottom = VAR_28->uints.video_overscan_correction_bottom;
      VAR_29->should_resize = 1;
   }

   if(VAR_29->should_resize)
   {
      FUNC_24(VAR_29, VAR_28);
      VAR_30 = VAR_5;
   }

   while (((VAR_13 || VAR_29->menu_texture_enable)) && !VAR_10)
      FUNC_9(VAR_12);

   VAR_21 = FUNC_8(VAR_11.width, VAR_21);
   VAR_22 = FUNC_8(VAR_11.height, VAR_22);

   if (VAR_21 != VAR_15 || VAR_22 != VAR_14)
   {
      FUNC_25(VAR_19, VAR_21, VAR_22);
      VAR_15 = VAR_21;
      VAR_14 = VAR_22;
   }

   VAR_10 = 0;
   VAR_9 ^= 1;

   if (VAR_20)
   {
      if (VAR_29->rgb32)
         FUNC_19(VAR_20, VAR_11.data, VAR_21, VAR_22, VAR_24);
      else if (VAR_29->menu_texture_enable)
         FUNC_18(VAR_20, VAR_11.data, VAR_21, VAR_22, VAR_24);
      else
         FUNC_17(VAR_20, VAR_11.data, VAR_21, VAR_22, VAR_24);
      FUNC_0(VAR_11.data, VAR_22 * (VAR_21 << (VAR_29->rgb32 ? 2 : 1)));
   }

   if (VAR_29->menu_texture_enable && VAR_29->menu_data)
   {
      size_t VAR_32;
      unsigned VAR_33, VAR_34;

      FUNC_26(&VAR_33, &VAR_34,
            &VAR_32);

      FUNC_17(
            VAR_29->menu_data,
            VAR_16.data,
            VAR_33,
            VAR_34,
            VAR_32);
      FUNC_0(
            VAR_16.data,
            VAR_33 * VAR_32);
   }





   FUNC_5();

   FUNC_7(VAR_2);
   FUNC_6(&VAR_11.obj, VAR_4);
   FUNC_1(VAR_7, VAR_8);

   if (VAR_29->menu_texture_enable)
   {
      FUNC_7(VAR_3);
      FUNC_6(&VAR_16.obj, VAR_4);
      FUNC_1(VAR_7, VAR_8);
   }






   FUNC_14(VAR_31);
   if (VAR_17 > VAR_18) {
      if(VAR_13) {
         FUNC_13();
      }
   }
   VAR_17 = VAR_18;
   FUNC_15(VAR_31);

   FUNC_3();

   if (VAR_26->fps_show)
   {
      char VAR_35[128];
      char VAR_36[128];
      unsigned VAR_37 = 15;
      unsigned VAR_38 = 35;

      VAR_35[0] = VAR_36[0] = '\0';

      (void)VAR_36;

      FUNC_20(VAR_29, VAR_37, VAR_38, VAR_27);
      VAR_38 += VAR_0 * (VAR_29->double_strike ? 1 : 2);
      FUNC_28(VAR_35, sizeof(VAR_35), "MEM1: %8d / %8d",
            VAR_6 - FUNC_10(), VAR_6);
      FUNC_20(VAR_29, VAR_37, VAR_38, VAR_35);






   }

   if (VAR_25 && !VAR_29->menu_texture_enable)
   {
      unsigned VAR_39 = 7 * (VAR_29->double_strike ? 1 : 2);
      unsigned VAR_40 = VAR_29->vp.full_height - (35 * (VAR_29->double_strike ? 1 : 2));

      FUNC_20(VAR_29, VAR_39, VAR_40, VAR_25);
      VAR_30 = VAR_5;
   }

   FUNC_2(VAR_29->framebuf[VAR_9], VAR_30);
   FUNC_4();
   FUNC_12(VAR_29->framebuf[VAR_9]);
   FUNC_11();

   FUNC_14(VAR_31);
   ++VAR_17;
   FUNC_15(VAR_31);

   return 1;
}
