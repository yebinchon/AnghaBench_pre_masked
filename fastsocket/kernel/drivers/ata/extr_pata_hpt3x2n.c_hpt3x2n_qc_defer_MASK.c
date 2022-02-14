
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct ata_queued_cmd {TYPE_1__ tf; struct ata_port* ap; } ;
struct ata_port {int port_no; scalar_t__ qc_active; TYPE_2__* host; } ;
struct TYPE_4__ {scalar_t__ private_data; struct ata_port** ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_port*,int) ;

__attribute__((used)) static int FUNC_2(struct ata_queued_cmd *VAR_3)
{
 struct ata_port *VAR_4 = VAR_3->ap;
 struct ata_port *VAR_5 = VAR_4->host->ports[VAR_4->port_no ^ 1];
 int VAR_6, VAR_7 = (long)VAR_4->host->private_data;
 int VAR_8 = FUNC_1(VAR_4, VAR_3->tf.flags & VAR_1);


 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 != 0)
  return VAR_6;

 if ((VAR_7 & VAR_2) != VAR_8 && VAR_5->qc_active)
  return VAR_0;
 return 0;
}
