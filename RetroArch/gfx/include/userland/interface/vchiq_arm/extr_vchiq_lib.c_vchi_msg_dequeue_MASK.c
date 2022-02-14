
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int32_t ;
struct TYPE_5__ {scalar_t__ peek_size; int fd; int handle; int peek_buf; } ;
typedef TYPE_1__ VCHI_SERVICE_T ;
typedef int VCHI_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHI_FLAGS_T ;
struct TYPE_6__ {int blocking; void* buf; scalar_t__ bufsize; int handle; } ;
typedef TYPE_2__ VCHIQ_DEQUEUE_MESSAGE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,scalar_t__) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (void*,int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;

int32_t
FUNC_7( VCHI_SERVICE_HANDLE_T VAR_7,
   void *VAR_8,
   uint32_t VAR_9,
   uint32_t *VAR_10,
   VCHI_FLAGS_T VAR_11 )
{
   VCHI_SERVICE_T *VAR_12 = FUNC_1(VAR_7);
   VCHIQ_DEQUEUE_MESSAGE_T VAR_13;
   int VAR_14;

   FUNC_5(VAR_11 == VAR_4 || VAR_11 == VAR_3);

   if (!VAR_12)
      return VAR_1;

   if (VAR_12->peek_size >= 0)
   {
      FUNC_6("vchi_msg_dequeue -> using peek buffer\n");
      if ((uint32_t)VAR_12->peek_size <= VAR_9)
      {
         FUNC_4(VAR_8, VAR_12->peek_buf, VAR_12->peek_size);
         *VAR_10 = VAR_12->peek_size;

         VAR_12->peek_size = -1;
         VAR_14 = 0;
      }
      else
      {
         VAR_14 = -1;
      }
   }
   else
   {
      VAR_13.handle = VAR_12->handle;
      VAR_13.blocking = (VAR_11 == VAR_3);
      VAR_13.bufsize = VAR_9;
      VAR_13.buf = VAR_8;
      FUNC_0(VAR_14, FUNC_3(VAR_12->fd, VAR_2, &VAR_13));
      if (VAR_14 >= 0)
      {
         *VAR_10 = VAR_14;
         VAR_14 = 0;
      }
   }

   if ((VAR_14 < 0) && (VAR_5 != VAR_0))
      FUNC_2(VAR_6, "vchi_msg_dequeue -> %d(%ld)\n", VAR_14, VAR_5);

   return VAR_14;
}
