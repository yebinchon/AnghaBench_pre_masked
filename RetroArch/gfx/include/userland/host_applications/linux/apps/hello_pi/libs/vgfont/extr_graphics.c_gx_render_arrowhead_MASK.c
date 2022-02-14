
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int VGfloat ;
typedef int VGPath ;
typedef int VGPaint ;
typedef int VCOS_STATUS_T ;
typedef int GX_PAINT_T ;
typedef int GX_CLIENT_STATE_T ;
typedef int GRAPHICS_RESOURCE_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,double,double,int,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int,int*) ;
 int FUNC_9 (int ,int*,int,int) ;

VCOS_STATUS_T FUNC_10(GRAPHICS_RESOURCE_HANDLE VAR_8,
                                  uint32_t VAR_9, uint32_t VAR_10,
                                  int32_t VAR_11, int32_t VAR_12,
                                  GX_PAINT_T *VAR_13)
{
   VGfloat VAR_14[4];
   VGPaint VAR_15 = (VGPaint)VAR_13;
   VGPath VAR_16;
   VCOS_STATUS_T VAR_17 = VAR_2;

   GX_CLIENT_STATE_T VAR_18;
   FUNC_1(&VAR_18, VAR_8);

   if (!VAR_15)
   {
      FUNC_2(0);
      VAR_17 = VAR_0;
      goto finish;
   }

   VAR_14[0] = 0.0; VAR_14[1] = 0.0;
   VAR_14[2] = VAR_11; VAR_14[2] = 0.0;

   FUNC_8(VAR_15, VAR_4, 4, VAR_14);
   FUNC_7(VAR_15, VAR_3);

   VAR_16 = FUNC_3(VAR_7, VAR_6,
                       1.0, 0.0, 8, 8, VAR_5);
   if (!VAR_16)
   {
      VAR_17 = VAR_1;
      goto finish;
   }
   VGfloat VAR_19[] = {
      (VGfloat)VAR_9, (VGfloat)VAR_10,
      (VGfloat)VAR_9 + VAR_11, (VGfloat)VAR_10 + VAR_12/2,
      (VGfloat)VAR_9 + VAR_11, (VGfloat)VAR_10 - VAR_12/2,
   };

   FUNC_9(VAR_16, VAR_19, 3, 1);

   FUNC_5(VAR_16, VAR_3);
   FUNC_4(VAR_16);

   FUNC_2(FUNC_6()==0);

finish:
   FUNC_0(&VAR_18);
   return VAR_17;
}
