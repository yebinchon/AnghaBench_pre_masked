
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int ndev; } ;
struct mbox_params {int out_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (struct ql_adapter*,struct mbox_params*) ;

__attribute__((used)) static int FUNC_2(struct ql_adapter *VAR_1, struct mbox_params *VAR_2)
{
 int VAR_3;

 VAR_2->out_count = 1;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_1, VAR_0, VAR_1->ndev, "SFP out AEN broken!\n");
 else
  FUNC_0(VAR_1, VAR_0, VAR_1->ndev, "SFP removal detected.\n");

 return VAR_3;
}
