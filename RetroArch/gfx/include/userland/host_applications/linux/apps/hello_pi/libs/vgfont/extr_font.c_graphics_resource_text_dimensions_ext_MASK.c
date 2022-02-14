
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int VGfloat ;
typedef int VGFT_FONT_T ;
typedef int GX_CLIENT_STATE_T ;
typedef int GRAPHICS_RESOURCE_HANDLE ;


 int * FUNC_0 (char const*,int const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char const*,int const,double,double,int *,int *) ;

int32_t FUNC_4(GRAPHICS_RESOURCE_HANDLE VAR_0,
                                              const char *VAR_1,
                                              const uint32_t VAR_2,
                                              uint32_t *VAR_3,
                                              uint32_t *VAR_4,
                                              const uint32_t VAR_5 )
{
   GX_CLIENT_STATE_T VAR_6;
   VGfloat VAR_7, VAR_8;
   int VAR_9 = -1;

   FUNC_2(&VAR_6, VAR_0);

   VGFT_FONT_T *VAR_10 = FUNC_0(VAR_1, VAR_5);
   if (!VAR_10)
      goto finish;

   FUNC_3(VAR_10, VAR_1, VAR_2, 0.0, 0.0, &VAR_7, &VAR_8);
   *VAR_3 = VAR_7;
   *VAR_4 = VAR_8;
   VAR_9 = 0;

finish:
   FUNC_1(&VAR_6);
   return VAR_9;
}
