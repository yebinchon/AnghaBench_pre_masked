
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct TYPE_3__ {int pci; } ;
struct bttv {TYPE_1__ c; TYPE_2__* radio_dev; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
     struct v4l2_capability *VAR_4)
{
 struct bttv_fh *VAR_5 = VAR_3;
 struct bttv *VAR_6 = VAR_5->btv;

 FUNC_2(VAR_4->driver, "bttv");
 FUNC_3(VAR_4->card, VAR_6->radio_dev->name, sizeof(VAR_4->card));
 FUNC_1(VAR_4->bus_info, "PCI:%s", FUNC_0(VAR_6->c.pci));
 VAR_4->version = VAR_0;
 VAR_4->capabilities = VAR_1;

 return 0;
}
