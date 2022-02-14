
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int temperature ;
struct tg3 {int lock; } ;
struct sensor_device_attribute {int index; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct tg3* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (struct tg3*,int*,int ,int) ;
 struct pci_dev* FUNC_6 (struct device*) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_6(VAR_0);
 struct net_device *VAR_4 = FUNC_1(VAR_3);
 struct tg3 *VAR_5 = FUNC_0(VAR_4);
 struct sensor_device_attribute *VAR_6 = FUNC_7(VAR_1);
 u32 VAR_7;

 FUNC_2(&VAR_5->lock);
 FUNC_5(VAR_5, &VAR_7, VAR_6->index,
    sizeof(VAR_7));
 FUNC_3(&VAR_5->lock);
 return FUNC_4(VAR_2, "%u\n", VAR_7);
}
