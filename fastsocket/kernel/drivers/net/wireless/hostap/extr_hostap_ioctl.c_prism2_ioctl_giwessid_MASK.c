
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
struct hostap_interface {scalar_t__ type; TYPE_2__* local; } ;
typedef int ssid ;
struct TYPE_4__ {scalar_t__ iw_mode; char* essid; TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
typedef int __le16 ;
struct TYPE_3__ {int (* get_rid ) (struct net_device*,int ,char**,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,int ,int) ;
 struct hostap_interface* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct net_device*,int ,char**,int,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6,
     struct iw_request_info *VAR_7,
     struct iw_point *VAR_8, char *VAR_9)
{
 struct hostap_interface *VAR_10;
 local_info_t *VAR_11;
 u16 VAR_12;

 VAR_10 = FUNC_3(VAR_6);
 VAR_11 = VAR_10->local;

 if (VAR_10->type == VAR_2)
  return -VAR_0;

 VAR_8->flags = 1;
 if (VAR_11->iw_mode == VAR_4) {
  VAR_8->length = FUNC_4(VAR_11->essid);
  FUNC_1(VAR_9, VAR_11->essid, VAR_3);
 } else {
  int VAR_13;
  char VAR_14[VAR_5 + 2];
  FUNC_2(VAR_14, 0, sizeof(VAR_14));
  VAR_13 = VAR_11->func->get_rid(VAR_6, VAR_1,
        &VAR_14, VAR_5 + 2, 0);
  VAR_12 = FUNC_0(*(__le16 *) VAR_14);
  if (VAR_13 > VAR_5 + 2 || VAR_13 < 0 || VAR_12 > VAR_5) {
   return -VAR_0;
  }
  VAR_8->length = VAR_12;
  FUNC_1(VAR_9, VAR_14 + 2, VAR_3);
 }

 return 0;
}
