
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_bus_flash_session {struct iscsi_bus_flash_session* portal_type; struct iscsi_bus_flash_session* targetalias; struct iscsi_bus_flash_session* targetname; } ;
struct device {int dummy; } ;


 struct iscsi_bus_flash_session* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iscsi_bus_flash_session*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct iscsi_bus_flash_session *VAR_1 =
      FUNC_0(VAR_0);

 FUNC_1(VAR_1->targetname);
 FUNC_1(VAR_1->targetalias);
 FUNC_1(VAR_1->portal_type);
 FUNC_1(VAR_1);
}
