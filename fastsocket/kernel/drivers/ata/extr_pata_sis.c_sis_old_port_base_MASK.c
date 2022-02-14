
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_device {int devno; TYPE_2__* link; } ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {int port_no; } ;



__attribute__((used)) static int FUNC_0(struct ata_device *VAR_0)
{
 return 0x40 + (4 * VAR_0->link->ap->port_no) + (2 * VAR_0->devno);
}
