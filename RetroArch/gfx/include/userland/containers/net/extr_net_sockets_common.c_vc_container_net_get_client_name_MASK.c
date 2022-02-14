
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vc_container_net_status_t ;
struct TYPE_4__ {int sa; } ;
struct TYPE_5__ {scalar_t__ socket; int status; int to_addr_len; TYPE_1__ to_addr; } ;
typedef TYPE_2__ VC_CONTAINER_NET_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*,size_t,int *,int ,int ) ;
 int FUNC_1 (int) ;

vc_container_net_status_t FUNC_2( VC_CONTAINER_NET_T *VAR_5, char *VAR_6, size_t VAR_7 )
{
   int VAR_8;

   if (!VAR_5)
      return VAR_2;

   if (VAR_5->socket == VAR_0)
      VAR_5->status = VAR_3;
   else if (!VAR_6 || !VAR_7)
      VAR_5->status = VAR_1;
   else if ((VAR_8 = FUNC_0(&VAR_5->to_addr.sa, VAR_5->to_addr_len, VAR_6, VAR_7, ((void*)0), 0, 0)) != 0)
      VAR_5->status = FUNC_1(VAR_8);
   else
      VAR_5->status = VAR_4;

   return VAR_5->status;
}
