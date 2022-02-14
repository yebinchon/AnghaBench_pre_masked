
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ enable; } ;
struct ccdc_config_params_raw {scalar_t__ data_sz; TYPE_1__ alaw; } ;
struct TYPE_7__ {unsigned int width; } ;
struct TYPE_10__ {TYPE_2__ win; struct ccdc_config_params_raw config_params; } ;
struct TYPE_8__ {int width; } ;
struct TYPE_9__ {TYPE_3__ win; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static unsigned int FUNC_1(void)
{
 struct ccdc_config_params_raw *VAR_5 =
  &VAR_2.config_params;
 unsigned int VAR_6;

 if (VAR_4 == VAR_1) {
  if ((VAR_5->alaw.enable) ||
      (VAR_5->data_sz == VAR_0))
   VAR_6 = VAR_2.win.width;
  else
   VAR_6 = VAR_2.win.width * 2;
 } else
  VAR_6 = VAR_3.win.width * 2;
 return FUNC_0(VAR_6, 32);
}
