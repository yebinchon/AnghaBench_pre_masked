
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wusb_cbaf_cc_data {int CDID; int CHID; int BandGroups; int CK; } ;
struct device {int dummy; } ;
struct cbaf {char* host_band_groups; TYPE_3__* usb_iface; int usb_dev; int ck; int cdid; int chid; struct wusb_cbaf_cc_data* buffer; } ;
typedef int pr_cdid ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; struct device dev; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wusb_cbaf_cc_data VAR_5 ;
 int FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (int ,int ,int ,int,int,int ,struct wusb_cbaf_cc_data*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct cbaf *VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = &VAR_6->usb_iface->dev;
 struct wusb_cbaf_cc_data *VAR_9;
 char VAR_10[VAR_4];

 VAR_9 = VAR_6->buffer;
 *VAR_9 = VAR_5;
 VAR_9->CHID = VAR_6->chid;
 VAR_9->CDID = VAR_6->cdid;
 VAR_9->CK = VAR_6->ck;
 VAR_9->BandGroups = FUNC_1(VAR_6->host_band_groups);

 FUNC_2(VAR_8, "Trying to upload CC:\n");
 FUNC_0(VAR_10, sizeof(VAR_10), &VAR_9->CHID);
 FUNC_2(VAR_8, "  CHID       %s\n", VAR_10);
 FUNC_0(VAR_10, sizeof(VAR_10), &VAR_9->CDID);
 FUNC_2(VAR_8, "  CDID       %s\n", VAR_10);
 FUNC_2(VAR_8, "  Bandgroups 0x%04x\n", VAR_6->host_band_groups);

 VAR_7 = FUNC_3(
  VAR_6->usb_dev, FUNC_4(VAR_6->usb_dev, 0),
  VAR_0,
  VAR_1 | VAR_3 | VAR_2,
  0x0201, VAR_6->usb_iface->cur_altsetting->desc.bInterfaceNumber,
  VAR_9, sizeof(*VAR_9), 1000 );

 return VAR_7;
}
