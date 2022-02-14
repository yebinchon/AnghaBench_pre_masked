
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_context {int refcount; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct io_context*) ;

void FUNC_4(struct io_context **VAR_0, struct io_context **VAR_1)
{
 struct io_context *VAR_2 = *VAR_1;
 struct io_context *VAR_3 = *VAR_0;

 if (VAR_2) {
  FUNC_0(FUNC_2(&VAR_2->refcount) == 0);
  FUNC_1(&VAR_2->refcount);
  FUNC_3(VAR_3);
  *VAR_0 = VAR_2;
 }
}
