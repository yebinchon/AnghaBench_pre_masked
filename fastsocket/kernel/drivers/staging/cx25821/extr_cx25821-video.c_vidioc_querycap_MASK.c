
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct cx25821_fh {struct cx25821_dev* dev; } ;
struct cx25821_dev {size_t board; scalar_t__ tuner_type; int pci; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct file *VAR_7, void *VAR_8, struct v4l2_capability *VAR_9)
{
 struct cx25821_dev *VAR_10 = ((struct cx25821_fh *)VAR_8)->dev;

 FUNC_2(VAR_9->driver, "cx25821");
 FUNC_3(VAR_9->card, VAR_6[VAR_10->board].name, sizeof(VAR_9->card));
 FUNC_1(VAR_9->bus_info, "PCIe:%s", FUNC_0(VAR_10->pci));
 VAR_9->version = VAR_0;
 VAR_9->capabilities =
     VAR_5 | VAR_2 | VAR_3;
 if (VAR_1 != VAR_10->tuner_type)
  VAR_9->capabilities |= VAR_4;
 return 0;
}
