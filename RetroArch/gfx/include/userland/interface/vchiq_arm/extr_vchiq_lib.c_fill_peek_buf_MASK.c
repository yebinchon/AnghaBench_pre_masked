
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int peek_size; int fd; scalar_t__ peek_buf; int handle; } ;
typedef TYPE_1__ VCHI_SERVICE_T ;
typedef scalar_t__ VCHI_FLAGS_T ;
struct TYPE_6__ {int blocking; scalar_t__ buf; int bufsize; int handle; } ;
typedef TYPE_2__ VCHIQ_DEQUEUE_MESSAGE_T ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(VCHI_SERVICE_T *VAR_4,
   VCHI_FLAGS_T VAR_5)
{
   VCHIQ_DEQUEUE_MESSAGE_T VAR_6;
   int VAR_7 = 0;

   FUNC_3(VAR_5 == VAR_3 || VAR_5 == VAR_2);

   if (VAR_4->peek_size < 0)
   {
      if (!VAR_4->peek_buf)
         VAR_4->peek_buf = FUNC_1();

      if (VAR_4->peek_buf)
      {
         VAR_6.handle = VAR_4->handle;
         VAR_6.blocking = (VAR_5 == VAR_2);
         VAR_6.bufsize = VAR_0;
         VAR_6.buf = VAR_4->peek_buf;

         FUNC_0(VAR_7, FUNC_2(VAR_4->fd, VAR_1, &VAR_6));

         if (VAR_7 >= 0)
         {
            VAR_4->peek_size = VAR_7;
            VAR_7 = 0;
         }
         else
         {
            VAR_7 = -1;
         }
      }
      else
      {
         VAR_7 = -1;
      }
   }

   return VAR_7;
}
