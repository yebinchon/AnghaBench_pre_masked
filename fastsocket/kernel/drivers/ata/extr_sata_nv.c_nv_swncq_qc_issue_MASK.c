
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv_swncq_port_priv {int qc_active; } ;
struct TYPE_2__ {scalar_t__ protocol; } ;
struct ata_queued_cmd {TYPE_1__ tf; struct ata_port* ap; } ;
struct ata_port {struct nv_swncq_port_priv* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (struct ata_port*,struct ata_queued_cmd*) ;
 int FUNC_3 (struct ata_port*,struct ata_queued_cmd*) ;

__attribute__((used)) static unsigned int FUNC_4(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 struct nv_swncq_port_priv *VAR_3 = VAR_2->private_data;

 if (VAR_1->tf.protocol != VAR_0)
  return FUNC_1(VAR_1);

 FUNC_0("Enter\n");

 if (!VAR_3->qc_active)
  FUNC_2(VAR_2, VAR_1);
 else
  FUNC_3(VAR_2, VAR_1);

 return 0;
}
