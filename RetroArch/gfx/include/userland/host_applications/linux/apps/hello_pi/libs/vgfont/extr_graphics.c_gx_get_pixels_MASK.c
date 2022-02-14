
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VCOS_STATUS_T ;
typedef int GX_CLIENT_STATE_T ;
typedef int GRAPHICS_RESOURCE_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,void**,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const) ;

VCOS_STATUS_T FUNC_3(const GRAPHICS_RESOURCE_HANDLE VAR_2, void **VAR_3)
{
   VCOS_STATUS_T VAR_4 = VAR_1;
   GX_CLIENT_STATE_T VAR_5;
   FUNC_2(&VAR_5, VAR_2);


   VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);

   FUNC_1(&VAR_5);
   return VAR_4;
}
