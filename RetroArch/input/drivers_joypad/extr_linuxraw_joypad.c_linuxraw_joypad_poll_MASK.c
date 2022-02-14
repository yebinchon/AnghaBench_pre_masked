
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
struct linuxraw_joypad {int dummy; } ;
struct inotify_event {scalar_t__ name; int mask; scalar_t__ len; } ;
struct TYPE_5__ {scalar_t__ ptr; } ;
struct epoll_event {TYPE_1__ data; } ;
typedef int path ;
struct TYPE_7__ {int ident; } ;
struct TYPE_6__ {int fd; char* ident; int axes; scalar_t__ buttons; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct epoll_event*,int,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int *,int ,unsigned int,int ,int ) ;
 int FUNC_5 (unsigned int,char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_4__ VAR_11 ;
 scalar_t__ FUNC_6 (char*,TYPE_2__*) ;
 int FUNC_7 (unsigned int) ;
 TYPE_2__* VAR_12 ;
 int FUNC_8 (struct linuxraw_joypad*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,char*,size_t) ;
 int FUNC_11 (char*,int,char*,scalar_t__) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (scalar_t__,char*) ;
 unsigned int FUNC_14 (scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_15(void)
{
   int VAR_13, VAR_14;
   struct epoll_event VAR_15[VAR_4 + 1];

retry:
   VAR_14 = FUNC_2(VAR_8, VAR_15, VAR_4 + 1, 0);
   if (VAR_14 < 0 && VAR_7 == VAR_0)
      goto retry;

   for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
   {
      struct linuxraw_joypad *VAR_16 = (struct linuxraw_joypad*)
         VAR_15[VAR_13].data.ptr;

      if (VAR_16)
         FUNC_8(VAR_16);
      else
      {

         int VAR_17, VAR_18;
         size_t VAR_19 = sizeof(struct inotify_event) + VAR_5 + 1;
         uint8_t *VAR_20 = (uint8_t*)FUNC_0(1, VAR_19);

         while ((VAR_18 = FUNC_10(VAR_10, VAR_20, VAR_19)) >= 0)
         {
            struct inotify_event *VAR_21 = (struct inotify_event*)&VAR_20[0];

            VAR_20[VAR_18-1] = '\0';



            for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17 += VAR_21->len + sizeof(struct inotify_event))
            {
               unsigned VAR_22;

               VAR_21 = (struct inotify_event*)&VAR_20[VAR_17];

               if (FUNC_13(VAR_21->name, "js") != VAR_21->name)
                  continue;

               VAR_22 = FUNC_14(VAR_21->name + 2, ((void*)0), 0);
               if (VAR_22 >= VAR_4)
                  continue;

               if (VAR_21->mask & VAR_3)
               {
                  if (VAR_12[VAR_22].fd >= 0)
                  {
                     if (VAR_9)
                        FUNC_5(VAR_22,
                              VAR_12[VAR_22].ident);

                     FUNC_1(VAR_12[VAR_22].fd);
                     VAR_12[VAR_22].buttons = 0;
                     FUNC_9(VAR_12[VAR_22].axes, 0,
                           sizeof(VAR_12[VAR_22].axes));
                     VAR_12[VAR_22].fd = -1;
                     *VAR_12[VAR_22].ident = '\0';

                     FUNC_4(
                           ((void*)0),
                           ((void*)0),
                           FUNC_7(VAR_22),
                           VAR_22,
                           0,
                           0);
                  }
               }


               else if (VAR_21->mask & (VAR_2 | VAR_1))
               {
                  char VAR_23[VAR_6];

                  VAR_23[0] = '\0';

                  FUNC_11(VAR_23, sizeof(VAR_23), "/dev/input/%s", VAR_21->name);

                  if ( !FUNC_12(VAR_12[VAR_22].ident)
                        && FUNC_6(VAR_23, &VAR_12[VAR_22]))
                     FUNC_4(
                           VAR_12[VAR_22].ident,
                           ((void*)0),
                           VAR_11.ident,
                           VAR_22,
                           0,
                           0);
               }
            }
         }

         FUNC_3(VAR_20);
      }
   }
}
