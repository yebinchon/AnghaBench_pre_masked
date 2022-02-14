
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_7__ {int frame_coords; } ;
struct TYPE_5__ {int left; } ;
struct TYPE_6__ {TYPE_1__ top; } ;
struct TYPE_8__ {int p3d_event_pending; scalar_t__ video_mode; size_t current_buffer_top; scalar_t__ supports_parallax_disable; TYPE_3__ menu; TYPE_2__ drawbuffers; int shader; } ;
typedef TYPE_4__ ctr_video_t ;
typedef int ctr_vertex_t ;
typedef int Handle ;
typedef scalar_t__ APT_HookType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (float,float) ;
 int FUNC_6 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int,int ,int) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int,int ,int,int,int) ;
 int FUNC_14 (int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int ,int ,int ,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int,int ,int,int) ;
 scalar_t__ VAR_20 ;
 int FUNC_21 (int) ;
 int* FUNC_22 () ;
 int * VAR_21 ;
 int * VAR_22 ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int ,int ,int) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int *,char*) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;

__attribute__((used)) static void FUNC_29(APT_HookType VAR_23, void* VAR_24)
{
   ctr_video_t *VAR_25 = (ctr_video_t*)VAR_24;

   if(!VAR_25)
      return;

   if(VAR_23 == VAR_0)
   {
      FUNC_4(0);
      FUNC_25(&VAR_25->shader);

      FUNC_16(((void*)0),
                      FUNC_18(VAR_25->drawbuffers.top.left),
                      0, 0, VAR_2, VAR_3);

      FUNC_5(-1.0f, 0.0f);
      FUNC_11(VAR_9);
      FUNC_13(0, VAR_7, 0x00, 0xFF, 0x00);
      FUNC_12(VAR_15, VAR_15, VAR_15);
      FUNC_9(0, 0, 0, 0);
      FUNC_10(0, VAR_7, VAR_18);
      FUNC_2(VAR_5, 0x1, 0);
      FUNC_3(VAR_6, 0);
      FUNC_7(VAR_8, VAR_8,
                           VAR_14, VAR_10,
                           VAR_14, VAR_10);
      FUNC_8(0, VAR_7, 0x00);
      FUNC_15(VAR_17);
      FUNC_14(0, VAR_16, VAR_16, 0, 0, VAR_12, VAR_12, 0);
      FUNC_14(1, VAR_11, VAR_11, 0, 0, 0, 0, 0);
      FUNC_14(2, VAR_11, VAR_11, 0, 0, 0, 0, 0);
      FUNC_14(3, VAR_11, VAR_11, 0, 0, 0, 0, 0);
      FUNC_14(4, VAR_11, VAR_11, 0, 0, 0, 0, 0);
      FUNC_14(5, VAR_11, VAR_11, 0, 0, 0, 0, 0);
      FUNC_20(2,
                               FUNC_18(VAR_25->menu.frame_coords),
                               FUNC_1(VAR_13, 4) << 0 |
                               FUNC_1(VAR_13, 4) << 4,
                               sizeof(ctr_vertex_t));
      FUNC_6();
      FUNC_19(1);
      FUNC_23(VAR_19, 0);
      VAR_25->p3d_event_pending = 0;
   }

   if((VAR_23 == VAR_1) && (VAR_25->video_mode == VAR_4))
   {
      FUNC_24(VAR_22[VAR_25->current_buffer_top],
            VAR_21[VAR_25->current_buffer_top],
            400 * 240 * 3);
      FUNC_17(VAR_22[VAR_25->current_buffer_top], 400 * 240 * 3);
   }

   if ((VAR_23 == VAR_1) && VAR_25->supports_parallax_disable)
      FUNC_21(*(float*)0x1FF81080 != 0.0);

   if((VAR_23 == VAR_1) || (VAR_23 == VAR_0))
   {
      Handle VAR_26;
      u8 VAR_27;
      FUNC_0(&VAR_27);
      if(VAR_27 && FUNC_26(&VAR_26, "gsp::Lcd") >= 0)
      {
         u32 *VAR_28 = FUNC_22();
         VAR_28[0] = ((VAR_23 == VAR_1) || VAR_20)? 0x00110040: 0x00120040;
         VAR_28[1] = 2;
         FUNC_28(VAR_26);
         FUNC_27(VAR_26);
      }
   }
}
