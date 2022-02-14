
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ata_device {TYPE_3__* link; } ;
struct TYPE_6__ {TYPE_2__* ap; } ;
struct TYPE_4__ {int * bmdma_addr; } ;
struct TYPE_5__ {TYPE_1__ ioaddr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

unsigned long FUNC_0(struct ata_device *VAR_2,
        unsigned long VAR_3)
{



 if (VAR_2->link->ap->ioaddr.bmdma_addr == ((void*)0))
  VAR_3 &= ~(VAR_0 | VAR_1);
 return VAR_3;
}
