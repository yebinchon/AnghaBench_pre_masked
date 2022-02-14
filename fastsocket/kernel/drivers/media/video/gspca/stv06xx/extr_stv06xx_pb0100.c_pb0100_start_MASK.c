
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {int dummy; } ;
struct usb_host_interface {TYPE_3__* endpoint; } ;
struct cam {TYPE_1__* cam_mode; } ;
struct TYPE_13__ {size_t curr_mode; int alt; int iface; int dev; struct cam cam; } ;
struct sd {TYPE_5__ gspca_dev; TYPE_4__* sensor; int * sensor_priv; } ;
typedef int s32 ;
struct TYPE_12__ {int* max_packet_size; } ;
struct TYPE_10__ {int wMaxPacketSize; } ;
struct TYPE_11__ {TYPE_2__ desc; } ;
struct TYPE_9__ {int priv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (struct sd*,int ,int) ;
 int FUNC_8 (struct sd*,int ,int) ;
 struct usb_host_interface* FUNC_9 (struct usb_interface*,int ) ;
 struct usb_interface* FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct sd *VAR_16)
{
 int VAR_17, VAR_18, VAR_19;
 struct usb_host_interface *VAR_20;
 struct usb_interface *VAR_21;
 struct cam *VAR_22 = &VAR_16->gspca_dev.cam;
 s32 *VAR_23 = VAR_16->sensor_priv;
 u32 VAR_24 = VAR_22->cam_mode[VAR_16->gspca_dev.curr_mode].priv;

 VAR_21 = FUNC_10(VAR_16->gspca_dev.dev, VAR_16->gspca_dev.iface);
 VAR_20 = FUNC_9(VAR_21, VAR_16->gspca_dev.alt);
 VAR_18 = FUNC_2(VAR_20->endpoint[0].desc.wMaxPacketSize);


 VAR_19 = VAR_16->sensor->max_packet_size[VAR_16->gspca_dev.curr_mode];
 if (VAR_18 < VAR_19)
  FUNC_8(VAR_16, VAR_10, FUNC_0(4)|FUNC_0(3)|FUNC_0(1));
 else
  FUNC_8(VAR_16, VAR_10, FUNC_0(5)|FUNC_0(3)|FUNC_0(1));


 if (VAR_24 & VAR_5) {
  FUNC_8(VAR_16, VAR_11, 30);
  FUNC_8(VAR_16, VAR_8, 20);
  FUNC_8(VAR_16, VAR_12, 240 - 1);
  FUNC_8(VAR_16, VAR_9, 320 - 1);
 } else {
  FUNC_8(VAR_16, VAR_11, 8);
  FUNC_8(VAR_16, VAR_8, 4);
  FUNC_8(VAR_16, VAR_12, 288 - 1);
  FUNC_8(VAR_16, VAR_9, 352 - 1);
 }

 if (VAR_24 & VAR_6) {
  FUNC_7(VAR_16, VAR_15, 0x02);
  FUNC_7(VAR_16, VAR_14, 0x06);

  FUNC_7(VAR_16, VAR_13, 0x10);
 } else {
  FUNC_7(VAR_16, VAR_15, 0x01);
  FUNC_7(VAR_16, VAR_14, 0x0a);

  FUNC_7(VAR_16, VAR_13, 0x20);
 }


 FUNC_6(&VAR_16->gspca_dev, VAR_23[VAR_4]);
 FUNC_5(&VAR_16->gspca_dev, VAR_23[VAR_3]);
 FUNC_4(&VAR_16->gspca_dev,
       VAR_23[VAR_1]);
 FUNC_3(&VAR_16->gspca_dev, VAR_23[VAR_0]);

 VAR_17 = FUNC_8(VAR_16, VAR_7, FUNC_0(5)|FUNC_0(3)|FUNC_0(1));
 FUNC_1(VAR_2, "Started stream, status: %d", VAR_17);

 return (VAR_17 < 0) ? VAR_17 : 0;
}
