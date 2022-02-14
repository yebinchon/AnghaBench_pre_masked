
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {int fp_num; scalar_t__ fpc_table_addr; } ;
struct ccdc_config_params_raw {TYPE_1__ fault_pxl; } ;
struct TYPE_4__ {struct ccdc_config_params_raw config_params; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{
 struct ccdc_config_params_raw *VAR_3 =
  &VAR_1.config_params;
 unsigned int *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 VAR_4 = (unsigned int *)VAR_3->fault_pxl.fpc_table_addr;

 if (VAR_4 != ((void*)0)) {
  VAR_5 = (unsigned int *)
      FUNC_2((unsigned long)VAR_4);
  FUNC_0((unsigned long)VAR_5,
      FUNC_1(VAR_3->fault_pxl.fp_num *
      VAR_0));
 }
 return 0;
}
