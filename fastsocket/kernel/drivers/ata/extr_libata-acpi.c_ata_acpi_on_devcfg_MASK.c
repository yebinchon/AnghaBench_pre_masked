
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct ata_eh_context {TYPE_3__ i; } ;
struct TYPE_5__ {struct ata_eh_context eh_context; } ;
struct ata_port {int flags; int pflags; TYPE_2__ link; } ;
struct ata_device {int flags; int * acpi_handle; TYPE_1__* link; } ;
struct TYPE_4__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ata_device*,int*) ;
 int FUNC_1 (struct ata_device*) ;
 int FUNC_2 (struct ata_device*,int ,char*) ;
 int FUNC_3 (struct ata_device*,int ) ;

int FUNC_4(struct ata_device *VAR_8)
{
 struct ata_port *VAR_9 = VAR_8->link->ap;
 struct ata_eh_context *VAR_10 = &VAR_9->link.eh_context;
 int VAR_11 = VAR_9->flags & VAR_3;
 int VAR_12 = 0;
 int VAR_13;

 if (!VAR_8->acpi_handle)
  return 0;


 if (!(VAR_8->flags & VAR_1) &&
     !(VAR_11 && (VAR_10->i.flags & VAR_2)))
  return 0;


 if (VAR_11) {
  VAR_13 = FUNC_1(VAR_8);
  if (VAR_13)
   goto acpi_err;
 }


 VAR_13 = FUNC_0(VAR_8, &VAR_12);
 if (VAR_13)
  goto acpi_err;

 VAR_8->flags &= ~VAR_1;


 if (VAR_12) {
  VAR_13 = FUNC_3(VAR_8, 0);
  if (VAR_13 < 0) {
   FUNC_2(VAR_8, VAR_6, "failed to IDENTIFY "
           "after ACPI commands\n");
   return VAR_13;
  }
 }

 return 0;

 acpi_err:

 if (VAR_13 == -VAR_5 && !VAR_12 && !(VAR_9->pflags & VAR_4))
  return 0;


 if (!(VAR_8->flags & VAR_0)) {
  VAR_8->flags |= VAR_0;
  return VAR_13;
 }

 FUNC_2(VAR_8, VAR_7,
         "ACPI: failed the second time, disabled\n");
 VAR_8->acpi_handle = ((void*)0);




 if (!VAR_12 && !(VAR_9->pflags & VAR_4))
  return 0;

 return VAR_13;
}
