
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct usbnet {TYPE_3__* net; TYPE_2__* udev; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int devpath; TYPE_1__* bus; } ;
struct TYPE_4__ {int bus_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct usbnet*,char*,char,char*) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (struct usbnet*,int) ;
 int FUNC_7 (struct usbnet*,int) ;
 int FUNC_8 (struct usbnet*,int ,int*) ;
 int FUNC_9 (struct usbnet*,int ,int) ;
 scalar_t__ FUNC_10 (struct usbnet*) ;

__attribute__((used)) static int FUNC_11(struct usbnet *VAR_10)
{
 u16 VAR_11, VAR_12, VAR_13;
 u16 *VAR_14 = FUNC_5(sizeof (u16), VAR_1);
 int VAR_15;

 if (!VAR_14)
  return -VAR_0;



 if ((VAR_15 = FUNC_8(VAR_10, VAR_3, VAR_14)) < 0) {
  FUNC_2("can't read %s-%s status: %d",
   VAR_10->udev->bus->bus_name, VAR_10->udev->devpath, VAR_15);
  goto done;
 }
 VAR_12 = *VAR_14;
 FUNC_6(VAR_10, VAR_12);

 if ((VAR_15 = FUNC_8(VAR_10, VAR_5, VAR_14)) < 0) {
  FUNC_2("can't read USBCTL, %d", VAR_15);
  goto done;
 }
 VAR_11 = *VAR_14;
 FUNC_7(VAR_10, VAR_11);

 FUNC_9(VAR_10, VAR_5,
   VAR_9 | VAR_8);

 if ((VAR_15 = FUNC_8(VAR_10, VAR_4, VAR_14)) < 0) {
  FUNC_2("can't read TTL, %d", VAR_15);
  goto done;
 }
 VAR_13 = *VAR_14;


 FUNC_9(VAR_10, VAR_4,
   FUNC_0(VAR_2, FUNC_1(VAR_13)) );
 FUNC_2("%s: assigned TTL, %d ms", VAR_10->net->name, VAR_2);

 if (FUNC_10(VAR_10))
  FUNC_3(VAR_10, "port %c, peer %sconnected",
   (VAR_12 & VAR_7) ? 'A' : 'B',
   (VAR_12 & VAR_6) ? "" : "dis"
   );
 VAR_15 = 0;

done:
 FUNC_4(VAR_14);
 return VAR_15;
}
