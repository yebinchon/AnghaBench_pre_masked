
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int aio_workq_t ;
struct TYPE_6__ {int * tqe_prev; } ;
struct TYPE_7__ {TYPE_1__ aio_workq_link; } ;
typedef TYPE_2__ aio_workq_entry ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(aio_workq_entry *VAR_0)
{

 if (VAR_0->aio_workq_link.tqe_prev != ((void*)0)) {
  aio_workq_t VAR_1;


  VAR_1 = FUNC_0(VAR_0);
  FUNC_1(VAR_1);
  if (VAR_0->aio_workq_link.tqe_prev != ((void*)0)) {
   FUNC_2(VAR_1, VAR_0);
   FUNC_3(VAR_1);
   return 1;
  } else {
   FUNC_3(VAR_1);
  }
 }

 return 0;
}
