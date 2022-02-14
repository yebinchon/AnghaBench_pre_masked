
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vc_container_net_status_t ;
struct TYPE_4__ {scalar_t__ socket; } ;
typedef TYPE_1__ VC_CONTAINER_NET_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;

vc_container_net_status_t FUNC_3( VC_CONTAINER_NET_T *VAR_3 )
{
   if (!VAR_3)
      return VAR_1;

   if (VAR_3->socket != VAR_0)
   {
      FUNC_1(VAR_3->socket);
      VAR_3->socket = VAR_0;
   }
   FUNC_0(VAR_3);

   FUNC_2();

   return VAR_2;
}
