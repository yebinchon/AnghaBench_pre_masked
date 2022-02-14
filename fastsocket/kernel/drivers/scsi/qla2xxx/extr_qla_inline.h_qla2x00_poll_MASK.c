
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsp_que {struct qla_hw_data* hw; } ;
struct qla_hw_data {TYPE_1__* isp_ops; } ;
struct TYPE_2__ {int (* intr_handler ) (int ,struct rsp_que*) ;} ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,struct rsp_que*) ;
 int FUNC_4 (int ,struct rsp_que*) ;

__attribute__((used)) static inline void
FUNC_5(struct rsp_que *VAR_0)
{
 unsigned long VAR_1;
 struct qla_hw_data *VAR_2 = VAR_0->hw;
 FUNC_2(VAR_1);
 if (FUNC_0(VAR_2))
  FUNC_3(0, VAR_0);
 else
  VAR_2->isp_ops->intr_handler(0, VAR_0);
 FUNC_1(VAR_1);
}
