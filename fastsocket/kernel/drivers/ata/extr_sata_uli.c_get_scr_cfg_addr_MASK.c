
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uli_priv {unsigned int* scr_cfg_addr; } ;
struct ata_port {size_t port_no; TYPE_1__* host; } ;
struct TYPE_2__ {struct uli_priv* private_data; } ;



__attribute__((used)) static unsigned int FUNC_0(struct ata_port *VAR_0, unsigned int VAR_1)
{
 struct uli_priv *VAR_2 = VAR_0->host->private_data;
 return VAR_2->scr_cfg_addr[VAR_0->port_no] + (4 * VAR_1);
}
