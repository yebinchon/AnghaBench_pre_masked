
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct bas_cardstate* bas; } ;
struct cardstate {int dev; int inbuf; TYPE_1__ hw; } ;
struct TYPE_6__ {unsigned long data; int function; scalar_t__ expires; } ;
struct TYPE_5__ {int wLength; scalar_t__ wIndex; scalar_t__ wValue; int bRequest; int bRequestType; } ;
struct bas_cardstate {int rcvbuf_size; TYPE_3__ timer_cmd_in; int urb_cmd_in; int rcvbuf; TYPE_2__ dr_cmd_in; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct bas_cardstate*,int,int) ;
 int FUNC_7 (int ,int ,int ,unsigned char*,int ,int,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct cardstate *VAR_12, int VAR_13)
{
 struct bas_cardstate *VAR_14 = VAR_12->hw.bas;
 int VAR_15;
 int VAR_16;

 FUNC_5(VAR_2, "-------> HD_READ_ATMESSAGE (%d)",
  VAR_14->rcvbuf_size);

 VAR_15 = FUNC_6(VAR_14, VAR_0, 0);
 if (VAR_15 & VAR_0) {
  FUNC_2(VAR_12->dev,
   "could not submit HD_READ_ATMESSAGE: URB busy\n");
  return -VAR_3;
 }

 if (VAR_15 & VAR_1) {
  FUNC_3(VAR_12->dev,
      "HD_READ_ATMESSAGE not submitted, "
      "suspend in progress\n");
  FUNC_6(VAR_14, 0, VAR_0);

  return -VAR_4;
 }

 VAR_14->dr_cmd_in.bRequestType = VAR_8;
 VAR_14->dr_cmd_in.bRequest = VAR_6;
 VAR_14->dr_cmd_in.wValue = 0;
 VAR_14->dr_cmd_in.wIndex = 0;
 VAR_14->dr_cmd_in.wLength = FUNC_1(VAR_14->rcvbuf_size);
 FUNC_7(VAR_14->urb_cmd_in, VAR_14->udev,
        FUNC_8(VAR_14->udev, 0),
        (unsigned char*) & VAR_14->dr_cmd_in,
        VAR_14->rcvbuf, VAR_14->rcvbuf_size,
        VAR_11, VAR_12->inbuf);

 if ((VAR_16 = FUNC_9(VAR_14->urb_cmd_in, VAR_5)) != 0) {
  FUNC_6(VAR_14, 0, VAR_0);
  FUNC_2(VAR_12->dev, "could not submit HD_READ_ATMESSAGE: %s\n",
   FUNC_4(VAR_16));
  return VAR_16;
 }

 if (VAR_13 > 0) {
  FUNC_5(VAR_2, "setting timeout of %d/10 secs", VAR_13);
  VAR_14->timer_cmd_in.expires = VAR_10 + VAR_13 * VAR_7 / 10;
  VAR_14->timer_cmd_in.data = (unsigned long) VAR_12;
  VAR_14->timer_cmd_in.function = VAR_9;
  FUNC_0(&VAR_14->timer_cmd_in);
 }
 return 0;
}
