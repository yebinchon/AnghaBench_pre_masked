
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qla_hw_data {int dummy; } ;
struct fc_port {TYPE_1__* vha; } ;
struct TYPE_2__ {struct qla_hw_data* hw; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,struct fc_port*,unsigned int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct fc_port*,int ,unsigned int,int) ;

int
FUNC_3(struct fc_port *VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_2->vha->hw;

 if ((VAR_1) && FUNC_0(VAR_5))
  return FUNC_2(VAR_2, VAR_0, VAR_3, VAR_4);

 return FUNC_1("Target", VAR_0, VAR_2, VAR_3, VAR_4);
}
