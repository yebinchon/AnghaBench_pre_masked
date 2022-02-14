
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tg3_ocir {scalar_t__ src_data_length; scalar_t__ src_hdr_length; } ;
struct tg3 {int * hwmon_dev; struct pci_dev* pdev; } ;
struct TYPE_3__ {int kobj; } ;
struct pci_dev {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (struct tg3*,struct tg3_ocir*) ;

__attribute__((used)) static void FUNC_6(struct tg3 *VAR_2)
{
 int VAR_3, VAR_4;
 u32 VAR_5 = 0;
 struct pci_dev *VAR_6 = VAR_2->pdev;
 struct tg3_ocir VAR_7[VAR_0];

 FUNC_5(VAR_2, VAR_7);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_7[VAR_3].src_data_length)
   continue;

  VAR_5 += VAR_7[VAR_3].src_hdr_length;
  VAR_5 += VAR_7[VAR_3].src_data_length;
 }

 if (!VAR_5)
  return;


 VAR_4 = FUNC_3(&VAR_6->dev.kobj, &VAR_1);
 if (VAR_4) {
  FUNC_1(&VAR_6->dev, "Cannot create sysfs group, aborting\n");
  return;
 }

 VAR_2->hwmon_dev = FUNC_2(&VAR_6->dev);
 if (FUNC_0(VAR_2->hwmon_dev)) {
  VAR_2->hwmon_dev = ((void*)0);
  FUNC_1(&VAR_6->dev, "Cannot register hwmon device, aborting\n");
  FUNC_4(&VAR_6->dev.kobj, &VAR_1);
 }
}
