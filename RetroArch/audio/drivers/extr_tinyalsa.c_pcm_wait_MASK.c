
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pollfd {int events; int revents; int fd; } ;
struct pcm {TYPE_1__* mmap_status; TYPE_2__* sync_ptr; int fd; } ;
struct TYPE_4__ {scalar_t__ flags; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (struct pollfd*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pcm *VAR_11, int VAR_12)
{
   struct pollfd VAR_13;

   VAR_13.fd = VAR_11->fd;
   VAR_13.events = VAR_6 | VAR_8 | VAR_5 | VAR_7;

   do
   {

      int VAR_14 = FUNC_1(&VAR_13, 1, VAR_12);
      if (VAR_14 < 0)
         return -VAR_10;


      if (VAR_14 == 0)
         return 0;


      if (VAR_10 == -VAR_0)
         continue;


      if (VAR_13.revents & (VAR_5 | VAR_7))
      {
         int VAR_15 = -1;

         if (VAR_11->sync_ptr)
         {
            VAR_11->sync_ptr->flags = 0;
            if (FUNC_0(VAR_11->fd, VAR_9, VAR_11->sync_ptr) >= 0)
               VAR_15 = VAR_11->mmap_status->state;
         }

         switch (VAR_15)
         {
            case 128:
               return -VAR_3;
            case 129:
               return -VAR_4;
            case 130:
               return -VAR_2;
            default:
               break;
         }

         return -VAR_1;
      }

   } while (!(VAR_13.revents & (VAR_6 | VAR_8)));

   return 1;
}
