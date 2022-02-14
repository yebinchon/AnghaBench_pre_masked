
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc52xx_ata_priv {unsigned int csel; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {struct mpc52xx_ata_priv* private_data; } ;


 int FUNC_0 (struct ata_port*,unsigned int) ;
 int FUNC_1 (struct mpc52xx_ata_priv*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct ata_port *VAR_0, unsigned int VAR_1)
{
 struct mpc52xx_ata_priv *VAR_2 = VAR_0->host->private_data;

 if (VAR_1 != VAR_2->csel)
  FUNC_1(VAR_2, VAR_1);

 FUNC_0(VAR_0, VAR_1);
}
