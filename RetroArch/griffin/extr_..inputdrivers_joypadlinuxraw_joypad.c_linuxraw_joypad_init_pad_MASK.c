
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linuxraw_joypad {char const* fd; char* ident; } ;
struct TYPE_2__ {struct linuxraw_joypad* ptr; } ;
struct epoll_event {TYPE_1__ data; int events; } ;
typedef int input_device_names ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (char*,char*,char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,char const*,struct epoll_event*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (char const*,int ,char*) ;
 int VAR_6 ;
 char const* FUNC_6 (char const*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(const char *VAR_7,
      struct linuxraw_joypad *VAR_8)
{


   if (FUNC_3(VAR_7, VAR_4) < 0)
      return 0;
   if (VAR_8->fd >= 0)
      return 0;

   VAR_8->fd = FUNC_6(VAR_7, VAR_3 | VAR_2);
   *VAR_8->ident = '\0';

   if (VAR_8->fd >= 0)
   {
      struct epoll_event VAR_9;

      if (FUNC_5(VAR_8->fd,
               FUNC_0(sizeof(input_device_names[0])), VAR_8->ident) >= 0)
      {
         FUNC_2("[Device]: Found pad: %s on %s.\n", VAR_8->ident, VAR_7);
      }
      else
         FUNC_1("[Device]: Didn't find ident of %s.\n", VAR_7);

      VAR_9.events = VAR_0;
      VAR_9.data.ptr = VAR_8;

      if (FUNC_4(VAR_6, VAR_1, VAR_8->fd, &VAR_9) < 0)
      {
         FUNC_1("Failed to add FD (%d) to epoll list (%s).\n",
               VAR_8->fd, FUNC_7(VAR_5));
      }
      else
         return 1;
   }

   FUNC_1("[Device]: Failed to open pad %s (error: %s).\n",
         VAR_7, FUNC_7(VAR_5));
   return 0;
}
