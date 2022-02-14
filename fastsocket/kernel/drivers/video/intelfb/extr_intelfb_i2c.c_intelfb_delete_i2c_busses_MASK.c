
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intelfb_info {TYPE_3__* output; } ;
struct TYPE_5__ {int * dinfo; int adapter; } ;
struct TYPE_4__ {int * dinfo; int adapter; } ;
struct TYPE_6__ {TYPE_2__ ddc_bus; TYPE_1__ i2c_bus; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct intelfb_info *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->output[VAR_2].i2c_bus.dinfo) {
   FUNC_0(&VAR_1->output[VAR_2].i2c_bus.adapter);
   VAR_1->output[VAR_2].i2c_bus.dinfo = ((void*)0);
  }
  if (VAR_1->output[VAR_2].ddc_bus.dinfo) {
   FUNC_0(&VAR_1->output[VAR_2].ddc_bus.adapter);
   VAR_1->output[VAR_2].ddc_bus.dinfo = ((void*)0);
  }
 }
}
