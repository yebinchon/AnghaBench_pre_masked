
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xpc_partition_uv {int cached_activate_gru_mq_desc_mutex; int * cached_activate_gru_mq_desc; int flags_lock; int flags; } ;
struct TYPE_3__ {struct xpc_partition_uv uv; } ;
struct TYPE_4__ {TYPE_1__ sn; } ;


 int VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void
FUNC_5(void)
{
 short VAR_3;
 struct xpc_partition_uv *VAR_4;
 unsigned long VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = &VAR_2[VAR_3].sn.uv;

  if (VAR_4->cached_activate_gru_mq_desc != ((void*)0)) {
   FUNC_1(&VAR_4->cached_activate_gru_mq_desc_mutex);
   FUNC_3(&VAR_4->flags_lock, VAR_5);
   VAR_4->flags &= ~VAR_0;
   FUNC_4(&VAR_4->flags_lock, VAR_5);
   FUNC_0(VAR_4->cached_activate_gru_mq_desc);
   VAR_4->cached_activate_gru_mq_desc = ((void*)0);
   FUNC_2(&VAR_4->
         cached_activate_gru_mq_desc_mutex);
  }
 }
}
