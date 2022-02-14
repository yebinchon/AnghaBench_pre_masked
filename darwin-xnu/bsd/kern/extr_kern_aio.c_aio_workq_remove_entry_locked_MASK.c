
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* aio_workq_t ;
struct TYPE_8__ {int * tqe_prev; } ;
struct TYPE_10__ {TYPE_1__ aio_workq_link; } ;
typedef TYPE_3__ aio_workq_entry ;
struct TYPE_9__ {scalar_t__ aioq_count; int aioq_entries; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(aio_workq_t VAR_1, aio_workq_entry *VAR_2)
{
 FUNC_0(VAR_1);

 if (VAR_2->aio_workq_link.tqe_prev == ((void*)0)) {
  FUNC_2("Trying to remove an entry from a work queue, but it is not on a queue\n");
 }

 FUNC_1(&VAR_1->aioq_entries, VAR_2, VAR_0);
 VAR_1->aioq_count--;
 VAR_2->aio_workq_link.tqe_prev = ((void*)0);

 if (VAR_1->aioq_count < 0) {
  FUNC_2("Negative count on a queue.\n");
 }
}
