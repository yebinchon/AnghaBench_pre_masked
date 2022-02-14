
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ips_driver {int __cpu_turbo_on; scalar_t__ turbo_toggle_allowed; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ips_driver*,int) ;

__attribute__((used)) static void FUNC_1(struct ips_driver *VAR_1)
{

 if (!VAR_1->__cpu_turbo_on)
  return;

 if (VAR_1->turbo_toggle_allowed)
  FUNC_0(VAR_0, VAR_1, 1);

 VAR_1->__cpu_turbo_on = 0;
}
