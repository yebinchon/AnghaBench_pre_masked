
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {size_t board; scalar_t__ tuner_type; int pci; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_8, void *VAR_9,
 struct v4l2_capability *VAR_10)
{
 struct cx23885_dev *VAR_11 = ((struct cx23885_fh *)VAR_9)->dev;

 FUNC_2(VAR_10->driver, "cx23885");
 FUNC_3(VAR_10->card, VAR_7[VAR_11->board].name,
  sizeof(VAR_10->card));
 FUNC_1(VAR_10->bus_info, "PCIe:%s", FUNC_0(VAR_11->pci));
 VAR_10->version = VAR_0;
 VAR_10->capabilities =
  VAR_6 |
  VAR_2 |
  VAR_3 |
  VAR_5;
 if (VAR_1 != VAR_11->tuner_type)
  VAR_10->capabilities |= VAR_4;
 return 0;
}
