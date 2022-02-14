
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ in_evdev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 in_evdev_t *VAR_1 = VAR_0;
 if (VAR_1 == ((void*)0))
  return;
 FUNC_0(VAR_1->fd);
 FUNC_1(VAR_1);
}
