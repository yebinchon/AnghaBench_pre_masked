
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hostwep; int * wep_keys; int * wep_keylens; } ;
typedef TYPE_1__ wlandevice_t ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
struct TYPE_5__ {TYPE_1__* ml_priv; } ;
typedef TYPE_2__ netdevice_t ;


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
 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(netdevice_t *VAR_10,
    struct iw_request_info *VAR_11,
    struct iw_point *VAR_12, char *VAR_13)
{
 wlandevice_t *VAR_14 = VAR_10->ml_priv;
 int VAR_15 = 0;
 int VAR_16;

 VAR_16 = (VAR_12->flags & VAR_6) - 1;
 VAR_12->flags = 0;

 if (VAR_14->hostwep & VAR_3)
  VAR_12->flags |= VAR_5;
 else
  VAR_12->flags |= VAR_4;

 if (VAR_14->hostwep & VAR_2)
  VAR_12->flags |= VAR_8;
 else
  VAR_12->flags |= VAR_7;

 VAR_16 = (VAR_12->flags & VAR_6) - 1;

 if (VAR_16 == -1)
  VAR_16 = VAR_14->hostwep & VAR_1;

 if ((VAR_16 < 0) || (VAR_16 >= VAR_9)) {
  VAR_15 = -VAR_0;
  goto exit;
 }

 VAR_12->flags |= VAR_16 + 1;


 VAR_12->length = VAR_14->wep_keylens[VAR_16];
 FUNC_0(VAR_13, VAR_14->wep_keys[VAR_16], VAR_12->length);

exit:
 return VAR_15;
}
