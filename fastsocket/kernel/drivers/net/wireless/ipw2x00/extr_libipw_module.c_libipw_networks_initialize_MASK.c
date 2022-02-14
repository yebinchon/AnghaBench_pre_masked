
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct libipw_device {int network_free_list; TYPE_1__** networks; int network_list; } ;
struct TYPE_2__ {int list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct libipw_device *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->network_free_list);
 FUNC_0(&VAR_1->network_list);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(&VAR_1->networks[VAR_2]->list,
         &VAR_1->network_free_list);
}
