
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
 int FUNC_0 (struct device*,char*,int ,int,...) ;
 int FUNC_1 (int ,int ,int ,int,int,int ,struct usb_rpipe_descriptor*,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct wahc *VAR_6,
        struct usb_rpipe_descriptor *VAR_7, u16 VAR_8)
{
 ssize_t VAR_9;
 struct device *VAR_10 = &VAR_6->usb_iface->dev;




 VAR_9 = FUNC_1(
  VAR_6->usb_dev, FUNC_2(VAR_6->usb_dev, 0),
  VAR_4,
  VAR_1 | VAR_5 | VAR_3,
  VAR_2<<8, VAR_8, VAR_7, sizeof(*VAR_7),
  1000 );
 if (VAR_9 < 0) {
  FUNC_0(VAR_10, "rpipe %u: get descriptor failed: %d\n",
   VAR_8, (int)VAR_9);
  goto error;
 }
 if (VAR_9 < sizeof(*VAR_7)) {
  FUNC_0(VAR_10, "rpipe %u: got short descriptor "
   "(%zd vs %zd bytes needed)\n",
   VAR_8, VAR_9, sizeof(*VAR_7));
  VAR_9 = -VAR_0;
  goto error;
 }
 VAR_9 = 0;

error:
 return VAR_9;
}
