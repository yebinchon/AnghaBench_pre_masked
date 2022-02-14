
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sa; } ;
struct TYPE_6__ {int type; void* status; int to_addr_len; TYPE_1__ to_addr; int socket; int read_timeout_ms; } ;
typedef TYPE_2__ VC_CONTAINER_NET_T ;



 int VAR_0 ;


 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,void*,int,int ) ;
 int FUNC_1 (int ,void*,size_t,int ,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 void* FUNC_3 () ;

size_t FUNC_4( VC_CONTAINER_NET_T *VAR_6, void *VAR_7, size_t VAR_8 )
{
   int VAR_9 = 0;

   if (!VAR_6)
      return 0;

   if (!VAR_7)
   {
      VAR_6->status = VAR_2;
      return 0;
   }

   VAR_6->status = VAR_5;

   switch (VAR_6->type)
   {
   case 129:
   case 128:

      if (FUNC_2(VAR_6, VAR_6->read_timeout_ms))
      {
         VAR_9 = FUNC_0(VAR_6->socket, VAR_7, (int)VAR_8, 0);
         if (!VAR_9)
            VAR_6->status = VAR_1;
      } else
         VAR_6->status = VAR_4;
      break;

   case 130:
      {


         if (FUNC_2(VAR_6, VAR_6->read_timeout_ms))
         {
            VAR_9 = FUNC_1(VAR_6->socket, VAR_7, VAR_8, 0, &VAR_6->to_addr.sa, &VAR_6->to_addr_len);
            if (!VAR_9)
               VAR_6->status = VAR_1;
         } else
            VAR_6->status = VAR_4;
      }
      break;

   default:
      VAR_6->status = VAR_3;
      VAR_9 = 0;
      break;
   }

   if (VAR_9 == VAR_0)
   {
      VAR_6->status = FUNC_3();
      VAR_9 = 0;
   }

   return (size_t)VAR_9;
}
