
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct iw_scan_req {scalar_t__ essid_len; scalar_t__* essid; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; int flags; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct TYPE_2__ {scalar_t__ iw_mode; scalar_t__ sta_fw_ver; int scan_timestamp; int dev_enabled; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int VAR_6 ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,scalar_t__*,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7,
    struct iw_request_info *VAR_8,
    struct iw_point *VAR_9, char *VAR_10)
{
 struct hostap_interface *VAR_11;
 local_info_t *VAR_12;
 int VAR_13;
 u8 *VAR_14 = ((void*)0), VAR_15 = 0;
 struct iw_scan_req *VAR_16 = (struct iw_scan_req *) VAR_10;

 VAR_11 = FUNC_1(VAR_7);
 VAR_12 = VAR_11->local;

 if (VAR_9->length < sizeof(struct iw_scan_req))
  VAR_16 = ((void*)0);

 if (VAR_12->iw_mode == VAR_4) {



  VAR_9->length = 0;
  return 0;
 }

 if (!VAR_12->dev_enabled)
  return -VAR_0;

 if (VAR_16 && VAR_9->flags & VAR_5) {
  VAR_14 = VAR_16->essid;
  VAR_15 = VAR_16->essid_len;

  if (VAR_15 &&
      ((VAR_12->iw_mode != VAR_3 &&
        VAR_12->iw_mode != VAR_2) ||
       (VAR_12->sta_fw_ver < FUNC_0(1,3,1))))
   return -VAR_1;
 }

 if (VAR_12->sta_fw_ver >= FUNC_0(1,3,1))
  VAR_13 = FUNC_2(VAR_7, VAR_14, VAR_15);
 else
  VAR_13 = FUNC_3(VAR_7);

 if (VAR_13 == 0)
  VAR_12->scan_timestamp = VAR_6;



 return VAR_13;
}
