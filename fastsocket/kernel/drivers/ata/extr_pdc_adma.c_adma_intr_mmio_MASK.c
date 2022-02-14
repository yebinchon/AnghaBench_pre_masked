
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int flags; int protocol; } ;
struct ata_queued_cmd {scalar_t__ err_mask; TYPE_1__ tf; } ;
struct ata_eh_info {int dummy; } ;
struct TYPE_4__ {struct ata_eh_info eh_info; int active_tag; } ;
struct ata_port {TYPE_2__ link; int print_id; struct adma_port_priv* private_data; } ;
struct ata_host {unsigned int n_ports; struct ata_port** ports; } ;
struct adma_port_priv {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ata_eh_info*) ;
 int FUNC_3 (struct ata_eh_info*,char*,int) ;
 int FUNC_4 (struct ata_port*) ;
 int FUNC_5 (struct ata_port*) ;
 int FUNC_6 (struct ata_queued_cmd*) ;
 struct ata_queued_cmd* FUNC_7 (struct ata_port*,int ) ;
 int FUNC_8 (struct ata_port*) ;

__attribute__((used)) static inline unsigned int FUNC_9(struct ata_host *VAR_5)
{
 unsigned int VAR_6 = 0, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5->n_ports; ++VAR_7) {
  struct ata_port *VAR_8 = VAR_5->ports[VAR_7];
  struct adma_port_priv *VAR_9 = VAR_8->private_data;
  struct ata_queued_cmd *VAR_10;

  if (!VAR_9 || VAR_9->state != VAR_4)
   continue;
  VAR_10 = FUNC_7(VAR_8, VAR_8->link.active_tag);
  if (VAR_10 && (!(VAR_10->tf.flags & VAR_2))) {


   u8 VAR_11 = FUNC_8(VAR_8);
   if ((VAR_11 & VAR_1))
    continue;
   FUNC_0("ata%u: protocol %d (dev_stat 0x%X)\n",
    VAR_8->print_id, VAR_10->tf.protocol, VAR_11);


   VAR_9->state = VAR_3;
   VAR_10->err_mask |= FUNC_1(VAR_11);
   if (!VAR_10->err_mask)
    FUNC_6(VAR_10);
   else {
    struct ata_eh_info *VAR_12 = &VAR_8->link.eh_info;
    FUNC_2(VAR_12);
    FUNC_3(VAR_12, "status 0x%02X", VAR_11);

    if (VAR_10->err_mask == VAR_0)
     FUNC_4(VAR_8);
    else
     FUNC_5(VAR_8);
   }
   VAR_6 = 1;
  }
 }
 return VAR_6;
}
