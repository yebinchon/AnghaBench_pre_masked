
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bEventContext; int wEvent; int bEventType; } ;
struct i1480_rceb {TYPE_1__ rceb; } ;
struct i1480 {int (* rc_setup ) (struct i1480*) ;int (* wait_init_done ) (struct i1480*) ;int evt_result; int mac_fw_name; int dev; int mac_fw_name_deprecate; scalar_t__ evt_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i1480*,int ,char*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct i1480*) ;
 int FUNC_4 (struct i1480*) ;
 scalar_t__ FUNC_5 (struct i1480*,TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct i1480*) ;
 int FUNC_8 (struct i1480*) ;

int FUNC_9(struct i1480 *VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;
 struct i1480_rceb *VAR_7 = (void *) VAR_4->evt_buf;

 VAR_5 = FUNC_0(VAR_4, VAR_4->mac_fw_name, "MAC");
 if (VAR_5 == -VAR_1) {
  VAR_5 = FUNC_0(VAR_4, VAR_4->mac_fw_name_deprecate,
      "MAC");
  VAR_6 = 1;
 }
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_6 == 1)
  FUNC_2(VAR_4->dev,
    "WARNING: firmware file name %s is deprecated, "
    "please rename to %s\n",
    VAR_4->mac_fw_name_deprecate, VAR_4->mac_fw_name);
 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 < 0)
  goto error_fw_not_running;
 VAR_5 = VAR_4->rc_setup ? VAR_4->rc_setup(VAR_4) : 0;
 if (VAR_5 < 0) {
  FUNC_1(VAR_4->dev, "Cannot setup after MAC fw upload: %d\n",
   VAR_5);
  goto error_setup;
 }
 VAR_5 = VAR_4->wait_init_done(VAR_4);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4->dev, "MAC fw '%s': Initialization timed out "
   "(%d)\n", VAR_4->mac_fw_name, VAR_5);
  goto error_init_timeout;
 }

 if (VAR_4->evt_result != sizeof(*VAR_7)) {
  FUNC_1(VAR_4->dev, "MAC fw '%s': initialization event returns "
   "wrong size (%zu bytes vs %zu needed)\n",
   VAR_4->mac_fw_name, VAR_4->evt_result, sizeof(*VAR_7));
  goto error_size;
 }
 VAR_5 = -VAR_0;
 if (FUNC_5(VAR_4, &VAR_7->rceb, ((void*)0), 0, VAR_2,
        VAR_3) < 0) {
  FUNC_1(VAR_4->dev, "wrong initialization event 0x%02x/%04x/%02x "
   "received; expected 0x%02x/%04x/00\n",
   VAR_7->rceb.bEventType, FUNC_6(VAR_7->rceb.wEvent),
   VAR_7->rceb.bEventContext, VAR_2,
   VAR_3);
  goto error_init_timeout;
 }
 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5 < 0)
  FUNC_1(VAR_4->dev, "MAC fw '%s': MBOA reset failed (%d)\n",
   VAR_4->mac_fw_name, VAR_5);
error_fw_not_running:
error_init_timeout:
error_size:
error_setup:
 return VAR_5;
}
