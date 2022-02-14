
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_device {int ering; int class; TYPE_1__* link; } ;
struct TYPE_2__ {int ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*) ;
 int FUNC_2 (struct ata_device*,int ,char*) ;
 int FUNC_3 (struct ata_device*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(struct ata_device *VAR_3)
{
 if (!FUNC_1(VAR_3))
  return;

 if (FUNC_5(VAR_3->link->ap))
  FUNC_2(VAR_3, VAR_2, "disabled\n");
 FUNC_0(VAR_3);
 FUNC_3(VAR_3, VAR_0 | VAR_1);
 VAR_3->class++;




 FUNC_4(&VAR_3->ering);
}
