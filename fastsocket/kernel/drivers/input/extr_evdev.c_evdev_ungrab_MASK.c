
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_client {int dummy; } ;
struct evdev {int handle; struct evdev_client* grab; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct evdev_client*,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct evdev *VAR_1, struct evdev_client *VAR_2)
{
 if (VAR_1->grab != VAR_2)
  return -VAR_0;

 FUNC_1(VAR_1->grab, ((void*)0));
 FUNC_2();
 FUNC_0(&VAR_1->handle);

 return 0;
}
