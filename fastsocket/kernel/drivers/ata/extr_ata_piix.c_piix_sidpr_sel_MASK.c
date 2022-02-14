
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct piix_host_priv {scalar_t__ sidpr; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_link {int pmp; struct ata_port* ap; } ;
struct TYPE_2__ {struct piix_host_priv* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct ata_link *VAR_2, unsigned int VAR_3)
{
 struct ata_port *VAR_4 = VAR_2->ap;
 struct piix_host_priv *VAR_5 = VAR_4->host->private_data;

 FUNC_0(((VAR_4->port_no * 2 + VAR_2->pmp) << 8) | VAR_1[VAR_3],
    VAR_5->sidpr + VAR_0);
}
