
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct ql_adapter {TYPE_1__ timer; int ndev; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ql_adapter*,int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_4)
{
 struct ql_adapter *VAR_5 = (struct ql_adapter *)VAR_4;
 u32 VAR_6 = 0;

 VAR_6 = FUNC_3(VAR_5, VAR_1);
 if (FUNC_2(VAR_5->pdev)) {
  FUNC_1(VAR_5, VAR_2, VAR_5->ndev, "EEH STS = 0x%.08x.\n", VAR_6);
  return;
 }

 VAR_5->timer.expires = VAR_3 + (5*VAR_0);
 FUNC_0(&VAR_5->timer);
}
