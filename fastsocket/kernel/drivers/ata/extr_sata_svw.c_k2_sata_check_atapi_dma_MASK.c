
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ata_queued_cmd {TYPE_2__* ap; TYPE_1__* scsicmd; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int* cmnd; } ;


 int VAR_0 ;







__attribute__((used)) static int FUNC_0(struct ata_queued_cmd *VAR_1)
{
 u8 VAR_2 = VAR_1->scsicmd->cmnd[0];

 if (VAR_1->ap->flags & VAR_0)
  return -1;
 else {
  switch (VAR_2) {
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
   return 0;

  default:
   return -1;
  }

 }
}
