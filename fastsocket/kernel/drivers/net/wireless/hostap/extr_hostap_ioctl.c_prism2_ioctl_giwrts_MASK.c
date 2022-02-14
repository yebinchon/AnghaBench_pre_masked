
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; int disabled; int fixed; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
typedef int __le16 ;
struct TYPE_3__ {scalar_t__ (* get_rid ) (struct net_device*,int ,int *,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*,int ,int *,int,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
          struct iw_request_info *VAR_3,
          struct iw_param *VAR_4, char *VAR_5)
{
 struct hostap_interface *VAR_6;
 local_info_t *VAR_7;
 __le16 VAR_8;

 VAR_6 = FUNC_1(VAR_2);
 VAR_7 = VAR_6->local;

 if (VAR_7->func->get_rid(VAR_2, VAR_1, &VAR_8, 2, 1) <
     0)
  return -VAR_0;

 VAR_4->value = FUNC_0(VAR_8);
 VAR_4->disabled = (VAR_4->value == 2347);
 VAR_4->fixed = 1;

 return 0;
}
