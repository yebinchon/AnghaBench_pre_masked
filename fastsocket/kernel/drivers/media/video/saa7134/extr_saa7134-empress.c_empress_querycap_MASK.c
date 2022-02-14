
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct saa7134_dev {size_t board; int pci; } ;
struct file {struct saa7134_dev* private_data; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6,
     struct v4l2_capability *VAR_7)
{
 struct saa7134_dev *VAR_8 = VAR_5->private_data;

 FUNC_2(VAR_7->driver, "saa7134");
 FUNC_3(VAR_7->card, VAR_4[VAR_8->board].name,
  sizeof(VAR_7->card));
 FUNC_1(VAR_7->bus_info, "PCI:%s", FUNC_0(VAR_8->pci));
 VAR_7->version = VAR_0;
 VAR_7->capabilities =
  VAR_3 |
  VAR_1 |
  VAR_2;
 return 0;
}
