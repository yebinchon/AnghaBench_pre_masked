
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int status; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*,int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct iwl_trans *VAR_5)
{
 struct iwl_trans_pcie *VAR_6 = FUNC_1(VAR_5);
 FUNC_0(VAR_5, "Stop card, put in low power state\n");

 FUNC_2(VAR_4, &VAR_6->status);


 FUNC_4(VAR_5);


 FUNC_5(VAR_5, VAR_2, VAR_3);

 FUNC_6(10);





 FUNC_3(VAR_5, VAR_0,
        VAR_1);
}
