
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct dvb_usb_device_properties {int dummy; } ;
struct TYPE_12__ {char* firmware; TYPE_1__* adapter; int rc_key_map_size; int rc_key_map; int * devices; } ;
struct TYPE_11__ {int frontend_attach; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct usb_interface*,TYPE_2__*,int ,int *,int ) ;
 TYPE_2__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 TYPE_2__* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_13,
  const struct usb_device_id *VAR_14)
{

 VAR_9 = FUNC_2(sizeof(struct dvb_usb_device_properties), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_3(VAR_9, &VAR_12,
   sizeof(struct dvb_usb_device_properties));

 VAR_9->firmware = "dvb-usb-p7500.fw";
 VAR_9->devices[0] = VAR_5;
 VAR_9->rc_key_map = VAR_11;
 VAR_9->rc_key_map_size = FUNC_0(VAR_11);
 VAR_9->adapter->frontend_attach = VAR_10;

 if (0 == FUNC_1(VAR_13, &VAR_6,
   VAR_3, ((void*)0), VAR_4) ||
     0 == FUNC_1(VAR_13, &VAR_7,
   VAR_3, ((void*)0), VAR_4) ||
     0 == FUNC_1(VAR_13, &VAR_8,
   VAR_3, ((void*)0), VAR_4) ||
     0 == FUNC_1(VAR_13, &VAR_12,
   VAR_3, ((void*)0), VAR_4) ||
     0 == FUNC_1(VAR_13, VAR_9,
   VAR_3, ((void*)0), VAR_4))
  return 0;

 return -VAR_0;
}
