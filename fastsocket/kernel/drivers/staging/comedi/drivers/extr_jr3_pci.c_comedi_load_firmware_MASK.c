
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jr3_pci_dev_private {TYPE_1__* pci_dev; } ;
struct firmware {int size; int data; } ;
struct comedi_device {struct jr3_pci_dev_private* private; } ;
typedef int (* comedi_firmware_callback ) (struct comedi_device*,int ,int ) ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,char*,int *) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_3, char *VAR_4,
    comedi_firmware_callback VAR_5)
{
 int VAR_6 = 0;
 const struct firmware *VAR_7;
 char *VAR_8;
 static const char *VAR_9 = "comedi/";
 struct jr3_pci_dev_private *VAR_10 = VAR_3->private;

 VAR_8 = FUNC_1(FUNC_5(VAR_9) + FUNC_5(VAR_4) + 1, VAR_2);
 if (!VAR_8) {
  VAR_6 = -VAR_1;
 } else {
  VAR_8[0] = '\0';
  FUNC_4(VAR_8, VAR_9);
  FUNC_4(VAR_8, VAR_4);
  VAR_6 = FUNC_3(&VAR_7, VAR_8,
       &VAR_10->pci_dev->dev);
  if (VAR_6 == 0) {
   if (!VAR_5)
    VAR_6 = -VAR_0;
   else
    VAR_6 = VAR_5(VAR_3, VAR_7->data, VAR_7->size);
   FUNC_2(VAR_7);
  }
  FUNC_0(VAR_8);
 }
 return VAR_6;
}
