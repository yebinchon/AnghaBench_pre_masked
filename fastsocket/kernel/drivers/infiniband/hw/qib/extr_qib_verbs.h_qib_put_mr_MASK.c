
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_mregion {int list; int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct qib_mregion *VAR_1)
{
 if (FUNC_2(FUNC_0(&VAR_1->refcount)))
  FUNC_1(&VAR_1->list, VAR_0);
}
