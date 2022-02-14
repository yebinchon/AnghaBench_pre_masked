
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linuxraw_joypad {int fd; int ident; } ;
struct TYPE_2__ {int * ptr; } ;
struct epoll_event {TYPE_1__ data; int events; } ;
typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,scalar_t__,struct epoll_event*) ;
 int VAR_10 ;
 int FUNC_3 (scalar_t__,int ,...) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int *,char*,unsigned int,int ,int ) ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_7 (char*,struct linuxraw_joypad*) ;
 int * VAR_15 ;
 int FUNC_8 (struct linuxraw_joypad*) ;
 int FUNC_9 (char*,int,char*,unsigned int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static bool FUNC_11(void *VAR_16)
{
   unsigned VAR_17;
   int VAR_18 = FUNC_1(32);

   if (VAR_18 < 0)
      return 0;

   VAR_12 = VAR_18;

   for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++)
   {
      char VAR_19[VAR_9];
      struct linuxraw_joypad *VAR_20 = (struct linuxraw_joypad*)&VAR_15[VAR_17];

      VAR_19[0] = '\0';

      VAR_20->fd = -1;
      VAR_20->ident = VAR_11[VAR_17];

      FUNC_9(VAR_19, sizeof(VAR_19), "/dev/input/js%u", VAR_17);

      FUNC_6(
            VAR_20->ident,
            ((void*)0),
            "linuxraw",
            VAR_17,
            0,
            0);

      if (FUNC_7(VAR_19, VAR_20))
         FUNC_8(VAR_20);
   }

   VAR_14 = FUNC_5();

   if (VAR_14 >= 0)
   {
      struct epoll_event VAR_21;

      FUNC_3(VAR_14, VAR_3, FUNC_3(VAR_14, VAR_2) | VAR_8);
      FUNC_4(VAR_14, "/dev/input", VAR_6 | VAR_5 | VAR_4);

      VAR_21.events = VAR_0;
      VAR_21.data.ptr = ((void*)0);


      if (FUNC_2(VAR_12, VAR_1, VAR_14, &VAR_21) < 0)
      {
         FUNC_0("Failed to add FD (%d) to epoll list (%s).\n",
               VAR_14, FUNC_10(VAR_10));
      }
   }

   VAR_13 = 1;

   return 1;
}
