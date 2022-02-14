
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_context {int lock; int * aic; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct io_context *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 if (VAR_0->aic)
  FUNC_0(VAR_0->aic);
 VAR_0->aic = ((void*)0);
 FUNC_2(&VAR_0->lock);
}
