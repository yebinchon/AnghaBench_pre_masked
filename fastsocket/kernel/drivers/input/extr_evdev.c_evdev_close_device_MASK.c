
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev {int mutex; int handle; int open; scalar_t__ exist; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct evdev *VAR_0)
{
 FUNC_1(&VAR_0->mutex);

 if (VAR_0->exist && !--VAR_0->open)
  FUNC_0(&VAR_0->handle);

 FUNC_2(&VAR_0->mutex);
}
