
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_debug_descriptor {int bDebugOutEndpoint; } ;
typedef int dbgp_desc ;
struct TYPE_4__ {int control; } ;
struct TYPE_3__ {int * port_status; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int,int ,char*,int) ;
 int FUNC_1 (int,int,int ,int,int ,struct usb_debug_descriptor*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_17 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (char*,...) ;
 TYPE_2__* VAR_20 ;
 TYPE_1__* VAR_21 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int *) ;

int FUNC_11(void)
{
 int VAR_22;
 struct usb_debug_descriptor VAR_23;
 int VAR_24;
 u32 VAR_25, VAR_26, VAR_27;
 int VAR_28 = VAR_19;
 int VAR_29 = 3;
 int VAR_30 = 1;
 int VAR_31 = 1;

try_port_reset_again:
 VAR_24 = FUNC_3();
 if (VAR_24)
  return VAR_24;


 VAR_24 = FUNC_7(VAR_28);
 if (VAR_24 < 0) {
  VAR_26 = FUNC_9(&VAR_21->port_status[VAR_28 - 1]);
  if (!(VAR_26 & VAR_4) && VAR_31) {



   VAR_31 = 0;
   VAR_27 = FUNC_9(&VAR_21->command);
   VAR_27 &= ~VAR_0;
   FUNC_10(VAR_27, &VAR_21->command);
   VAR_26 = FUNC_9(&VAR_21->port_status[VAR_28 - 1]);
   VAR_26 |= VAR_6;
   FUNC_10(VAR_26, &VAR_21->port_status[VAR_28 - 1]);
   FUNC_4("Trying to force debug port online");
   FUNC_8(50);
   FUNC_2();
   goto try_port_reset_again;
  } else if (VAR_30--) {
   goto try_port_reset_again;
  }
  FUNC_6("No device found in debug port\n");
  return -VAR_2;
 }
 FUNC_4("wait for port done");


 VAR_25 = FUNC_9(&VAR_20->control);
 VAR_25 |= VAR_1;
 FUNC_10(VAR_25, &VAR_20->control);
 VAR_25 = FUNC_9(&VAR_20->control);
 if ((VAR_25 & VAR_1) != VAR_1) {
  FUNC_6("No device in debug port\n");
  FUNC_10(VAR_25 & ~VAR_1, &VAR_20->control);
  return -VAR_3;
 }
 FUNC_4("debug ported enabled");


 VAR_26 = FUNC_9(&VAR_21->port_status[VAR_28 - 1]);
 VAR_26 &= ~VAR_5;
 FUNC_10(VAR_26, &VAR_21->port_status[VAR_28 - 1]);

 FUNC_5(100);

try_again:

 for (VAR_22 = 0; VAR_22 <= 127; VAR_22++) {
  VAR_24 = FUNC_1(VAR_22,
   VAR_9 | VAR_16 | VAR_12,
   VAR_13, (VAR_11 << 8), 0,
   &VAR_23, sizeof(VAR_23));
  if (VAR_24 > 0)
   break;
 }
 if (VAR_22 > 127) {
  FUNC_6("Could not find attached debug device\n");
  goto err;
 }
 if (VAR_24 < 0) {
  FUNC_6("Attached device is not a debug device\n");
  goto err;
 }
 VAR_17 = VAR_23.bDebugOutEndpoint;


 if (VAR_22 != VAR_7) {
  VAR_24 = FUNC_1(VAR_22,
   VAR_10 | VAR_16 | VAR_12,
   VAR_14, VAR_7, 0, ((void*)0), 0);
  if (VAR_24 < 0) {
   FUNC_6("Could not move attached device to %d\n",
    VAR_7);
   goto err;
  }
  VAR_22 = VAR_7;
  FUNC_6("debug device renamed to 127\n");
 }


 VAR_24 = FUNC_1(VAR_7,
  VAR_10 | VAR_16 | VAR_12,
  VAR_15, VAR_8, 0, ((void*)0), 0);
 if (VAR_24 < 0) {
  FUNC_6(" Could not enable the debug device\n");
  goto err;
 }
 FUNC_6("debug interface enabled\n");


 VAR_24 = FUNC_0(VAR_7, VAR_17, " ", 1);
 if (VAR_24 < 0) {
  FUNC_6("dbgp_bulk_write failed: %d\n", VAR_24);
  goto err;
 }
 FUNC_6("small write doned\n");
 VAR_18 = 0;

 return 0;
err:
 if (VAR_29--)
  goto try_again;
 return -VAR_3;
}
