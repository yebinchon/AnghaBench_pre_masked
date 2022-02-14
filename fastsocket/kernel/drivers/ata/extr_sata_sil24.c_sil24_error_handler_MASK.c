
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sil24_port_priv {scalar_t__ do_port_rst; } ;
struct ata_port {struct sil24_port_priv* private_data; } ;


 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*) ;
 scalar_t__ FUNC_2 (struct ata_port*) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_0)
{
 struct sil24_port_priv *VAR_1 = VAR_0->private_data;

 if (FUNC_2(VAR_0))
  FUNC_0(VAR_0);

 FUNC_1(VAR_0);

 VAR_1->do_port_rst = 0;
}
