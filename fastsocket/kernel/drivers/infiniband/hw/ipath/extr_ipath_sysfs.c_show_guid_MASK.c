
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_devdata {int ipath_guid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct ipath_devdata *VAR_4 = FUNC_0(VAR_1);
 u8 *VAR_5;

 VAR_5 = (u8 *) & (VAR_4->ipath_guid);

 return FUNC_1(VAR_3, VAR_0,
    "%02x:%02x:%02x:%02x:%02x:%02x:%02x:%02x\n",
    VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3],
    VAR_5[4], VAR_5[5], VAR_5[6], VAR_5[7]);
}
