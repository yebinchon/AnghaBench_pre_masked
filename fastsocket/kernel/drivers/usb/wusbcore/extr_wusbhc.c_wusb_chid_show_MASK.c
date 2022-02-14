
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusbhc {TYPE_1__* wuie_host_info; } ;
struct wusb_ckhdid {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct wusb_ckhdid CHID; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct wusb_ckhdid const*) ;
 int FUNC_1 (char*,char*) ;
 struct wusbhc* FUNC_2 (struct device*) ;
 struct wusb_ckhdid VAR_1 ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
         struct device_attribute *VAR_3, char *VAR_4)
{
 struct wusbhc *VAR_5 = FUNC_2(VAR_2);
 const struct wusb_ckhdid *VAR_6;
 ssize_t VAR_7 = 0;

 if (VAR_5->wuie_host_info != ((void*)0))
  VAR_6 = &VAR_5->wuie_host_info->CHID;
 else
  VAR_6 = &VAR_1;

 VAR_7 += FUNC_0(VAR_4, VAR_0, VAR_6);
 VAR_7 += FUNC_1(VAR_4 + VAR_7, "\n");

 return VAR_7;
}
