
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_device_info {int dummy; } ;
struct wlp {int * dev_info; TYPE_2__* rc; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int * FUNC_2 (int,int ) ;

int FUNC_3(struct wlp *VAR_2)
{
 struct device *VAR_3 = &VAR_2->rc->uwb_dev.dev;
 FUNC_0(VAR_2->dev_info != ((void*)0));
 VAR_2->dev_info = FUNC_2(sizeof(struct wlp_device_info), VAR_1);
 if (VAR_2->dev_info == ((void*)0)) {
  FUNC_1(VAR_3, "WLP: Unable to allocate memory for "
   "device information.\n");
  return -VAR_0;
 }
 return 0;
}
