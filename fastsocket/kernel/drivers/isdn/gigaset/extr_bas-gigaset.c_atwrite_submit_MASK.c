
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct bas_cardstate* bas; } ;
struct cardstate {int dev; TYPE_1__ hw; } ;
struct TYPE_6__ {unsigned long data; int function; scalar_t__ expires; } ;
struct TYPE_5__ {int wLength; scalar_t__ wIndex; scalar_t__ wValue; int bRequest; int bRequestType; } ;
struct bas_cardstate {TYPE_3__ timer_atrdy; int urb_cmd_out; TYPE_2__ dr_cmd_out; int udev; } ;


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
 int FUNC_0 (TYPE_3__*) ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct bas_cardstate*,int,int) ;
 int FUNC_7 (int ,int ,int ,unsigned char*,unsigned char*,int,int ,struct cardstate*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_10(struct cardstate *VAR_14, unsigned char *VAR_15, int VAR_16)
{
 struct bas_cardstate *VAR_17 = VAR_14->hw.bas;
 int VAR_18;

 FUNC_4(VAR_5, "-------> HD_WRITE_ATMESSAGE (%d)", VAR_16);

 if (FUNC_6(VAR_17, VAR_3, 0) & VAR_3) {
  FUNC_2(VAR_14->dev,
   "could not submit HD_WRITE_ATMESSAGE: URB busy\n");
  return -VAR_6;
 }

 VAR_17->dr_cmd_out.bRequestType = VAR_10;
 VAR_17->dr_cmd_out.bRequest = VAR_8;
 VAR_17->dr_cmd_out.wValue = 0;
 VAR_17->dr_cmd_out.wIndex = 0;
 VAR_17->dr_cmd_out.wLength = FUNC_1(VAR_16);
 FUNC_7(VAR_17->urb_cmd_out, VAR_17->udev,
        FUNC_8(VAR_17->udev, 0),
        (unsigned char*) &VAR_17->dr_cmd_out, VAR_15, VAR_16,
        VAR_13, VAR_14);
 VAR_18 = FUNC_9(VAR_17->urb_cmd_out, VAR_7);
 if (FUNC_5(VAR_18)) {
  FUNC_6(VAR_17, 0, VAR_3);
  FUNC_2(VAR_14->dev, "could not submit HD_WRITE_ATMESSAGE: %s\n",
   FUNC_3(VAR_18));
  return VAR_18;
 }


 if (!(FUNC_6(VAR_17, VAR_2, VAR_1) & VAR_2)) {
  FUNC_4(VAR_4, "setting ATREADY timeout of %d/10 secs",
   VAR_0);
  VAR_17->timer_atrdy.expires = VAR_12 + VAR_0 * VAR_9 / 10;
  VAR_17->timer_atrdy.data = (unsigned long) VAR_14;
  VAR_17->timer_atrdy.function = VAR_11;
  FUNC_0(&VAR_17->timer_atrdy);
 }
 return 0;
}
