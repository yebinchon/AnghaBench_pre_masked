
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_sata_port {struct ipr_resource_entry* res; struct ipr_ioa_cfg* ioa_cfg; } ;
struct ipr_resource_entry {unsigned int ata_class; } ;
struct ipr_ioa_cfg {TYPE_2__* host; scalar_t__ in_reset_reload; int reset_wait_q; } ;
struct ata_link {TYPE_1__* ap; } ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {struct ipr_sata_port* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipr_ioa_cfg*,struct ipr_resource_entry*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct ata_link *VAR_3, unsigned int *VAR_4,
    unsigned long VAR_5)
{
 struct ipr_sata_port *VAR_6 = VAR_3->ap->private_data;
 struct ipr_ioa_cfg *VAR_7 = VAR_6->ioa_cfg;
 struct ipr_resource_entry *VAR_8;
 unsigned long VAR_9 = 0;
 int VAR_10 = -VAR_1;

 VAR_0;
 FUNC_1(VAR_7->host->host_lock, VAR_9);
 while(VAR_7->in_reset_reload) {
  FUNC_2(VAR_7->host->host_lock, VAR_9);
  FUNC_3(VAR_7->reset_wait_q, !VAR_7->in_reset_reload);
  FUNC_1(VAR_7->host->host_lock, VAR_9);
 }

 VAR_8 = VAR_6->res;
 if (VAR_8) {
  VAR_10 = FUNC_0(VAR_7, VAR_8);
  *VAR_4 = VAR_8->ata_class;
 }

 FUNC_2(VAR_7->host->host_lock, VAR_9);
 VAR_2;
 return VAR_10;
}
