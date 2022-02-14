
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusb_dev {int cdid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct device*) ;
 struct wusb_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct wusb_dev*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
         struct device_attribute *VAR_3, char *VAR_4)
{
 ssize_t VAR_5;
 struct wusb_dev *VAR_6;

 VAR_6 = FUNC_3(FUNC_2(VAR_2));
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_4, VAR_1, &VAR_6->cdid);
 FUNC_1(VAR_4, "\n");
 FUNC_4(VAR_6);
 return VAR_5 + 1;
}
