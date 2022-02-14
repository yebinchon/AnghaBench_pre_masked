
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_cq {int wait; int refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct c2_cq *VAR_0)
{
 if (FUNC_0(&VAR_0->refcount))
  FUNC_1(&VAR_0->wait);
}
