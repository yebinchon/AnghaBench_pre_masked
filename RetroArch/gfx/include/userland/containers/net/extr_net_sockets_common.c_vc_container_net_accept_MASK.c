
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vc_container_net_status_t ;
struct TYPE_9__ {int sa; } ;
struct TYPE_8__ {scalar_t__ type; scalar_t__ status; scalar_t__ socket; int read_timeout_ms; int max_datagram_size; int to_addr_len; TYPE_5__ to_addr; } ;
typedef TYPE_1__ VC_CONTAINER_NET_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;

vc_container_net_status_t FUNC_8( VC_CONTAINER_NET_T *VAR_9, VC_CONTAINER_NET_T **VAR_10 )
{
   VC_CONTAINER_NET_T *VAR_11 = ((void*)0);

   if (!VAR_9)
      return VAR_5;

   if (!VAR_10)
      return VAR_4;

   *VAR_10 = ((void*)0);

   if (VAR_9->type != VAR_3)
   {
      VAR_9->status = VAR_6;
      goto error;
   }

   VAR_11 = (VC_CONTAINER_NET_T *)FUNC_2(sizeof(VC_CONTAINER_NET_T));
   if (!VAR_11)
   {
      VAR_9->status = VAR_7;
      goto error;
   }


   FUNC_4(VAR_11, 0, sizeof(*VAR_11));
   FUNC_3(&VAR_11->to_addr, &VAR_9->to_addr, VAR_9->to_addr_len);
   VAR_11->to_addr_len = VAR_9->to_addr_len;

   VAR_11->socket = FUNC_0(VAR_9->socket, &VAR_11->to_addr.sa, &VAR_11->to_addr_len);

   if (VAR_11->socket == VAR_1)
   {
      VAR_9->status = FUNC_6();
      goto error;
   }


   VAR_9->status = FUNC_5();
   if (VAR_9->status != VAR_8)
      goto error;

   VAR_11->type = VAR_2;
   VAR_11->max_datagram_size = FUNC_7(VAR_11->socket);
   VAR_11->read_timeout_ms = VAR_0;
   VAR_11->status = VAR_8;

   *VAR_10 = VAR_11;
   return VAR_8;

error:
   if (VAR_11)
      FUNC_1(VAR_11);
   return VAR_9->status;
}
