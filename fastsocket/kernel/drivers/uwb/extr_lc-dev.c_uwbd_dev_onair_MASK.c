
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {TYPE_3__* parent; } ;
struct TYPE_5__ {struct device dev; } ;
struct uwb_rc {TYPE_2__ uwb_dev; } ;
struct uwb_dev {struct uwb_beca_e* bce; int dev; int dev_addr; int mac_addr; } ;
struct uwb_beca_e {struct uwb_dev* uwb_dev; int dev_addr; int * mac_addr; } ;
typedef int macbuf ;
typedef int devbuf ;
struct TYPE_6__ {TYPE_1__* bus; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,char*) ;
 int FUNC_1 (struct device*,char*,char*,char*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct uwb_dev*) ;
 struct uwb_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (struct uwb_beca_e*) ;
 int FUNC_7 (struct uwb_dev*,struct device*,struct uwb_rc*) ;
 int FUNC_8 (char*,int,int *) ;
 int FUNC_9 (struct uwb_dev*) ;
 int FUNC_10 (char*,int,int *) ;
 int FUNC_11 (struct uwb_rc*,struct uwb_dev*,int ) ;

void FUNC_12(struct uwb_rc *VAR_3, struct uwb_beca_e *VAR_4)
{
 int VAR_5;
 struct device *VAR_6 = &VAR_3->uwb_dev.dev;
 struct uwb_dev *VAR_7;
 char VAR_8[VAR_1], VAR_9[VAR_1];

 FUNC_10(VAR_8, sizeof(VAR_8), VAR_4->mac_addr);
 FUNC_8(VAR_9, sizeof(VAR_9), &VAR_4->dev_addr);
 VAR_7 = FUNC_5(sizeof(struct uwb_dev), VAR_0);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_6, "new device %s: Cannot allocate memory\n",
   VAR_8);
  return;
 }
 FUNC_9(VAR_7);
 VAR_7->mac_addr = *VAR_4->mac_addr;
 VAR_7->dev_addr = VAR_4->dev_addr;
 FUNC_3(&VAR_7->dev, VAR_8);
 VAR_5 = FUNC_7(VAR_7, &VAR_3->uwb_dev.dev, VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_6, "new device %s: cannot instantiate device\n",
   VAR_8);
  goto error_dev_add;
 }

 VAR_4->uwb_dev = VAR_7;
 VAR_7->bce = VAR_4;
 FUNC_6(VAR_4);
 FUNC_1(VAR_6, "uwb device (mac %s dev %s) connected to %s %s\n",
   VAR_8, VAR_9, VAR_3->uwb_dev.dev.parent->bus->name,
   FUNC_2(VAR_3->uwb_dev.dev.parent));
 FUNC_11(VAR_3, VAR_7, VAR_2);
 return;

error_dev_add:
 FUNC_4(VAR_7);
 return;
}
