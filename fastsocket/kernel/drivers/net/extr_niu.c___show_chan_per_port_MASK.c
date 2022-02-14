
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct niu_parent* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct niu_parent {int num_ports; int * txchan_per_port; int * rxchan_per_port; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,...) ;
 struct platform_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2,
        int VAR_3)
{
 struct platform_device *VAR_4 = FUNC_1(VAR_0);
 struct niu_parent *VAR_5 = VAR_4->dev.platform_data;
 char *VAR_6 = VAR_2;
 u8 *VAR_7;
 int VAR_8;

 VAR_7 = (VAR_3 ? VAR_5->rxchan_per_port : VAR_5->txchan_per_port);

 for (VAR_8 = 0; VAR_8 < VAR_5->num_ports; VAR_8++) {
  VAR_2 += FUNC_0(VAR_2,
          (VAR_8 == 0) ? "%d" : " %d",
          VAR_7[VAR_8]);
 }
 VAR_2 += FUNC_0(VAR_2, "\n");

 return VAR_2 - VAR_6;
}
