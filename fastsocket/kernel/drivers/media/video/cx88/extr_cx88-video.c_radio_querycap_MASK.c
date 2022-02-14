
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct cx88_core {TYPE_1__ board; } ;
struct cx8800_fh {struct cx8800_dev* dev; } ;
struct cx8800_dev {int pci; struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4 (struct file *VAR_2, void *VAR_3,
     struct v4l2_capability *VAR_4)
{
 struct cx8800_dev *VAR_5 = ((struct cx8800_fh *)VAR_3)->dev;
 struct cx88_core *VAR_6 = VAR_5->core;

 FUNC_2(VAR_4->driver, "cx8800");
 FUNC_3(VAR_4->card, VAR_6->board.name, sizeof(VAR_4->card));
 FUNC_1(VAR_4->bus_info,"PCI:%s", FUNC_0(VAR_5->pci));
 VAR_4->version = VAR_0;
 VAR_4->capabilities = VAR_1;
 return 0;
}
