
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ata_port {scalar_t__ port_no; TYPE_2__* host; } ;
struct ata_device {scalar_t__ devno; TYPE_1__* link; } ;
struct ata_acpi_gtm {int flags; TYPE_3__* drive; } ;
typedef int acpi_str ;
struct TYPE_6__ {int dma; } ;
struct TYPE_5__ {scalar_t__ private_data; } ;
struct TYPE_4__ {struct ata_port* ap; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 unsigned long FUNC_0 (struct ata_device*,struct ata_acpi_gtm const*) ;
 struct ata_acpi_gtm* FUNC_1 (struct ata_port*) ;
 unsigned long FUNC_2 (int ,int ,unsigned int const) ;
 int FUNC_3 (struct ata_port*,int ,char*,unsigned long,unsigned long,unsigned long,unsigned long,int,unsigned long,char*) ;
 int FUNC_4 (char*,int,char*,int,int,int) ;

__attribute__((used)) static unsigned long FUNC_5(struct ata_device *VAR_6,
        unsigned long VAR_7)
{
 static const unsigned int VAR_8[] =
  { 132, 133, 134, 0,
    131, 130, 129, 128 };
 struct ata_port *VAR_9 = VAR_6->link->ap;
 char VAR_10[32] = "";
 u32 VAR_11, VAR_12;
 const struct ata_acpi_gtm *VAR_13;
 unsigned long VAR_14 = 0, VAR_15 = 0, VAR_16;


 VAR_12 = VAR_11 = (unsigned long)VAR_9->host->private_data;

 if (VAR_9->port_no == 0)
  VAR_12 >>= 16;
 if (VAR_6->devno == 0)
  VAR_12 >>= 8;

 if ((VAR_12 & 0xc0) == 0xc0)
  VAR_14 = FUNC_2(0, 0, VAR_8[VAR_12 & 0x7]);


 VAR_13 = FUNC_1(VAR_9);
 if (VAR_13) {
  VAR_15 = FUNC_0(VAR_6, VAR_13);

  FUNC_4(VAR_10, sizeof(VAR_10), " (%u:%u:0x%x)",
    VAR_13->drive[0].dma, VAR_13->drive[1].dma, VAR_13->flags);
 }


 VAR_16 = VAR_14 | VAR_15;




 if (!(VAR_16 & VAR_1))
  VAR_16 |= VAR_1;
 if (!(VAR_16 & (VAR_0 | VAR_2)))
  VAR_16 |= VAR_0 | VAR_2;


 VAR_16 |= FUNC_2(VAR_4, VAR_3, 132);

 FUNC_3(VAR_9, VAR_5, "nv_mode_filter: 0x%lx&0x%lx->0x%lx, "
   "BIOS=0x%lx (0x%x) ACPI=0x%lx%s\n",
   VAR_7, VAR_16, VAR_7 & VAR_16, VAR_14,
   VAR_11, VAR_15, VAR_10);

 return VAR_7 & VAR_16;
}
