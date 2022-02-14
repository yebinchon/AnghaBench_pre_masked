
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int command; } ;
struct TYPE_4__ {TYPE_1__ fis; } ;
struct sas_task {TYPE_2__ ata_task; } ;
__attribute__((used)) static int FUNC_0(struct sas_task *VAR_0)
{
 int VAR_1 = 0;
 switch (VAR_0->ata_task.fis.command) {
 case 137:
 case 130:
 case 131:
 case 136:
 case 128:
 case 129:
 case 135:
 case 134:
 case 133:
 case 132:
  VAR_1 = 1;
  break;
 default:
  VAR_1 = 0;
  break;
 }
 return VAR_1;
}
