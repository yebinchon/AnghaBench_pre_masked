
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_queued_cmd {int nbytes; TYPE_1__* dev; struct ata_port* ap; } ;
struct ata_port {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* check_atapi_dma ) (struct ata_queued_cmd*) ;} ;
struct TYPE_3__ {int horkage; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;




 if (!(VAR_1->dev->horkage & VAR_0) &&
     FUNC_1(VAR_1->nbytes & 15))
  return 1;

 if (VAR_2->ops->check_atapi_dma)
  return VAR_2->ops->check_atapi_dma(VAR_1);

 return 0;
}
