
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int m; int e; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_3__ {scalar_t__ (* get_rid ) (struct net_device*,int ,int*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int*) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*,int ,int*,int,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
    struct iw_request_info *VAR_5,
    struct iw_freq *VAR_6, char *VAR_7)
{
 struct hostap_interface *VAR_8;
 local_info_t *VAR_9;
 u16 VAR_10;

 VAR_8 = FUNC_1(VAR_4);
 VAR_9 = VAR_8->local;

 if (VAR_9->func->get_rid(VAR_4, VAR_2, &VAR_10, 2, 1) <
     0)
  return -VAR_0;

 FUNC_0(&VAR_10);
 if (VAR_10 < 1 || VAR_10 > VAR_1)
  return -VAR_0;

 VAR_6->m = VAR_3[VAR_10 - 1] * 100000;
 VAR_6->e = 1;

 return 0;
}
