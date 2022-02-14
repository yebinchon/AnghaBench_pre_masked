
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ref_count; int mutex; int objects; } ;
typedef TYPE_1__ VG_CLIENT_SHARED_STATE_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

void FUNC_5(VG_CLIENT_SHARED_STATE_T *VAR_1)
{
   FUNC_4(VAR_1->ref_count == 0);
   FUNC_1(&VAR_1->objects, VAR_0, ((void*)0));
   FUNC_2(&VAR_1->objects);
   FUNC_3(&VAR_1->mutex);
   FUNC_0(VAR_1);
}
