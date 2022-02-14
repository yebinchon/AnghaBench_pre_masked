
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int pflags; int scsi_host; int hotplug_task; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int error_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ata_port *VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_2->ops->error_handler)
  goto skip_eh;


 FUNC_5(VAR_2->lock, VAR_3);
 VAR_2->pflags |= VAR_1;
 FUNC_1(VAR_2);
 FUNC_6(VAR_2->lock, VAR_3);


 FUNC_2(VAR_2);


 FUNC_0(!(VAR_2->pflags & VAR_0));

 FUNC_3(&VAR_2->hotplug_task);

 skip_eh:

 FUNC_4(VAR_2->scsi_host);
}
