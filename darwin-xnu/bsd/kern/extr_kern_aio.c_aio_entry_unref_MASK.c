
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ aio_refcount; int flags; } ;
typedef TYPE_1__ aio_workq_entry ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(aio_workq_entry *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);

 if ((VAR_1->aio_refcount == 0) && ((VAR_1->flags & VAR_0) != 0)) {
  FUNC_1(VAR_1);
  FUNC_3(VAR_1);
 } else {
  FUNC_1(VAR_1);
 }

 return;
}
