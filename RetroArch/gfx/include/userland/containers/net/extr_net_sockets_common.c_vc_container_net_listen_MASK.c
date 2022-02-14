
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vc_container_net_status_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ type; int status; int socket; } ;
typedef TYPE_1__ VC_CONTAINER_NET_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

vc_container_net_status_t FUNC_2( VC_CONTAINER_NET_T *VAR_5, uint32_t VAR_6 )
{
   if (!VAR_5)
      return VAR_2;

   VAR_5->status = VAR_4;

   if (VAR_5->type == VAR_1)
   {
      if (FUNC_0(VAR_5->socket, VAR_6) == VAR_0)
         VAR_5->status = FUNC_1();
   } else {
      VAR_5->status = VAR_3;
   }

   return VAR_5->status;
}
