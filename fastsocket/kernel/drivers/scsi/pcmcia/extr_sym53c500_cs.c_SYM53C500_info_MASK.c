
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym53c500_data {scalar_t__ fast_pio; } ;
struct Scsi_Host {int irq; int io_port; scalar_t__ hostdata; } ;
typedef int info_msg ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,int ,int ,char*) ;

__attribute__((used)) static const char*
FUNC_3(struct Scsi_Host *VAR_0)
{
 static char VAR_1[256];
 struct sym53c500_data *VAR_2 =
     (struct sym53c500_data *)VAR_0->hostdata;

 FUNC_0(FUNC_1("SYM53C500_info called\n"));
 (void)FUNC_2(VAR_1, sizeof(VAR_1),
     "SYM53C500 at 0x%lx, IRQ %d, %s PIO mode.",
     VAR_0->io_port, VAR_0->irq, VAR_2->fast_pio ? "fast" : "slow");
 return (VAR_1);
}
