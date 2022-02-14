
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef int aio_workq_entry ;
struct TYPE_6__ {int aio_done_count; } ;
struct TYPE_5__ {int p_aio_active_count; int p_aio_doneq; int p_aio_activeq; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(proc_t VAR_2, aio_workq_entry *VAR_3)
{
 FUNC_0(VAR_2);

 FUNC_3(&VAR_2->p_aio_activeq, VAR_3, VAR_1 );
 FUNC_2( &VAR_2->p_aio_doneq, VAR_3, VAR_1);
 VAR_2->p_aio_active_count--;
 FUNC_1(&VAR_0.aio_done_count);
}
