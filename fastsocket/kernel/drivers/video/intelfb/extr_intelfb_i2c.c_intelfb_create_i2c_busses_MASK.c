
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intelfb_info {int num_outputs; int chipset; TYPE_1__* output; } ;
struct TYPE_2__ {int i2c_bus; void* type; int ddc_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct intelfb_info*,int *,int ,char*,int ) ;

void FUNC_1(struct intelfb_info *VAR_7)
{
 int VAR_8 = 0;


 VAR_7->num_outputs = 1;
 VAR_7->output[VAR_8].type = VAR_4;


 FUNC_0(VAR_7, &VAR_7->output[VAR_8].ddc_bus, VAR_0,
         "CRTDDC_A", VAR_3);
 VAR_8++;





 switch(VAR_7->chipset) {
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
  VAR_7->output[VAR_8].type = VAR_5;
  FUNC_0(VAR_7, &VAR_7->output[VAR_8].ddc_bus,
          VAR_1, "DVODDC_D", VAR_3);
  FUNC_0(VAR_7, &VAR_7->output[VAR_8].i2c_bus,
          VAR_2, "DVOI2C_E", 0);
  VAR_8++;
  break;
 case 134:
 case 133:

 case 132:
 case 131:
 case 130:
 case 129:
 case 128:

  VAR_7->output[VAR_8].type = VAR_6;
  FUNC_0(VAR_7, &VAR_7->output[VAR_8].i2c_bus,
          VAR_2, "SDVOCTRL_E", 0);


  VAR_8++;


  VAR_7->output[VAR_8].type = VAR_6;
  VAR_7->output[VAR_8].i2c_bus = VAR_7->output[VAR_8 - 1].i2c_bus;


  VAR_8++;
  break;
 }
 VAR_7->num_outputs = VAR_8;
}
