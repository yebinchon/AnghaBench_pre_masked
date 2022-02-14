
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_registration {int mutex; scalar_t__ idle_limit; scalar_t__ assigned_limit; scalar_t__ entry_size; scalar_t__ nentries; int * key; int * func; } ;
struct TYPE_2__ {int (* disconnect ) (int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_1 ;
 struct xpc_registration* VAR_2 ;

void
FUNC_4(int VAR_3)
{
 struct xpc_registration *VAR_4;

 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_0);

 VAR_4 = &VAR_2[VAR_3];






 FUNC_1(&VAR_4->mutex);


 if (VAR_4->func == ((void*)0)) {
  FUNC_2(&VAR_4->mutex);
  return;
 }


 VAR_4->func = ((void*)0);
 VAR_4->key = ((void*)0);
 VAR_4->nentries = 0;
 VAR_4->entry_size = 0;
 VAR_4->assigned_limit = 0;
 VAR_4->idle_limit = 0;

 VAR_1.disconnect(VAR_3);

 FUNC_2(&VAR_4->mutex);

 return;
}
