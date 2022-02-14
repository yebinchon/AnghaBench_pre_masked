
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cq_context; int (* comp_handler ) (TYPE_1__*,int ) ;} ;
struct ehca_cq {int cb_lock; TYPE_1__ ib_cq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct ehca_cq *VAR_0)
{
 if (!VAR_0->ib_cq.comp_handler)
  return;

 FUNC_0(&VAR_0->cb_lock);
 VAR_0->ib_cq.comp_handler(&VAR_0->ib_cq, VAR_0->ib_cq.cq_context);
 FUNC_1(&VAR_0->cb_lock);

 return;
}
