
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nv_swncq_port_priv {int irq_block; } ;
struct ata_port {struct nv_swncq_port_priv* private_data; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ata_port *VAR_0, u16 VAR_1)
{
 struct nv_swncq_port_priv *VAR_2 = VAR_0->private_data;

 FUNC_0(VAR_1, VAR_2->irq_block);
}
