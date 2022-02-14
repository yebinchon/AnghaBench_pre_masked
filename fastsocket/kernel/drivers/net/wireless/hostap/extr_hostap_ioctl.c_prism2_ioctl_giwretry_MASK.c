
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; scalar_t__ disabled; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_4__ {int manual_retry_count; TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
typedef scalar_t__ __le16 ;
struct TYPE_3__ {scalar_t__ (* get_rid ) (struct net_device*,int ,scalar_t__*,int,int) ;} ;


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
 int FUNC_0 (scalar_t__) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*,int ,scalar_t__*,int,int) ;
 scalar_t__ FUNC_3 (struct net_device*,int ,scalar_t__*,int,int) ;
 scalar_t__ FUNC_4 (struct net_device*,int ,scalar_t__*,int,int) ;
 scalar_t__ FUNC_5 (struct net_device*,int ,scalar_t__*,int,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_10,
     struct iw_request_info *VAR_11,
     struct iw_param *VAR_12, char *VAR_13)
{
 struct hostap_interface *VAR_14;
 local_info_t *VAR_15;
 __le16 VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_14 = FUNC_1(VAR_10);
 VAR_15 = VAR_14->local;

 if (VAR_15->func->get_rid(VAR_10, VAR_4, &VAR_16,
     2, 1) < 0 ||
     VAR_15->func->get_rid(VAR_10, VAR_2, &VAR_17,
     2, 1) < 0 ||
     VAR_15->func->get_rid(VAR_10, VAR_3,
     &VAR_18, 2, 1) < 0)
  return -VAR_0;

 VAR_12->disabled = 0;

 if ((VAR_12->flags & VAR_9) == VAR_5) {
  VAR_12->flags = VAR_5;
  VAR_12->value = FUNC_0(VAR_18) * 1024;
 } else {
  if (VAR_15->manual_retry_count >= 0) {
   VAR_12->flags = VAR_6;
   if (VAR_15->func->get_rid(VAR_10,
       VAR_1,
       &VAR_19, 2, 1) >= 0)
    VAR_12->value = FUNC_0(VAR_19);
   else
    VAR_12->value = VAR_15->manual_retry_count;
  } else if ((VAR_12->flags & VAR_7)) {
   VAR_12->flags = VAR_6 | VAR_7;
   VAR_12->value = FUNC_0(VAR_17);
  } else {
   VAR_12->flags = VAR_6;
   VAR_12->value = FUNC_0(VAR_16);
   if (VAR_16 != VAR_17)
    VAR_12->flags |= VAR_8;
  }
 }
 return 0;
}
