
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_5__* parent; } ;
struct TYPE_8__ {TYPE_2__ dev; } ;
struct uwb_rc {TYPE_3__ uwb_dev; } ;
struct device {int dummy; } ;
struct uwb_dev {TYPE_4__* bce; int dev_addr; int mac_addr; struct device dev; } ;
typedef int macbuf ;
typedef int devbuf ;
struct TYPE_10__ {TYPE_1__* bus; } ;
struct TYPE_9__ {int node; } ;
struct TYPE_6__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char*,char*,char*,char*) ;
 char* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char*,int,int *) ;
 int FUNC_5 (struct uwb_dev*) ;
 int FUNC_6 (struct uwb_dev*) ;
 int FUNC_7 (char*,int,int *) ;

int FUNC_8(struct uwb_dev *VAR_1, struct uwb_rc *VAR_2)
{
 struct device *VAR_3 = &VAR_1->dev;
 char VAR_4[VAR_0], VAR_5[VAR_0];

 FUNC_7(VAR_4, sizeof(VAR_4), &VAR_1->mac_addr);
 FUNC_4(VAR_5, sizeof(VAR_5), &VAR_1->dev_addr);
 FUNC_0(VAR_3, "uwb device (mac %s dev %s) disconnected from %s %s\n",
   VAR_4, VAR_5,
   VAR_2 ? VAR_2->uwb_dev.dev.parent->bus->name : "n/a",
   VAR_2 ? FUNC_1(VAR_2->uwb_dev.dev.parent) : "");
 FUNC_6(VAR_1);
 FUNC_2(&VAR_1->bce->node);
 FUNC_3(VAR_1->bce);
 FUNC_5(VAR_1);

 return 0;
}
