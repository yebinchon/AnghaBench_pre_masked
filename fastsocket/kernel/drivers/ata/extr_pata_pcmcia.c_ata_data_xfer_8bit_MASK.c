
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data_addr; } ;
struct ata_port {TYPE_2__ ioaddr; } ;
struct ata_device {TYPE_1__* link; } ;
struct TYPE_3__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,unsigned int) ;
 int FUNC_1 (int ,unsigned char*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_device *VAR_1,
    unsigned char *VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct ata_port *VAR_5 = VAR_1->link->ap;

 if (VAR_4 == VAR_0)
  FUNC_0(VAR_5->ioaddr.data_addr, VAR_2, VAR_3);
 else
  FUNC_1(VAR_5->ioaddr.data_addr, VAR_2, VAR_3);

 return VAR_3;
}
