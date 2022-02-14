
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {unsigned int tracks_num; TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_9__ {TYPE_5__* io; } ;
struct TYPE_11__ {TYPE_2__ temp_io; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_12__ {int status; } ;
struct TYPE_8__ {TYPE_4__* module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 unsigned int FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_1,
   unsigned int *VAR_2, uint32_t *VAR_3 )
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_1->priv->module;
   uint32_t VAR_5;
   uint8_t VAR_6;

   VAR_6 = FUNC_1(VAR_4->temp_io.io);
   VAR_5 = FUNC_0(VAR_4->temp_io.io);


   if (VAR_6 >= VAR_1->tracks_num) return VAR_0;

   *VAR_2 = VAR_6;
   *VAR_3 = VAR_5;

   return VAR_4->temp_io.io->status;
}
