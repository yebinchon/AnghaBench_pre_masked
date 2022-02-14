
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_11__ {scalar_t__ id; } ;
struct TYPE_12__ {TYPE_1__ current; } ;
struct TYPE_13__ {int pal_enable; scalar_t__ pal60_enable; TYPE_2__ resolutions; } ;
struct TYPE_14__ {TYPE_3__ screen; } ;
struct TYPE_15__ {TYPE_4__ console; } ;
typedef TYPE_5__ global_t ;
typedef void gfx_ctx_ps3_data_t ;
struct TYPE_17__ {int enable; int width; int height; int rescRatioMode; int rescPalTemporalMode; int multisamplingMode; int depthFormat; int colorFormat; } ;
struct TYPE_16__ {int enable; int maxSPUs; int initializeSPUs; } ;
typedef TYPE_6__ PSGLinitOptions ;
typedef TYPE_7__ PSGLdeviceParameters ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int*,int*) ;
 TYPE_5__* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static void *FUNC_12(video_frame_info_t *VAR_17, void *VAR_18)
{




   global_t *VAR_19 = FUNC_5();
   gfx_ctx_ps3_data_t *VAR_20 = (gfx_ctx_ps3_data_t*)
      FUNC_1(1, sizeof(gfx_ctx_ps3_data_t));

   (void)VAR_18;
   (void)VAR_19;

   if (!VAR_20)
      return ((void*)0);
   VAR_19->console.screen.pal_enable =
      FUNC_2(
            VAR_1, VAR_2,
            VAR_0, 0);

   FUNC_3();

   return VAR_20;
}
