
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* aio_workq_t ;
typedef int aio_workq_entry ;
struct TYPE_4__ {scalar_t__ aioq_count; int aioq_entries; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(aio_workq_t VAR_1, aio_workq_entry *VAR_2)
{
 FUNC_0(VAR_1);

 FUNC_1(&VAR_1->aioq_entries, VAR_2, VAR_0);
 if (VAR_1->aioq_count < 0) {
  FUNC_2("Negative count on a queue.\n");
 }
 VAR_1->aioq_count++;
}
