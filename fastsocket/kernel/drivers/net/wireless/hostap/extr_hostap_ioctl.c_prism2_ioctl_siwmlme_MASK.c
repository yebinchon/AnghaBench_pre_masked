
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int dummy; } ;
struct TYPE_2__ {int sa_data; } ;
struct iw_mlme {int cmd; TYPE_1__ addr; int reason_code; } ;
struct hostap_interface {int * local; } ;
typedef int local_info_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
    struct iw_request_info *VAR_4,
    struct iw_point *VAR_5, char *VAR_6)
{
 struct hostap_interface *VAR_7 = FUNC_1(VAR_3);
 local_info_t *VAR_8 = VAR_7->local;
 struct iw_mlme *VAR_9 = (struct iw_mlme *) VAR_6;
 __le16 VAR_10;

 VAR_10 = FUNC_0(VAR_9->reason_code);

 switch (VAR_9->cmd) {
 case 129:
  return FUNC_2(VAR_8, VAR_9->addr.sa_data,
         VAR_1,
         (u8 *) &VAR_10, 2);
 case 128:
  return FUNC_2(VAR_8, VAR_9->addr.sa_data,
         VAR_2,
         (u8 *) &VAR_10, 2);
 default:
  return -VAR_0;
 }
}
