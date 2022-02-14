
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wdm_device {scalar_t__ werr; TYPE_1__* intf; int flags; int wait; } ;
struct file {struct wdm_device* private_data; } ;
typedef int fl_owner_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, fl_owner_t VAR_2)
{
 struct wdm_device *VAR_3 = VAR_1->private_data;

 FUNC_2(VAR_3->wait, !FUNC_1(VAR_0, &VAR_3->flags));
 if (VAR_3->werr < 0)
  FUNC_0(&VAR_3->intf->dev, "Error in flush path: %d\n",
   VAR_3->werr);

 return VAR_3->werr;
}
