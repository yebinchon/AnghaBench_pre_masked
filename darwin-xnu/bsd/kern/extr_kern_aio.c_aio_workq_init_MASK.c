
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* aio_workq_t ;
struct TYPE_3__ {int aioq_waitq; int aioq_mtx; scalar_t__ aioq_count; int aioq_entries; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(aio_workq_t VAR_3)
{
 FUNC_0(&VAR_3->aioq_entries);
 VAR_3->aioq_count = 0;
 FUNC_1(&VAR_3->aioq_mtx, VAR_2, VAR_1);
 FUNC_2(&VAR_3->aioq_waitq, VAR_0);
}
