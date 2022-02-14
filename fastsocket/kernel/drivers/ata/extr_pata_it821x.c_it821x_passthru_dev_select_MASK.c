
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct it821x_dev {unsigned int last_device; int * pio; } ;
struct TYPE_2__ {struct ata_device* device; } ;
struct ata_port {TYPE_1__ link; struct it821x_dev* private_data; } ;
struct ata_device {size_t devno; } ;


 int FUNC_0 (struct ata_port*,unsigned int) ;
 int FUNC_1 (struct ata_port*,struct ata_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_0,
           unsigned int VAR_1)
{
 struct it821x_dev *VAR_2 = VAR_0->private_data;
 if (VAR_2 && VAR_1 != VAR_2->last_device) {
  struct ata_device *VAR_3 = &VAR_0->link.device[VAR_1];
  FUNC_1(VAR_0, VAR_3, VAR_2->pio[VAR_3->devno]);
  VAR_2->last_device = VAR_1;
 }
 FUNC_0(VAR_0, VAR_1);
}
