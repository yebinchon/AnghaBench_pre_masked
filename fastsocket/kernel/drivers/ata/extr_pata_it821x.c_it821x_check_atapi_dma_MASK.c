
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct it821x_dev {scalar_t__ timing10; scalar_t__ smart; } ;
struct ata_queued_cmd {struct ata_port* ap; } ;
struct ata_port {struct it821x_dev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_queued_cmd*) ;

__attribute__((used)) static int FUNC_1(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 struct it821x_dev *VAR_3 = VAR_2->private_data;


 if (FUNC_0(VAR_1) < 2048)
  return -VAR_0;


 if (VAR_3->smart)
  return -VAR_0;

 if (VAR_3->timing10)
  return -VAR_0;

 return 0;
}
