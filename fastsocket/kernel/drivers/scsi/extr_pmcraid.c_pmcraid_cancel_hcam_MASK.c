
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pmcraid_hostrcb {int * cmd; } ;
struct pmcraid_instance {struct pmcraid_hostrcb ccn; struct pmcraid_hostrcb ldn; } ;
struct pmcraid_cmd {struct pmcraid_instance* drv_inst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pmcraid_cmd*,int *) ;
 int FUNC_1 (struct pmcraid_cmd*,void (*) (struct pmcraid_cmd*),int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(
 struct pmcraid_cmd *VAR_3,
 u8 VAR_4,
 void (*VAR_5) (struct pmcraid_cmd *)
)
{
 struct pmcraid_instance *VAR_6;
 struct pmcraid_hostrcb *VAR_7;

 VAR_6 = VAR_3->drv_inst;
 VAR_7 = (VAR_4 == VAR_0) ?
  &VAR_6->ldn : &VAR_6->ccn;




 if (VAR_7->cmd == ((void*)0))
  return;

 FUNC_0(VAR_3, VAR_7->cmd);




 FUNC_1(VAR_3, VAR_5,
    VAR_1,
    VAR_2);
}
