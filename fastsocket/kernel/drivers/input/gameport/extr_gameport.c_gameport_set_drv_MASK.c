
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport_driver {int dummy; } ;
struct gameport {int drv_mutex; struct gameport_driver* drv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gameport *VAR_0, struct gameport_driver *VAR_1)
{
 FUNC_0(&VAR_0->drv_mutex);
 VAR_0->drv = VAR_1;
 FUNC_1(&VAR_0->drv_mutex);
}
