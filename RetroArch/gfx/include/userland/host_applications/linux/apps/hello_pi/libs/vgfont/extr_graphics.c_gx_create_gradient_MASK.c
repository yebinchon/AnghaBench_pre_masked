
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef double VGfloat ;
typedef scalar_t__ VGPaint ;
typedef int GX_PAINT_T ;
typedef int GX_CLIENT_STATE_T ;
typedef int GRAPHICS_RESOURCE_HANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,double*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int ,int,double*) ;
 int FUNC_8 (scalar_t__,int ,int ) ;

GX_PAINT_T *FUNC_9(GRAPHICS_RESOURCE_HANDLE VAR_4,
                               uint32_t VAR_5,
                               uint32_t VAR_6)
{

   VGfloat VAR_7[10];
   GX_CLIENT_STATE_T VAR_8;
   VGPaint VAR_9 = VAR_0;

   FUNC_2(&VAR_8, VAR_4);

   VAR_9 = FUNC_5();
   if (!VAR_9)
   {
      FUNC_1(&VAR_8);
      FUNC_4("Could not create paint: vg %d\n", FUNC_6());
      FUNC_3(0);
      goto finish;
   }

   VAR_7[0] = 0.0;
   FUNC_0(VAR_5, VAR_7+1);

   VAR_7[5] = 1.0;
   FUNC_0(VAR_6, VAR_7+6);

   FUNC_8(VAR_9, VAR_2, VAR_3);
   FUNC_7(VAR_9, VAR_1, 5*2, VAR_7);

finish:
   FUNC_1(&VAR_8);
   return (GX_PAINT_T*)VAR_9;
}
