
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv_swncq_port_priv {int last_issue_tag; int dhfis_bits; int dmafis_bits; int qc_active; int sactive_block; } ;
struct ata_queued_cmd {int tag; int tf; } ;
struct ata_port {TYPE_1__* ops; struct nv_swncq_port_priv* private_data; } ;
struct TYPE_2__ {int (* sff_exec_command ) (struct ata_port*,int *) ;int (* sff_tf_load ) (struct ata_port*,int *) ;} ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ata_port*,int *) ;
 int FUNC_2 (struct ata_port*,int *) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct ata_port *VAR_0,
       struct ata_queued_cmd *VAR_1)
{
 struct nv_swncq_port_priv *VAR_2 = VAR_0->private_data;

 if (VAR_1 == ((void*)0))
  return 0;

 FUNC_0("Enter\n");

 FUNC_3((1 << VAR_1->tag), VAR_2->sactive_block);
 VAR_2->last_issue_tag = VAR_1->tag;
 VAR_2->dhfis_bits &= ~(1 << VAR_1->tag);
 VAR_2->dmafis_bits &= ~(1 << VAR_1->tag);
 VAR_2->qc_active |= (0x1 << VAR_1->tag);

 VAR_0->ops->sff_tf_load(VAR_0, &VAR_1->tf);
 VAR_0->ops->sff_exec_command(VAR_0, &VAR_1->tf);

 FUNC_0("Issued tag %u\n", VAR_1->tag);

 return 0;
}
