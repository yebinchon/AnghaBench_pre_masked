
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rdc_host_priv {int saved_iocfg; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct TYPE_2__ {struct rdc_host_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ata_port *VAR_2)
{
 struct rdc_host_priv *VAR_3 = VAR_2->host->private_data;
 u8 VAR_4;


 VAR_4 = 0x30 << (2 * VAR_2->port_no);
 if ((VAR_3->saved_iocfg & VAR_4) == 0)
  return VAR_0;
 return VAR_1;
}
