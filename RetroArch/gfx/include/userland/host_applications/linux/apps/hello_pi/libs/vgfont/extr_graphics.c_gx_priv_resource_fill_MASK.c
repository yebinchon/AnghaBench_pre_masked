
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VGfloat ;
typedef int VCOS_STATUS_T ;
typedef int GRAPHICS_RESOURCE_HANDLE ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ,int ) ;

VCOS_STATUS_T FUNC_7(GRAPHICS_RESOURCE_HANDLE VAR_4,
                               uint32_t VAR_5,
                               uint32_t VAR_6,
                               uint32_t VAR_7,
                               uint32_t VAR_8,
                               uint32_t VAR_9 )
{
   VGfloat VAR_10[4];

   FUNC_1(VAR_9, VAR_10);
   FUNC_6(VAR_3, VAR_2);

   FUNC_5(VAR_1, 4, VAR_10);
   FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);

   int VAR_11 = FUNC_4();
   if (VAR_11)
   {
      FUNC_0("vg error %x filling area", VAR_11);
      FUNC_2(0);
   }

   return VAR_0;
}
