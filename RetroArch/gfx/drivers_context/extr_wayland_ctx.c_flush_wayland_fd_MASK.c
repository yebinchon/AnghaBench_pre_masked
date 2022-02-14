
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pollfd {int events; int revents; int fd; int member_0; } ;
struct TYPE_2__ {int dpy; int fd; } ;
typedef TYPE_1__ input_ctx_wayland_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct pollfd*,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(void *VAR_4)
{
   struct pollfd VAR_5 = {0};
   input_ctx_wayland_data_t *VAR_6 = (input_ctx_wayland_data_t*)VAR_4;

   FUNC_4(VAR_6->dpy);
   FUNC_5(VAR_6->dpy);

   VAR_5.fd = VAR_6->fd;
   VAR_5.events = VAR_2 | VAR_3 | VAR_0 | VAR_1;

   if (FUNC_2(&VAR_5, 1, 0) > 0)
   {
      if (VAR_5.revents & (VAR_0 | VAR_1))
      {
         FUNC_0(VAR_6->fd);
         FUNC_1(1);
      }

      if (VAR_5.revents & VAR_2)
         FUNC_3(VAR_6->dpy);
      if (VAR_5.revents & VAR_3)
         FUNC_5(VAR_6->dpy);
   }
}
