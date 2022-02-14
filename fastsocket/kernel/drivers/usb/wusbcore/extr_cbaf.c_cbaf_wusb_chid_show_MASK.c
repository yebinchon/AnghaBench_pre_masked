
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cbaf {int chid; } ;
typedef int ssize_t ;
typedef int pr_chid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 struct cbaf* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
     struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct usb_interface *VAR_5 = FUNC_2(VAR_2);
 struct cbaf *VAR_6 = FUNC_3(VAR_5);
 char VAR_7[VAR_1];

 FUNC_0(VAR_7, sizeof(VAR_7), &VAR_6->chid);
 return FUNC_1(VAR_4, VAR_0, "%s\n", VAR_7);
}
