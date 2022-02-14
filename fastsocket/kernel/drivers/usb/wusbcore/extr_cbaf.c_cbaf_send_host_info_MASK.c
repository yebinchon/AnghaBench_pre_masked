
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; } ;
struct wusb_cbaf_host_info {TYPE_1__ HostFriendlyName_hdr; int HostFriendlyName; scalar_t__ LangID; int CHID; } ;
struct cbaf {TYPE_4__* usb_iface; int usb_dev; int host_name; int chid; struct wusb_cbaf_host_info* buffer; } ;
struct TYPE_8__ {TYPE_3__* cur_altsetting; } ;
struct TYPE_6__ {int bInterfaceNumber; } ;
struct TYPE_7__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wusb_cbaf_host_info VAR_5 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (struct wusb_cbaf_host_info*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int,int,int ,struct wusb_cbaf_host_info*,size_t,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct cbaf *VAR_6)
{
 struct wusb_cbaf_host_info *VAR_7;
 size_t VAR_8;
 size_t VAR_9;

 VAR_7 = VAR_6->buffer;
 FUNC_1(VAR_7, 0, sizeof(*VAR_7));
 *VAR_7 = VAR_5;
 VAR_7->CHID = VAR_6->chid;
 VAR_7->LangID = 0;
 FUNC_2(VAR_7->HostFriendlyName, VAR_6->host_name, VAR_1);
 VAR_8 = FUNC_3(VAR_6->host_name);
 VAR_7->HostFriendlyName_hdr.len = FUNC_0(VAR_8);
 VAR_9 = sizeof(*VAR_7) + VAR_8;

 return FUNC_4(VAR_6->usb_dev, FUNC_5(VAR_6->usb_dev, 0),
   VAR_0,
   VAR_2 | VAR_4 | VAR_3,
   0x0101,
   VAR_6->usb_iface->cur_altsetting->desc.bInterfaceNumber,
   VAR_7, VAR_9, 1000 );
}
