
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_4__ {int name_set; TYPE_1__* func; int name; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_3__ {scalar_t__ (* reset_port ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct hostap_interface* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
     struct iw_request_info *VAR_3,
     struct iw_point *VAR_4, char *VAR_5)
{
 struct hostap_interface *VAR_6;
 local_info_t *VAR_7;

 VAR_6 = FUNC_3(VAR_2);
 VAR_7 = VAR_6->local;

 FUNC_2(VAR_7->name, 0, sizeof(VAR_7->name));
 FUNC_1(VAR_7->name, VAR_5, VAR_4->length);
 VAR_7->name_set = 1;

 if (FUNC_0(VAR_2, VAR_1, VAR_7->name) ||
     VAR_7->func->reset_port(VAR_2))
  return -VAR_0;

 return 0;
}
