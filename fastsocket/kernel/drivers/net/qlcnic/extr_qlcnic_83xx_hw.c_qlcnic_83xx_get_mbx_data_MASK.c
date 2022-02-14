
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; int * arg; } ;
struct qlcnic_cmd_args {TYPE_1__ rsp; } ;
struct qlcnic_adapter {int ahw; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct qlcnic_adapter *VAR_0,
         struct qlcnic_cmd_args *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->rsp.num; VAR_2++)
  VAR_1->rsp.arg[VAR_2] = FUNC_1(FUNC_0(VAR_0->ahw, VAR_2));
}
