
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sa; } ;
struct TYPE_5__ {int type; size_t max_datagram_size; int status; int to_addr_len; TYPE_1__ to_addr; int socket; } ;
typedef TYPE_2__ VC_CONTAINER_NET_T ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void const*,int,int ) ;
 int FUNC_1 (int ,void const*,size_t,int ,int *,int ) ;
 int FUNC_2 () ;

size_t FUNC_3( VC_CONTAINER_NET_T *VAR_4, const void *VAR_5, size_t VAR_6 )
{
   int VAR_7;

   if (!VAR_4)
      return 0;

   if (!VAR_5)
   {
      VAR_4->status = VAR_1;
      return 0;
   }

   VAR_4->status = VAR_3;

   switch (VAR_4->type)
   {
   case 129:
   case 128:

      VAR_7 = FUNC_0(VAR_4->socket, VAR_5, (int)VAR_6, 0);
      break;

   case 130:


      if (VAR_6 > VAR_4->max_datagram_size)
         VAR_6 = VAR_4->max_datagram_size;

      VAR_7 = FUNC_1(VAR_4->socket, VAR_5, VAR_6, 0, &VAR_4->to_addr.sa, VAR_4->to_addr_len);
      break;

   default:
      VAR_4->status = VAR_2;
      VAR_7 = 0;
      break;
   }

   if (VAR_7 == VAR_0)
   {
      VAR_4->status = FUNC_2();
      VAR_7 = 0;
   }

   return (size_t)VAR_7;
}
