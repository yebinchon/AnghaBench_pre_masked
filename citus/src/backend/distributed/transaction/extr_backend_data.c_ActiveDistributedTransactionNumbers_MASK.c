
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_11__ {TYPE_2__* allProcs; } ;
struct TYPE_8__ {int transactionNumber; int transactionOriginator; } ;
struct TYPE_10__ {TYPE_1__ transactionId; } ;
struct TYPE_9__ {scalar_t__ pid; } ;
typedef TYPE_2__ PGPROC ;
typedef int List ;
typedef TYPE_3__ BackendData ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_4__* VAR_2 ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int) ;

List *
FUNC_4(void)
{
 List *VAR_3 = VAR_1;
 int VAR_4 = 0;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
 {
  PGPROC *VAR_5 = &VAR_2->allProcs[VAR_4];
  BackendData VAR_6;
  uint64 *VAR_7 = ((void*)0);

  if (VAR_5->pid == 0)
  {

   continue;
  }

  FUNC_0(VAR_5, &VAR_6);

  if (!FUNC_1(&VAR_6))
  {

   continue;
  }

  if (!VAR_6.transactionId.transactionOriginator)
  {

   continue;
  }

  VAR_7 = (uint64 *) FUNC_3(sizeof(uint64));
  *VAR_7 = VAR_6.transactionId.transactionNumber;

  VAR_3 = FUNC_2(VAR_3,
             VAR_7);
 }

 return VAR_3;
}
