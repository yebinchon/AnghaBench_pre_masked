
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; scalar_t__ version; int bus_info; int card; int driver; } ;
struct saa7164_vbi_fh {struct saa7164_port* port; } ;
struct saa7164_port {struct saa7164_dev* dev; } ;
struct saa7164_dev {size_t board; int pci; int name; } ;
struct file {struct saa7164_vbi_fh* private_data; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
 struct v4l2_capability *VAR_6)
{
 struct saa7164_vbi_fh *VAR_7 = VAR_4->private_data;
 struct saa7164_port *VAR_8 = VAR_7->port;
 struct saa7164_dev *VAR_9 = VAR_8->dev;

 FUNC_2(VAR_6->driver, VAR_9->name);
 FUNC_3(VAR_6->card, VAR_3[VAR_9->board].name,
  sizeof(VAR_6->card));
 FUNC_1(VAR_6->bus_info, "PCI:%s", FUNC_0(VAR_9->pci));

 VAR_6->capabilities =
  VAR_2 |
  VAR_0 |
  0;

 VAR_6->capabilities |= VAR_1;
 VAR_6->version = 0;

 return 0;
}
