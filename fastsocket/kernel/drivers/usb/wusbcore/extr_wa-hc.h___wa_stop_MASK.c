
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wahc {TYPE_1__* usb_iface; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wahc*,int ) ;
 int FUNC_1 (struct wahc*,int ,int ) ;
 int FUNC_2 (struct device*,char*,int) ;

__attribute__((used)) static inline int FUNC_3(struct wahc *VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = &VAR_2->usb_iface->dev;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 < 0 && VAR_3 != -VAR_0) {
  FUNC_2(VAR_4, "error commanding HC to stop: %d\n", VAR_3);
  goto out;
 }
 VAR_3 = FUNC_1(VAR_2, VAR_1, 0);
 if (VAR_3 < 0 && VAR_3 != -VAR_0)
  FUNC_2(VAR_4, "error waiting for HC to stop: %d\n", VAR_3);
out:
 return 0;
}
