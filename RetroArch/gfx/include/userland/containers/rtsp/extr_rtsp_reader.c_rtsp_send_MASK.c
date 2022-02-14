
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {char* comms_buffer; int uri_has_network_info; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_9__ {int status; } ;
struct TYPE_6__ {TYPE_4__* io; TYPE_3__* module; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,char const*,scalar_t__) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;
   uint32_t VAR_3;
   uint32_t VAR_4;
   const char *VAR_5 = VAR_2->comms_buffer;


   if (!VAR_2->uri_has_network_info)
      return VAR_0;

   VAR_3 = FUNC_0(VAR_5);

   while (VAR_3)
   {
      VAR_4 = FUNC_1(VAR_1->priv->io, VAR_5, VAR_3);
      if (!VAR_4)
         break;
      VAR_3 -= VAR_4;
      VAR_5 += VAR_4;
   }

   return VAR_1->priv->io->status;
}
