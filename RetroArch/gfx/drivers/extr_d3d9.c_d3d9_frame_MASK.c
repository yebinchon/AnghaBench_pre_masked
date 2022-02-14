
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;


struct TYPE_24__ {unsigned int width; unsigned int height; char const* stat_text; scalar_t__ widgets_inited; int osd_stat_params; scalar_t__ statistics_show; scalar_t__ black_frame_insertion; } ;
typedef TYPE_3__ video_frame_info_t ;
typedef int uint64_t ;
struct font_params {int dummy; } ;
struct TYPE_23__ {scalar_t__ buffer; scalar_t__ decl; scalar_t__ offset; } ;
struct TYPE_25__ {int should_resize; unsigned int overlays_size; int dev; TYPE_19__* overlays; int mvp; scalar_t__ overlays_enabled; TYPE_2__ menu_display; TYPE_19__* menu; int dev_rotation; TYPE_1__* renderchain_driver; scalar_t__ needs_restore; int final_viewport; int renderchain_data; } ;
typedef TYPE_4__ d3d9_video_t ;
typedef int Vertex ;
struct TYPE_26__ {int MaxZ; unsigned int Width; unsigned int Height; scalar_t__ MinZ; scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_22__ {int (* render ) (TYPE_4__*,TYPE_3__*,void const*,unsigned int,unsigned int,unsigned int,int ) ;int (* set_final_viewport ) (TYPE_4__*,int ,int *) ;} ;
struct TYPE_21__ {scalar_t__ enabled; } ;
typedef int LPDIRECT3DVERTEXDECLARATION9 ;
typedef int LPDIRECT3DVERTEXBUFFER9 ;
typedef int HWND ;
typedef TYPE_5__ D3DVIEWPORT9 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,TYPE_19__*,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,int ,int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_4__*,unsigned int,unsigned int,int,int) ;
 int FUNC_11 (int ,TYPE_5__*) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int *,char const*,struct font_params const*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_4__*,int ,int *) ;
 int FUNC_18 (TYPE_4__*,TYPE_3__*,void const*,unsigned int,unsigned int,unsigned int,int ) ;
 int FUNC_19 () ;

__attribute__((used)) static bool FUNC_20(void *VAR_1, const void *VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      uint64_t VAR_5, unsigned VAR_6,
      const char *VAR_7, video_frame_info_t *VAR_8)
{
   D3DVIEWPORT9 VAR_9;
   unsigned VAR_10 = 0;
   d3d9_video_t *VAR_11 = (d3d9_video_t*)VAR_1;
   unsigned VAR_12 = VAR_8->width;
   unsigned VAR_13 = VAR_8->height;
   (void)VAR_10;

   if (!VAR_2)
      return 1;


   if (VAR_11->needs_restore)
   {

      HWND VAR_14 = FUNC_19();
      if (FUNC_0(VAR_14))
         return 1;


      if (!FUNC_6(VAR_11))
      {
         FUNC_1("[D3D9]: Failed to restore.\n");
         return 0;
      }
   }

   if (VAR_11->should_resize)
   {
      FUNC_10(VAR_11, VAR_12, VAR_13, 0, 1);
      if (VAR_11->renderchain_driver->set_final_viewport)
         VAR_11->renderchain_driver->set_final_viewport(VAR_11,
               VAR_11->renderchain_data, &VAR_11->final_viewport);

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

   if (!VAR_11->renderchain_driver->render(
            VAR_11, VAR_8,
            VAR_2, VAR_3, VAR_4,
            VAR_6, VAR_11->dev_rotation))
   {
      FUNC_1("[D3D9]: Failed to render scene.\n");
      return 0;
   }
   if (VAR_7 && *VAR_7)
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
