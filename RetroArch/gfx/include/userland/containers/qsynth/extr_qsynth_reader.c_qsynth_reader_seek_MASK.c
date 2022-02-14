
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ duration; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef scalar_t__ VC_CONTAINER_SEEK_MODE_T ;
typedef int VC_CONTAINER_SEEK_FLAGS_T ;
struct TYPE_7__ {int seek; scalar_t__ timestamp; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_5__ {TYPE_3__* module; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_3,
                                              int64_t *VAR_4,
                                              VC_CONTAINER_SEEK_MODE_T VAR_5,
                                              VC_CONTAINER_SEEK_FLAGS_T VAR_6)
{
   VC_CONTAINER_MODULE_T *VAR_7 = VAR_3->priv->module;
   FUNC_0(VAR_6);

   if (VAR_5 != VAR_1)
      return VAR_0;

   if(*VAR_4 < 0)
      *VAR_4 = 0;
   else if(*VAR_4 > VAR_3->duration)
      *VAR_4 = VAR_3->duration;

   VAR_7->timestamp = *VAR_4;
   VAR_7->seek = 1;

   return VAR_2;
}
