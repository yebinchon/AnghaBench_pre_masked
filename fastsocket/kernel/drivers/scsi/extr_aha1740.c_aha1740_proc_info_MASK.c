
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aha1740_hostdata {scalar_t__ translation; TYPE_1__* edev; } ;
struct Scsi_Host {char* io_port; int irq; } ;
typedef int off_t ;
struct TYPE_2__ {int slot; } ;


 int VAR_0 ;
 struct aha1740_hostdata* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (char*,char*,char*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct Scsi_Host *VAR_1, char *VAR_2,
        char **VAR_3, off_t VAR_4,
        int VAR_5, int VAR_6)
{
 int VAR_7;
 struct aha1740_hostdata *VAR_8;

 if (VAR_6)
  return-VAR_0;

 VAR_8 = FUNC_0(VAR_1);

 VAR_7 = FUNC_1(VAR_2, "aha174x at IO:%lx, IRQ %d, SLOT %d.\n"
        "Extended translation %sabled.\n",
        VAR_1->io_port, VAR_1->irq, VAR_8->edev->slot,
        VAR_8->translation ? "en" : "dis");

 if (VAR_4 > VAR_7) {
  *VAR_3 = VAR_2;
  return 0;
 }

 *VAR_3 = VAR_2 + VAR_4;
 VAR_7 -= VAR_4;
 if (VAR_7 > VAR_5)
  VAR_7 = VAR_5;
 return VAR_7;
}
