
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv_swncq_port_priv {int tag_block; } ;
struct ata_port {struct nv_swncq_port_priv* private_data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct ata_port *VAR_0)
{
 struct nv_swncq_port_priv *VAR_1 = VAR_0->private_data;
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1->tag_block) >> 2;
 return (VAR_2 & 0x1f);
}
