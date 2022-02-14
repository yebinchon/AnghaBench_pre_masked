
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int port_no; } ;



__attribute__((used)) static unsigned long FUNC_0(struct ata_port *VAR_0, int VAR_1)
{
 unsigned long VAR_2 = 0xA0 + VAR_1;
 VAR_2 += (VAR_0->port_no << 4);
 return VAR_2;
}
