
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int is_threaded; } ;
typedef TYPE_2__ video_info_t ;
typedef int settings_t ;
struct TYPE_15__ {int size; int buffer; scalar_t__ offset; } ;
struct TYPE_17__ {int dev; int mvp_transposed; int mvp; TYPE_1__ menu_display; scalar_t__ needs_restore; } ;
typedef TYPE_3__ d3d8_video_t ;
typedef int Vertex ;
typedef int D3DPRESENT_PARAMETERS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 int * FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__ const*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__ const*) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__ const*,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_3__*,unsigned int,unsigned int,int,int) ;
 int FUNC_11 (int ,int,int ,int,int ,int *) ;
 int FUNC_12 (int *,int ,int,int ,int,int ,int) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (TYPE_3__*,int,int ,int ) ;
 int * VAR_9 ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (unsigned int*,unsigned int*) ;

__attribute__((used)) static bool FUNC_18(d3d8_video_t *VAR_10, const video_info_t *VAR_11)
{
   unsigned VAR_12, VAR_13;
   bool VAR_14 = 1;
   settings_t *VAR_15 = FUNC_2();

   if (!VAR_10)
      return 0;

   if (!VAR_9)
      VAR_14 = FUNC_5(VAR_10, VAR_11);
   else if (VAR_10->needs_restore)
   {
      D3DPRESENT_PARAMETERS VAR_16;

      FUNC_7(VAR_10, VAR_11, &VAR_16);
      if (!FUNC_8(VAR_10->dev, &VAR_16))
      {
         FUNC_3(VAR_10);
         FUNC_4(((void*)0), VAR_9);
         VAR_9 = ((void*)0);

         VAR_14 = FUNC_5(VAR_10, VAR_11);
         if (VAR_14)
            FUNC_1("[D3D8]: Recovered from dead state.\n");
      }




   }

   if (!VAR_14)
      return VAR_14;

   if (!FUNC_6(VAR_10, VAR_11))
   {
      FUNC_0("[D3D8]: Failed to initialize render chain.\n");
      return 0;
   }

   FUNC_17(&VAR_12, &VAR_13);
   FUNC_10(VAR_10,
    VAR_12, VAR_13, 0, 1);

   FUNC_14(VAR_10, 0,
         VAR_11->is_threaded,
         VAR_7);

   VAR_10->menu_display.offset = 0;
   VAR_10->menu_display.size = 1024;
   VAR_10->menu_display.buffer = FUNC_11(
         VAR_10->dev, VAR_10->menu_display.size * sizeof(Vertex),
         VAR_6,
         VAR_3 | VAR_2 | VAR_1,
         VAR_4,
         ((void*)0));

   if (!VAR_10->menu_display.buffer)
      return 0;

   FUNC_12(&VAR_10->mvp_transposed, 0, 1, 0, 1, 0, 1);
   FUNC_13(&VAR_10->mvp, &VAR_10->mvp_transposed);

   FUNC_9(VAR_10->dev, VAR_5, VAR_0);

   return 1;
}
