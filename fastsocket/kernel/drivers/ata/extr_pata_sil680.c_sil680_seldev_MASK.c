
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int port_no; } ;
struct ata_device {scalar_t__ devno; } ;



__attribute__((used)) static unsigned long FUNC_0(struct ata_port *VAR_0, struct ata_device *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = 0xA0 + VAR_2;
 VAR_3 += (VAR_0->port_no << 4);
 VAR_3 |= VAR_1->devno ? 2 : 0;
 return VAR_3;
}
