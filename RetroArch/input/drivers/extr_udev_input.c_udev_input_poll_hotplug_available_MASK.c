
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_monitor {int dummy; } ;
struct pollfd {int events; int revents; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct pollfd*,int,int ) ;
 int FUNC_1 (struct udev_monitor*) ;

__attribute__((used)) static bool FUNC_2(struct udev_monitor *VAR_1)
{
   struct pollfd VAR_2;

   VAR_2.fd = FUNC_1(VAR_1);
   VAR_2.events = VAR_0;
   VAR_2.revents = 0;

   return (FUNC_0(&VAR_2, 1, 0) == 1) && (VAR_2.revents & VAR_0);
}
