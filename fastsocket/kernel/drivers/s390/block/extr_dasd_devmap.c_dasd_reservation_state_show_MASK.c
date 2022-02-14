
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {int flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int VAR_2 ;
 struct dasd_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (char*,int ,char*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
        struct device_attribute *VAR_4,
        char *VAR_5)
{
 struct dasd_device *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_1(FUNC_5(VAR_3));
 if (FUNC_0(VAR_6))
  return FUNC_3(VAR_5, VAR_2, "none\n");

 if (FUNC_4(VAR_0, &VAR_6->flags))
  VAR_7 = FUNC_3(VAR_5, VAR_2, "reserved\n");
 else if (FUNC_4(VAR_1, &VAR_6->flags))
  VAR_7 = FUNC_3(VAR_5, VAR_2, "lost\n");
 else
  VAR_7 = FUNC_3(VAR_5, VAR_2, "none\n");
 FUNC_2(VAR_6);
 return VAR_7;
}
