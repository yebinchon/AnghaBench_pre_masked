
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wahc {int usb_dev; TYPE_1__* usb_iface; } ;
struct usb_rpipe_descriptor {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int ,int,...) ;
 int FUNC_1 (int ,int ,int ,int,int,int ,struct usb_rpipe_descriptor*,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct wahc *VAR_7,
        struct usb_rpipe_descriptor *VAR_8, u16 VAR_9)
{
 ssize_t VAR_10;
 struct device *VAR_11 = &VAR_7->usb_iface->dev;




 VAR_10 = FUNC_1(
  VAR_7->usb_dev, FUNC_2(VAR_7->usb_dev, 0),
  VAR_5,
  VAR_2 | VAR_6 | VAR_4,
  VAR_3<<8, VAR_9, VAR_8, sizeof(*VAR_8),
  VAR_1 / 10);
 if (VAR_10 < 0) {
  FUNC_0(VAR_11, "rpipe %u: set descriptor failed: %d\n",
   VAR_9, (int)VAR_10);
  goto error;
 }
 if (VAR_10 < sizeof(*VAR_8)) {
  FUNC_0(VAR_11, "rpipe %u: sent short descriptor "
   "(%zd vs %zd bytes required)\n",
   VAR_9, VAR_10, sizeof(*VAR_8));
  VAR_10 = -VAR_0;
  goto error;
 }
 VAR_10 = 0;

error:
 return VAR_10;

}
