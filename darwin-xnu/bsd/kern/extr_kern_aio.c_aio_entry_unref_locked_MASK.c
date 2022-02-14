
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ aio_refcount; } ;
typedef TYPE_1__ aio_workq_entry ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(aio_workq_entry *VAR_0)
{
 FUNC_0(VAR_0);

 VAR_0->aio_refcount--;
 if (VAR_0->aio_refcount < 0) {
  FUNC_1("AIO workq entry with a negative refcount.\n");
 }
}
