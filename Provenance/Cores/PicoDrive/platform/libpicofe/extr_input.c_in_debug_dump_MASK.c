
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * name; int * binds; scalar_t__ probed; int drv_id; } ;
typedef TYPE_1__ in_dev_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(void)
{
 int VAR_2;

 FUNC_0("# drv probed binds name\n");
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  in_dev_t *VAR_3 = &VAR_1[VAR_2];
  if (!VAR_3->probed && VAR_3->name == ((void*)0) && VAR_3->binds == ((void*)0))
   continue;
  FUNC_0("%d %3d %6c %5c %s\n", VAR_2, VAR_3->drv_id, VAR_3->probed ? 'y' : 'n',
   VAR_3->binds ? 'y' : 'n', VAR_3->name);
 }
}
