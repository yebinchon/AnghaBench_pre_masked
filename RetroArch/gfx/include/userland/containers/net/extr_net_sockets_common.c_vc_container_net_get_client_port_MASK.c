
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vc_container_net_status_t ;
struct TYPE_8__ {int sin6_port; } ;
struct TYPE_7__ {int sin_port; } ;
struct TYPE_10__ {int sa_family; } ;
struct TYPE_9__ {TYPE_2__ in6; TYPE_1__ in; TYPE_4__ sa; } ;
struct TYPE_11__ {scalar_t__ socket; int status; TYPE_3__ to_addr; } ;
typedef TYPE_5__ VC_CONTAINER_NET_T ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short FUNC_0 (int ) ;

vc_container_net_status_t FUNC_1( VC_CONTAINER_NET_T *VAR_6 , unsigned short *VAR_7 )
{
   if (!VAR_6)
      return VAR_3;

   if (VAR_6->socket == VAR_0)
      VAR_6->status = VAR_4;
   else if (!VAR_7)
      VAR_6->status = VAR_2;
   else
   {
      VAR_6->status = VAR_5;
      switch (VAR_6->to_addr.sa.sa_family)
      {
      case 129:
         *VAR_7 = FUNC_0(VAR_6->to_addr.in.sin_port);
         break;
      case 128:
         *VAR_7 = FUNC_0(VAR_6->to_addr.in6.sin6_port);
         break;
      default:

         VAR_6->status = VAR_1;
      }
   }

   return VAR_6->status;
}
