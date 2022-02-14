
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int input_scale; int rgb32; } ;
typedef TYPE_1__ video_info_t ;
typedef int uint32_t ;
typedef int u8 ;
struct TYPE_6__ {int scale; int rgb32; int should_resize; } ;
typedef TYPE_2__ gx_video_t ;
struct TYPE_7__ {int width; int height; int data; } ;
typedef int Mtx44 ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 () ;
 int VAR_14 ;
 int FUNC_3 () ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ,int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 int VAR_32 ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int VAR_33 ;
 int FUNC_23 (int) ;
 int FUNC_24 (int ) ;
 TYPE_4__ VAR_34 ;
 int FUNC_25 (int ,int,int,int,int,double,double) ;
 int FUNC_26 (void*,int,int) ;
 int FUNC_27 (int,int) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;

__attribute__((used)) static void FUNC_28(void *VAR_39, const video_info_t *VAR_40)
{
   Mtx44 VAR_41;
   gx_video_t *VAR_42 = (gx_video_t*)VAR_39;
   uint32_t VAR_43 = 0;
   FUNC_21(VAR_43);
   VAR_35 = VAR_36;
   FUNC_22(VAR_43);

   FUNC_11(VAR_8);
   FUNC_9(VAR_5);
   FUNC_18(VAR_11, VAR_1, VAR_11);
   FUNC_10(VAR_27);
   FUNC_5(VAR_13);

   FUNC_25(VAR_41, 1, -1, -1, 1, 0.4, 0.6);
   FUNC_4(VAR_41, VAR_18);

   FUNC_1();
   FUNC_17(VAR_29, VAR_14);
   FUNC_17(VAR_30, VAR_14);
   FUNC_17(VAR_28, VAR_14);

   FUNC_16(VAR_31, VAR_29, VAR_19, VAR_12, 0);
   FUNC_16(VAR_31, VAR_30, VAR_26, VAR_12, 0);
   FUNC_16(VAR_31, VAR_28, VAR_6, VAR_20, 0);
   FUNC_6(VAR_29, VAR_38, 3 * sizeof(float));
   FUNC_6(VAR_30, VAR_37, 2 * sizeof(float));
   FUNC_6(VAR_28, VAR_33, 4 * sizeof(u8));

   FUNC_13(1);
   FUNC_12(1);
   FUNC_8(VAR_7, VAR_10, VAR_21,
         VAR_22, VAR_15, VAR_9, VAR_0);
   FUNC_14(VAR_23, VAR_17);
   FUNC_15(VAR_23, VAR_24, VAR_25, VAR_7);
   FUNC_3();

   FUNC_7(VAR_4, VAR_3,
         VAR_2, VAR_16);

   if (VAR_42->scale != VAR_40->input_scale || VAR_42->rgb32 != VAR_40->rgb32)
   {
      FUNC_20("[GX]: Reallocate texture.\n");
      FUNC_24(VAR_34.data);
      VAR_34.data = FUNC_27(32,
            VAR_32 * VAR_32 * VAR_40->input_scale *
            VAR_40->input_scale * (VAR_40->rgb32 ? 4 : 2));
      VAR_34.width = VAR_34.height = VAR_32 * VAR_40->input_scale;

      if (!VAR_34.data)
      {
         FUNC_19("[GX]: Error allocating video texture\n");
         FUNC_23(1);
      }
   }

   FUNC_0(VAR_34.data, (VAR_34.width *
         VAR_34.height * VAR_40->rgb32) ? 4 : 2);

   VAR_42->rgb32 = VAR_40->rgb32;
   VAR_42->scale = VAR_40->input_scale;
   VAR_42->should_resize = 1;

   FUNC_26(VAR_39, VAR_34.width, VAR_34.height);
   FUNC_2();
}
