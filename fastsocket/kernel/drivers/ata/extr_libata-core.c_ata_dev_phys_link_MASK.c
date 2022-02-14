
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_link {struct ata_port* ap; } ;
struct ata_port {struct ata_link* slave_link; struct ata_link link; } ;
struct ata_device {int devno; struct ata_link* link; } ;



struct ata_link *FUNC_0(struct ata_device *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->link->ap;

 if (!VAR_1->slave_link)
  return VAR_0->link;
 if (!VAR_0->devno)
  return &VAR_1->link;
 return VAR_1->slave_link;
}
