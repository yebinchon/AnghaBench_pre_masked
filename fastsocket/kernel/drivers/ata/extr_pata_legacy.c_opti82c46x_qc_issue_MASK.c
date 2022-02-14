
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_queued_cmd {struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {int dummy; } ;
struct TYPE_2__ {struct TYPE_2__* private_data; } ;


 unsigned int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_port*,struct ata_device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_queued_cmd *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->ap;
 struct ata_device *VAR_2 = VAR_0->dev;



 if (VAR_1->host->private_data != VAR_1->host
     && VAR_1->host->private_data != ((void*)0))
  FUNC_1(VAR_1, VAR_2);

 return FUNC_0(VAR_0);
}
