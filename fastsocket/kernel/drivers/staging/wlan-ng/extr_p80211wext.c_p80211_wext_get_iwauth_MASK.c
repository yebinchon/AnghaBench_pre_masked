
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hostwep; } ;
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

 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_6,
      struct iw_request_info *VAR_7,
      union iwreq_data *VAR_8, char *VAR_9)
{
 wlandevice_t *VAR_10 = VAR_6->ml_priv;
 struct iw_param *VAR_11 = &VAR_8->param;
 int VAR_12 = 0;

 FUNC_0("get_iwauth flags[%d]\n", (int)VAR_11->flags & VAR_5);

 switch (VAR_11->flags & VAR_5) {
 case 129:
  VAR_11->value =
      VAR_10->hostwep & VAR_0 ? 1 : 0;
  break;

 case 128:
  VAR_11->value =
      VAR_10->hostwep & VAR_1 ? 1 : 0;
  break;

 case 130:
  VAR_11->value =
      VAR_10->hostwep & VAR_2 ?
      VAR_4 : VAR_3;
  break;

 default:
  break;
 }

 return VAR_12;
}
