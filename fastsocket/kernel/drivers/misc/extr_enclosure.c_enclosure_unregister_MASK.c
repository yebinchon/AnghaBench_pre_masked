
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enclosure_device {int components; int edev; int * cb; TYPE_1__* component; int node; } ;
struct TYPE_2__ {int number; int cdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct enclosure_device *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_0);
 FUNC_1(&VAR_2->node);
 FUNC_3(&VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2->components; VAR_3++)
  if (VAR_2->component[VAR_3].number != -1)
   FUNC_0(&VAR_2->component[VAR_3].cdev);


 VAR_2->cb = &VAR_1;
 FUNC_0(&VAR_2->edev);
}
