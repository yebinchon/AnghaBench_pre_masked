
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef double VGfloat ;
typedef int VGPath ;
typedef int VGPaint ;
typedef int VCOS_STATUS_T ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ height; } ;
typedef int GX_PAINT_T ;
typedef int GX_CLIENT_STATE_T ;
typedef TYPE_1__* GRAPHICS_RESOURCE_HANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,double,double,int,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int,double*) ;
 int FUNC_9 (int ,double,double,double,double,double,double) ;

VCOS_STATUS_T FUNC_10(GRAPHICS_RESOURCE_HANDLE VAR_10,
                               uint32_t VAR_11, uint32_t VAR_12,
                               uint32_t VAR_13, uint32_t VAR_14,
                               uint32_t VAR_15,
                               GX_PAINT_T *VAR_16)
{


   VGfloat VAR_17[4] = {0.0, 0.0, 0.0, 0.0};
   VGPaint VAR_18 = (VGPaint)VAR_16;
   VGPath VAR_19;
   GX_CLIENT_STATE_T VAR_20;
   VCOS_STATUS_T VAR_21 = VAR_4;

   if (!VAR_18)
      return VAR_2;

   FUNC_1(&VAR_20, VAR_10);

   if (VAR_13 == VAR_1)
      VAR_13 = VAR_10->width;

   if (VAR_14 == VAR_0)
      VAR_14 = VAR_10->height;

   VAR_17[2] = VAR_13;

   FUNC_8(VAR_18, VAR_6, 4, VAR_17);
   FUNC_7(VAR_18, VAR_5);

   VAR_19 = FUNC_3(VAR_9, VAR_8,
                       1.0, 0.0, 8, 8, VAR_7);
   if (!VAR_19)
   {
      VAR_21 = VAR_3;
      goto finish;
   }

   FUNC_9(VAR_19, (VGfloat)VAR_11, (VGfloat)VAR_12, (VGfloat)VAR_13, (VGfloat)VAR_14,
                (VGfloat)VAR_15, (VGfloat)VAR_15);
   FUNC_5(VAR_19, VAR_5);
   FUNC_4(VAR_19);

   FUNC_2(FUNC_6() == 0);

finish:
   FUNC_0(&VAR_20);

   return VAR_21;
}
