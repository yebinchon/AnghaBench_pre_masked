
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int dd_lock; int dependent_devices; } ;
struct dock_dependent_device {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct dock_station *VAR_0,
     struct dock_dependent_device *VAR_1)
{
 FUNC_1(&VAR_0->dd_lock);
 FUNC_0(&VAR_1->list, &VAR_0->dependent_devices);
 FUNC_2(&VAR_0->dd_lock);
}
