
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {int flags; TYPE_1__* ahw; } ;
struct TYPE_2__ {scalar_t__ op_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int
FUNC_3(struct qlcnic_adapter *VAR_2)
{
 int VAR_3;

 if (!(VAR_2->flags & VAR_0) ||
     VAR_2->ahw->op_mode != VAR_1)
  return 0;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_2);

 return VAR_3;
}
