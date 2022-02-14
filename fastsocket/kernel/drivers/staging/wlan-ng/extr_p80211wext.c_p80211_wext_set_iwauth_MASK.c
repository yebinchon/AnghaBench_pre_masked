
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hostwep; } ;
typedef TYPE_1__ wlandevice_t ;
struct iw_param {int flags; int value; } ;
union iwreq_data {struct iw_param param; } ;
struct net_device {TYPE_1__* ml_priv; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_9,
      struct iw_request_info *VAR_10,
      union iwreq_data *VAR_11, char *VAR_12)
{
 wlandevice_t *VAR_13 = VAR_9->ml_priv;
 struct iw_param *VAR_14 = &VAR_11->param;
 int VAR_15 = 0;

 FUNC_1("set_iwauth flags[%d]\n", (int)VAR_14->flags & VAR_6);

 switch (VAR_14->flags & VAR_6) {
 case 129:
  FUNC_1("drop_unencrypted %d\n", VAR_14->value);
  if (VAR_14->value)
   VAR_15 =
       FUNC_0(VAR_13,
       VAR_0,
       VAR_8);
  else
   VAR_15 =
       FUNC_0(VAR_13,
       VAR_0,
       VAR_7);
  break;

 case 128:
  FUNC_1("privacy invoked %d\n", VAR_14->value);
  if (VAR_14->value)
   VAR_15 =
       FUNC_0(VAR_13,
       VAR_1,
       VAR_8);
  else
   VAR_15 =
       FUNC_0(VAR_13,
       VAR_1,
       VAR_7);

  break;

 case 130:
  if (VAR_14->value & VAR_4) {
   FUNC_1("set open_system\n");
   VAR_13->hostwep &= ~VAR_3;
  } else if (VAR_14->value & VAR_5) {
   FUNC_1("set shared key\n");
   VAR_13->hostwep |= VAR_3;
  } else {

   FUNC_1("unknown AUTH_ALG (%d)\n", VAR_14->value);
   VAR_15 = -VAR_2;
  }
  break;

 default:
  break;
 }

 return VAR_15;
}
