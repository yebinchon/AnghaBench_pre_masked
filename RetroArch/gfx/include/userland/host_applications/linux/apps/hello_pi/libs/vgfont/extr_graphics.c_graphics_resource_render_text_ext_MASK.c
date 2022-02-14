
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_4__ {int const height; } ;
typedef TYPE_1__* GRAPHICS_RESOURCE_HANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int const,int const,int const,int const,int const,int const,char const*,int const,int const) ;

int32_t FUNC_1( GRAPHICS_RESOURCE_HANDLE VAR_2,
                                           const int32_t VAR_3,
                                           const int32_t VAR_4,
                                           const uint32_t VAR_5,
                                           const uint32_t VAR_6,
                                           const uint32_t VAR_7,
                                           const uint32_t VAR_8,
                                           const char *VAR_9,
                                           const uint32_t VAR_10,
                                           const uint32_t VAR_11 )
{






   VCOS_STATUS_T VAR_12 = FUNC_0(
      &VAR_1, VAR_2,
      VAR_3, VAR_2->height-VAR_4-VAR_11, VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10, VAR_11);

   return (VAR_12 == VAR_0) ? 0 : -1;
}
