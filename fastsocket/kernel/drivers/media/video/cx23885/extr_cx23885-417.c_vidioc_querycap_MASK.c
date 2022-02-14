
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {struct cx23885_fh* private_data; } ;
struct cx23885_tsport {TYPE_1__* dev; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {scalar_t__ tuner_type; int pci; int name; struct cx23885_tsport ts1; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {size_t board; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
    struct v4l2_capability *VAR_9)
{
 struct cx23885_fh *VAR_10 = VAR_7->private_data;
 struct cx23885_dev *VAR_11 = VAR_10->dev;
 struct cx23885_tsport *VAR_12 = &VAR_11->ts1;

 FUNC_2(VAR_9->driver, VAR_11->name, sizeof(VAR_9->driver));
 FUNC_2(VAR_9->card, VAR_6[VAR_12->dev->board].name,
  sizeof(VAR_9->card));
 FUNC_1(VAR_9->bus_info, "PCI:%s", FUNC_0(VAR_11->pci));
 VAR_9->version = VAR_0;
 VAR_9->capabilities =
  VAR_5 |
  VAR_2 |
  VAR_3 |
  0;
 if (VAR_1 != VAR_11->tuner_type)
  VAR_9->capabilities |= VAR_4;

 return 0;
}
