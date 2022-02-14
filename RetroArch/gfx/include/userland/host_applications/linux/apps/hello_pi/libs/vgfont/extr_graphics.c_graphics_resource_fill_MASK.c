
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int32_t ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_5__ {scalar_t__ height; } ;
typedef int GX_CLIENT_STATE_T ;
typedef TYPE_1__* GRAPHICS_RESOURCE_HANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

int32_t FUNC_3(GRAPHICS_RESOURCE_HANDLE VAR_1,
                               uint32_t VAR_2,
                               uint32_t VAR_3,
                               uint32_t VAR_4,
                               uint32_t VAR_5,
                               uint32_t VAR_6 )
{
   GX_CLIENT_STATE_T VAR_7;
   FUNC_2(&VAR_7, VAR_1);

   VCOS_STATUS_T VAR_8 = FUNC_0(
      VAR_1,
      VAR_2, VAR_1->height-VAR_3-VAR_5,
      VAR_4, VAR_5,
      VAR_6);

   FUNC_1(&VAR_7);

   return VAR_8 == VAR_0 ? 0 : -1;
}
