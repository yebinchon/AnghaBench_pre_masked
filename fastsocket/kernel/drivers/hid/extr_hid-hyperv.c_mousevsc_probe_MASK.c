
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; int product; int vendor; } ;
struct mousevsc_dev {int* report_desc; int connected; int init_complete; struct hid_device* hid_device; TYPE_1__ hid_dev_info; } ;
struct hv_vmbus_device_id {int dummy; } ;
struct hv_device {int channel; } ;
struct hid_device {int name; int version; int product; int vendor; int bus; int * driver; int * ll_driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 struct hid_device* FUNC_3 () ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*,char*) ;
 int FUNC_6 (struct hid_device*,int) ;
 int FUNC_7 (struct hid_device*) ;
 int FUNC_8 (struct hid_device*,struct hv_device*) ;
 struct mousevsc_dev* FUNC_9 (struct hv_device*) ;
 int FUNC_10 (struct hv_device*) ;
 int FUNC_11 (struct mousevsc_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int ,char*,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ,int *,int ,int ,struct hv_device*) ;

__attribute__((used)) static int FUNC_15(struct hv_device *VAR_9,
   const struct hv_vmbus_device_id *VAR_10)
{
 int VAR_11;
 struct mousevsc_dev *VAR_12;
 struct hid_device *VAR_13;

 VAR_12 = FUNC_9(VAR_9);

 if (!VAR_12)
  return -VAR_1;

 VAR_11 = FUNC_14(VAR_9->channel,
  VAR_5,
  VAR_4,
  ((void*)0),
  0,
  VAR_8,
  VAR_9
  );

 if (VAR_11)
  goto probe_err0;

 VAR_11 = FUNC_10(VAR_9);

 if (VAR_11)
  goto probe_err1;


 if (VAR_12->report_desc[14] == 0x25)
  VAR_12->report_desc[14] = 0x29;

 VAR_13 = FUNC_3();
 if (FUNC_0(VAR_13)) {
  VAR_11 = FUNC_1(VAR_13);
  goto probe_err1;
 }

 VAR_13->ll_driver = &VAR_7;
 VAR_13->driver = &VAR_6;
 VAR_13->bus = VAR_0;
 VAR_13->vendor = VAR_12->hid_dev_info.vendor;
 VAR_13->product = VAR_12->hid_dev_info.product;
 VAR_13->version = VAR_12->hid_dev_info.version;
 VAR_12->hid_device = VAR_13;

 FUNC_12(VAR_13->name, "%s", "Microsoft Vmbus HID-compliant Mouse");

 FUNC_8(VAR_13, VAR_9);

 VAR_11 = FUNC_2(VAR_13);
 if (VAR_11)
  goto probe_err1;


 VAR_11 = FUNC_7(VAR_13);
 if (VAR_11) {
  FUNC_5(VAR_13, "parse failed\n");
  goto probe_err2;
 }

 VAR_11 = FUNC_6(VAR_13, VAR_3 | VAR_2);

 if (VAR_11) {
  FUNC_5(VAR_13, "hw start failed\n");
  goto probe_err2;
 }

 VAR_12->connected = 1;
 VAR_12->init_complete = 1;

 return VAR_11;

probe_err2:
 FUNC_4(VAR_13);

probe_err1:
 FUNC_13(VAR_9->channel);

probe_err0:
 FUNC_11(VAR_12);

 return VAR_11;
}
