
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ gama_wd; scalar_t__ enable; } ;
struct ccdc_config_params_raw {scalar_t__ data_sz; TYPE_1__ alaw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct ccdc_config_params_raw *VAR_3)
{
 if (VAR_3->alaw.enable) {
  if ((VAR_3->alaw.gama_wd > VAR_0) ||
      (VAR_3->alaw.gama_wd < VAR_1) ||
      (VAR_3->alaw.gama_wd < VAR_3->data_sz)) {
   FUNC_0(VAR_2, "\nInvalid data line select");
   return -1;
  }
 }
 return 0;
}
