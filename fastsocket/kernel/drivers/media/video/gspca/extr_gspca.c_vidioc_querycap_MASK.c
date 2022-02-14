
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; scalar_t__ bus_info; scalar_t__ card; scalar_t__ driver; } ;
struct gspca_dev {int usb_lock; TYPE_3__* dev; TYPE_1__* sd_desc; int present; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int idProduct; int idVendor; } ;
struct TYPE_6__ {TYPE_2__ descriptor; int * product; } ;
struct TYPE_4__ {int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,int,int) ;
 int FUNC_4 (char*,int *,int) ;
 int FUNC_5 (TYPE_3__*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_6, void *VAR_7,
      struct v4l2_capability *VAR_8)
{
 struct gspca_dev *VAR_9 = VAR_7;
 int VAR_10;


 if (FUNC_1(&VAR_9->usb_lock))
  return -VAR_2;
 if (!VAR_9->present) {
  VAR_10 = -VAR_1;
  goto out;
 }
 FUNC_4((char *) VAR_8->driver, VAR_9->sd_desc->name,
   sizeof VAR_8->driver);
 if (VAR_9->dev->product != ((void*)0)) {
  FUNC_4((char *) VAR_8->card, VAR_9->dev->product,
   sizeof VAR_8->card);
 } else {
  FUNC_3((char *) VAR_8->card, sizeof VAR_8->card,
   "USB Camera (%04x:%04x)",
   FUNC_0(VAR_9->dev->descriptor.idVendor),
   FUNC_0(VAR_9->dev->descriptor.idProduct));
 }
 FUNC_5(VAR_9->dev, (char *) VAR_8->bus_info,
   sizeof(VAR_8->bus_info));
 VAR_8->version = VAR_0;
 VAR_8->capabilities = VAR_5
     | VAR_4
     | VAR_3;
 VAR_10 = 0;
out:
 FUNC_2(&VAR_9->usb_lock);
 return VAR_10;
}
