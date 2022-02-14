
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_context {TYPE_1__* aic; int refcount; } ;
struct TYPE_2__ {int (* dtor ) (TYPE_1__*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct io_context*) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct io_context*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;

int FUNC_8(struct io_context *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return 1;

 FUNC_0(FUNC_2(&VAR_1->refcount) == 0);

 if (FUNC_1(&VAR_1->refcount)) {
  FUNC_5();
  if (VAR_1->aic && VAR_1->aic->dtor)
   VAR_1->aic->dtor(VAR_1->aic);
  FUNC_3(VAR_1);
  FUNC_6();

  FUNC_4(VAR_0, VAR_1);
  return 1;
 }
 return 0;
}
