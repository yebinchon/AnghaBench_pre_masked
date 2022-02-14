
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_parms {int number; int done; int wait_atomic; scalar_t__ used_wait_atomic; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1)
{
 struct alloc_parms *VAR_2 = VAR_0;

 VAR_2->number = VAR_1;
 if (VAR_2->used_wait_atomic)
  FUNC_0(&VAR_2->wait_atomic, 0);
 else
  FUNC_1(&VAR_2->done);
}
