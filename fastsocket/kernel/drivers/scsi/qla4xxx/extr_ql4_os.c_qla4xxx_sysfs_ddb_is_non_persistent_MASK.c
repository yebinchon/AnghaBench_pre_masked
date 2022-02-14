
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_bus_flash_session {scalar_t__ flash_state; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct iscsi_bus_flash_session* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, void *VAR_2)
{
 struct iscsi_bus_flash_session *VAR_3;

 if (!FUNC_1(VAR_1, ((void*)0)))
  return 0;

 VAR_3 = FUNC_0(VAR_1);

 return (VAR_3->flash_state == VAR_0);
}
