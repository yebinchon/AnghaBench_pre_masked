
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ int32_t ;
typedef int VGImageFormat ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_5__ {int pixmap; } ;
struct TYPE_6__ {scalar_t__ type; int const height; TYPE_1__ u; } ;
typedef int GX_CLIENT_STATE_T ;
typedef int GRAPHICS_RESOURCE_TYPE_T ;
typedef TYPE_2__* GRAPHICS_RESOURCE_HANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,void const*,int const,int ,int const,int const,int const,int const) ;
 int FUNC_6 (int *,int const,int ,int const,int const,int const,int const) ;

int32_t FUNC_7(GRAPHICS_RESOURCE_TYPE_T VAR_4,
                         const void *VAR_5,
                         const uint32_t VAR_6,
                         const uint32_t VAR_7,
                         const uint32_t VAR_8,
                         const uint32_t VAR_9,
                         const uint32_t VAR_10,
                         GRAPHICS_RESOURCE_HANDLE VAR_11,
                         const uint32_t VAR_12,
                         const uint32_t VAR_13 )
{
   VCOS_STATUS_T VAR_14;
   VGImageFormat VAR_15;
   int VAR_16;
   GX_CLIENT_STATE_T VAR_17;

   VAR_14 = FUNC_0(VAR_4, &VAR_15, &VAR_16);
   if (VAR_14 != VAR_3)
      return VAR_14;

   FUNC_2(&VAR_17, VAR_11);

   if (VAR_11->type == VAR_0)
   {
      FUNC_5(VAR_11->u.pixmap,
                     VAR_5,
                     VAR_10,
                     VAR_15,
                     VAR_12, VAR_13, VAR_8, VAR_9);
   }
   else if (VAR_11->type == VAR_1)
   {


      FUNC_6((uint8_t*)VAR_5 + VAR_10*(VAR_9-1),
                    -VAR_10,
                    VAR_15,
                    VAR_12, VAR_11->height-VAR_13-VAR_9, VAR_8, VAR_9);
   }
   else
   {
      FUNC_3(0);
   }

   if (FUNC_4() == 0)
      VAR_14 = VAR_3;
   else
   {
      FUNC_3(0);
      VAR_14 = VAR_2;
   }

   FUNC_1(&VAR_17);
   return VAR_14;
}
