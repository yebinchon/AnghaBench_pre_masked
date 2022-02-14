
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ tuner_type; int name; } ;
struct cx88_core {TYPE_1__ board; } ;
struct cx8800_fh {struct cx8800_dev* dev; } ;
struct cx8800_dev {int pci; struct cx88_core* core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4 (struct file *VAR_7, void *VAR_8,
     struct v4l2_capability *VAR_9)
{
 struct cx8800_dev *VAR_10 = ((struct cx8800_fh *)VAR_8)->dev;
 struct cx88_core *VAR_11 = VAR_10->core;

 FUNC_2(VAR_9->driver, "cx8800");
 FUNC_3(VAR_9->card, VAR_11->board.name, sizeof(VAR_9->card));
 FUNC_1(VAR_9->bus_info,"PCI:%s",FUNC_0(VAR_10->pci));
 VAR_9->version = VAR_0;
 VAR_9->capabilities =
  VAR_6 |
  VAR_2 |
  VAR_3 |
  VAR_5;
 if (VAR_1 != VAR_11->board.tuner_type)
  VAR_9->capabilities |= VAR_4;
 return 0;
}
