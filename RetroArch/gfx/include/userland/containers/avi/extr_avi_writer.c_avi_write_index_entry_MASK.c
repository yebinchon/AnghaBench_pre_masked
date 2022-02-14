
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {TYPE_5__* io; } ;
struct TYPE_12__ {scalar_t__ index_status; TYPE_2__ temp_io; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_13__ {scalar_t__ status; } ;
struct TYPE_9__ {TYPE_4__* module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_2, uint8_t VAR_3,
   uint32_t VAR_4, int VAR_5 )
{
   VC_CONTAINER_MODULE_T *VAR_6 = VAR_2->priv->module;
   uint32_t VAR_7 = VAR_5 ? 0 : VAR_0;

   FUNC_2(VAR_6->temp_io.io, VAR_3);
   FUNC_1(VAR_6->temp_io.io, VAR_4 | VAR_7);

   if (VAR_6->temp_io.io->status != VAR_1)
   {
      VAR_6->index_status = VAR_6->temp_io.io->status;
      FUNC_0(VAR_2, "warning, couldn't store index data, index data will be incorrect");
   }

   return VAR_6->temp_io.io->status;
}
