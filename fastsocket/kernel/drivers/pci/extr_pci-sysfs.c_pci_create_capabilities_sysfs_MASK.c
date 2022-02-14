
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int kobj; } ;
struct pci_dev {int reset_fn; TYPE_2__* vpd; TYPE_3__ dev; } ;
struct TYPE_4__ {char* name; int mode; } ;
struct bin_attribute {int write; int read; TYPE_1__ attr; int size; } ;
struct TYPE_5__ {struct bin_attribute* attr; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (struct bin_attribute*) ;
 struct bin_attribute* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *,struct bin_attribute*) ;
 int FUNC_7 (int *,struct bin_attribute*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_7)
{
 int VAR_8;
 struct bin_attribute *VAR_9;


 if (VAR_7->vpd) {
  VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
  if (!VAR_9)
   return -VAR_0;

  VAR_9->size = VAR_7->vpd->len;
  VAR_9->attr.name = "vpd";
  VAR_9->attr.mode = VAR_2 | VAR_3;
  VAR_9->read = VAR_4;
  VAR_9->write = VAR_6;
  VAR_8 = FUNC_6(&VAR_7->dev.kobj, VAR_9);
  if (VAR_8) {
   FUNC_1(VAR_7->vpd->attr);
   return VAR_8;
  }
  VAR_7->vpd->attr = VAR_9;
 }


 FUNC_4(VAR_7);

 if (!FUNC_3(VAR_7)) {
  VAR_8 = FUNC_0(&VAR_7->dev, &VAR_5);
  if (VAR_8)
   goto error;
  VAR_7->reset_fn = 1;
 }
 return 0;

error:
 FUNC_5(VAR_7);
 if (VAR_7->vpd && VAR_7->vpd->attr) {
  FUNC_7(&VAR_7->dev.kobj, VAR_7->vpd->attr);
  FUNC_1(VAR_7->vpd->attr);
 }

 return VAR_8;
}
