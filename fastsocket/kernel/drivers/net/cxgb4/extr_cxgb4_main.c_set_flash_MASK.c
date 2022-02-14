
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct firmware {int size; int data; } ;
struct ethtool_flash {char* data; } ;
struct adapter {int pdev_dev; } ;


 int FUNC_0 (int ,char*,char*) ;
 struct adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,char*,int ) ;
 int FUNC_4 (struct adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, struct ethtool_flash *VAR_1)
{
 int VAR_2;
 const struct firmware *VAR_3;
 struct adapter *VAR_4 = FUNC_1(VAR_0);

 VAR_1->data[sizeof(VAR_1->data) - 1] = '\0';
 VAR_2 = FUNC_3(&VAR_3, VAR_1->data, VAR_4->pdev_dev);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_4(VAR_4, VAR_3->data, VAR_3->size);
 FUNC_2(VAR_3);
 if (!VAR_2)
  FUNC_0(VAR_4->pdev_dev, "loaded firmware %s\n", VAR_1->data);
 return VAR_2;
}
