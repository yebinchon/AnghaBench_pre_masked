
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_19__ {unsigned int width; unsigned int height; char const* stat_text; int osd_stat_params; scalar_t__ statistics_show; scalar_t__ black_frame_insertion; } ;
typedef TYPE_2__ video_frame_info_t ;
typedef int uint64_t ;
struct font_params {int dummy; } ;
struct TYPE_18__ {int buffer; scalar_t__ offset; } ;
struct TYPE_20__ {int should_resize; unsigned int overlays_size; int dev; TYPE_15__* overlays; int mvp; scalar_t__ overlays_enabled; TYPE_1__ menu_display; TYPE_15__* menu; int dev_rotation; scalar_t__ needs_restore; } ;
typedef TYPE_3__ d3d8_video_t ;
typedef int Vertex ;
struct TYPE_21__ {int MaxZ; unsigned int Width; unsigned int Height; scalar_t__ MinZ; scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_17__ {scalar_t__ enabled; } ;
typedef int HWND ;
typedef TYPE_4__ D3DVIEWPORT8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,TYPE_15__*,int) ;
 int FUNC_6 (TYPE_3__*,void const*,unsigned int,unsigned int,unsigned int,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ,int ,int) ;
 int FUNC_10 (TYPE_3__*,unsigned int,unsigned int,int,int) ;
 int FUNC_11 (int ,TYPE_4__*) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int *,char const*,struct font_params const*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 () ;

__attribute__((used)) static bool FUNC_18(void *VAR_1, const void *VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      uint64_t VAR_5, unsigned VAR_6,
      const char *VAR_7, video_frame_info_t *VAR_8)
{
   D3DVIEWPORT8 VAR_9;
   unsigned VAR_10 = 0;
   d3d8_video_t *VAR_11 = (d3d8_video_t*)VAR_1;
   unsigned VAR_12 = VAR_8->width;
   unsigned VAR_13 = VAR_8->height;
   (void)VAR_10;

   if (!VAR_2)
      return 1;


   if (VAR_11->needs_restore)
   {

      HWND VAR_14 = FUNC_17();
      if (FUNC_0(VAR_14))
         return 1;


      if (!FUNC_7(VAR_11))
      {
         FUNC_1("[D3D8]: Failed to restore.\n");
         return 0;
      }
   }

   if (VAR_11->should_resize)
   {
      FUNC_10(VAR_11, VAR_12, VAR_13, 0, 1);
      VAR_11->should_resize = 0;
   }



   VAR_9.X = 0;
   VAR_9.Y = 0;
   VAR_9.MinZ = 0;
   VAR_9.MaxZ = 1;
   VAR_9.Width = VAR_12;
   VAR_9.Height = VAR_13;
   FUNC_11(VAR_11->dev, &VAR_9);
   FUNC_3(VAR_11->dev, 0, 0, VAR_0, 0, 1, 0);



   if (VAR_8->black_frame_insertion)
   {
      if (!FUNC_12(VAR_11, VAR_11->dev) || VAR_11->needs_restore)
         return 1;
      FUNC_3(VAR_11->dev, 0, 0, VAR_0, 0, 1, 0);
   }

   if (!FUNC_6(
            VAR_11,
            VAR_2, VAR_3, VAR_4,
            VAR_6, VAR_11->dev_rotation))
   {
      FUNC_1("[D3D8]: Failed to render scene.\n");
      return 0;
   }
   if (!FUNC_16(VAR_7))
   {
      FUNC_11(VAR_11->dev, &VAR_9);
      FUNC_2(VAR_11->dev);
      FUNC_14(VAR_8, ((void*)0), VAR_7, ((void*)0));
      FUNC_4(VAR_11->dev);
   }

   FUNC_13(VAR_8);
   FUNC_12(VAR_11, VAR_11->dev);

   return 1;
}
