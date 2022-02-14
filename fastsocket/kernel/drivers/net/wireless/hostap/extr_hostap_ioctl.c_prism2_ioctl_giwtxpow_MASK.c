
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int disabled; int fixed; int value; int flags; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_4__ {scalar_t__ txpower_type; int txpower; TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_3__ {scalar_t__ (* cmd ) (struct net_device*,int ,int ,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct hostap_interface* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct net_device*,int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7,
     struct iw_request_info *VAR_8,
     struct iw_param *VAR_9, char *VAR_10)
{
 return -VAR_0;

}
