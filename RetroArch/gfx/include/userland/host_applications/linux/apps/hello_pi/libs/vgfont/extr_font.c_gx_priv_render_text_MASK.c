
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ VGint ;
typedef scalar_t__ VGfloat ;
typedef int VGPaint ;
typedef int VGFT_FONT_T ;
typedef int VCOS_STATUS_T ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ height; } ;
typedef int GX_DISPLAY_T ;
typedef int GX_CLIENT_STATE_T ;
typedef TYPE_1__* GRAPHICS_RESOURCE_HANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
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
 int * FUNC_1 (char const*,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int,scalar_t__*) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int,scalar_t__*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int,scalar_t__*) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *,scalar_t__,scalar_t__,char const*,scalar_t__,int ) ;
 int FUNC_19 (int *,char const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;

VCOS_STATUS_T FUNC_20( GX_DISPLAY_T *VAR_15,
                                   GRAPHICS_RESOURCE_HANDLE VAR_16,
                                   int32_t VAR_17,
                                   int32_t VAR_18,
                                   uint32_t VAR_19,
                                   uint32_t VAR_20,
                                   uint32_t VAR_21,
                                   uint32_t VAR_22,
                                   const char *VAR_23,
                                   uint32_t VAR_24,
                                   uint32_t VAR_25 )
{
   VGfloat VAR_26[4];
   VGFT_FONT_T *VAR_27;
   VGPaint VAR_28;
   GX_CLIENT_STATE_T VAR_29;
   VCOS_STATUS_T VAR_30 = VAR_4;
   int VAR_31 = 1;

   FUNC_6(VAR_14);

   FUNC_4(&VAR_29, VAR_16);

   if (VAR_19 == VAR_1 &&
       VAR_20 == VAR_0)
   {
      VAR_31 = 0;
   }

   VAR_19 = (VAR_19 == VAR_1) ? VAR_16->width : VAR_19;
   VAR_20 = (VAR_20 == VAR_0) ? VAR_16->height : VAR_20;
   VAR_27 = FUNC_1(VAR_23, VAR_25);
   if (!VAR_27)
   {
      VAR_30 = VAR_3;
      goto finish;
   }


   if (VAR_31)
   {
      VGint VAR_32[] = {VAR_17,VAR_18,VAR_19,VAR_20};
      FUNC_15(VAR_11, VAR_13);
      FUNC_16(VAR_12, 4, VAR_32);
   }


   if (VAR_22 != VAR_2)
   {
      int VAR_33;
      VGfloat VAR_34, VAR_35;
      VGfloat VAR_36[4];


      FUNC_2(VAR_22, VAR_36);
      FUNC_14(VAR_5, 4, VAR_36);


      FUNC_19(VAR_27, VAR_23, VAR_24, (VGfloat)VAR_17, (VGfloat)VAR_18, &VAR_34, &VAR_35);

      if ( ( 0 < (VGint)VAR_34 ) && ( 0 < (VGint)VAR_35 ) )
      {

         VGfloat VAR_37 = FUNC_17(VAR_27);
         int32_t VAR_38 = VAR_18 + VAR_37 - VAR_35;

         FUNC_7(VAR_17, VAR_38, (VGint)VAR_34, (VGint)VAR_35);
         VAR_33 = FUNC_10();
         if (VAR_33)
         {
            FUNC_0("Error %d clearing bg text %d %d %g %g",
                   VAR_33, VAR_17, VAR_18, VAR_34, VAR_35);
            FUNC_5(0);
         }
      }
   }

   VAR_28 = FUNC_8();
   if (!VAR_28)
   {
      VAR_30 = VAR_3;
      goto finish;
   }


   FUNC_13(VAR_28, VAR_9, VAR_10);
   FUNC_2(VAR_21, VAR_26);
   FUNC_12(VAR_28, VAR_8, 4, VAR_26);
   FUNC_11(VAR_28, VAR_7);

   FUNC_18(VAR_27, (VGfloat)VAR_17, (VGfloat)VAR_18, VAR_23, VAR_24, VAR_7);

   FUNC_9(VAR_28);

   FUNC_5(FUNC_10() == 0);
   FUNC_15(VAR_11, VAR_6);

finish:
   FUNC_3(&VAR_29);

   return VAR_30;
}
