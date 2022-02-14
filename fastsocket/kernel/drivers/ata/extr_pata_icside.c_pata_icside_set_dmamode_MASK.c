
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pata_icside_state {TYPE_2__* port; } ;
struct ata_timing {int active; int recover; int cycle; } ;
struct ata_port {size_t port_no; TYPE_1__* host; } ;
struct ata_device {size_t devno; int dma_mode; } ;
struct TYPE_4__ {unsigned int* speed; } ;
struct TYPE_3__ {struct pata_icside_state* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_device*,int ,char*,int,int,int,char) ;
 scalar_t__ FUNC_1 (struct ata_device*,int ,struct ata_timing*,int,int) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct pata_icside_state *VAR_3 = VAR_1->host->private_data;
 struct ata_timing VAR_4;
 unsigned int VAR_5;
 char VAR_6;




 if (FUNC_1(VAR_2, VAR_2->dma_mode, &VAR_4, 1000, 1))
  return;





 if (VAR_4.active <= 50 && VAR_4.recover <= 375 && VAR_4.cycle <= 425)
  VAR_6 = 'D', VAR_5 = 187;
 else if (VAR_4.active <= 125 && VAR_4.recover <= 375 && VAR_4.cycle <= 500)
  VAR_6 = 'C', VAR_5 = 250;
 else if (VAR_4.active <= 200 && VAR_4.recover <= 550 && VAR_4.cycle <= 750)
  VAR_6 = 'B', VAR_5 = 437;
 else
  VAR_6 = 'A', VAR_5 = 562;

 FUNC_0(VAR_2, VAR_0, "timings: act %dns rec %dns cyc %dns (%c)\n",
  VAR_4.active, VAR_4.recover, VAR_4.cycle, VAR_6);

 VAR_3->port[VAR_1->port_no].speed[VAR_2->devno] = VAR_5;
}
