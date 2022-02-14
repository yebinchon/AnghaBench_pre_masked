
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sa_family; int sa_data; } ;
struct TYPE_5__ {scalar_t__ flags; scalar_t__ length; } ;
union iwreq_data {TYPE_2__ ap_addr; TYPE_1__ data; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct airo_info {int sem; int jobs; } ;
typedef int status_rid ;
struct TYPE_7__ {int * bssid; } ;
typedef TYPE_3__ StatusRid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct airo_info*,int ,TYPE_3__*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5) {
 struct airo_info *VAR_6 = VAR_5->ml_priv;
 union iwreq_data VAR_7;
 StatusRid VAR_8;

 FUNC_1(VAR_2, &VAR_6->jobs);
 FUNC_0(VAR_6, VAR_3, &VAR_8, sizeof(VAR_8), 0);
 FUNC_3(&VAR_6->sem);
 VAR_7.data.length = 0;
 VAR_7.data.flags = 0;
 FUNC_2(VAR_7.ap_addr.sa_data, VAR_8.bssid[0], VAR_1);
 VAR_7.ap_addr.sa_family = VAR_0;


 FUNC_4(VAR_5, VAR_4, &VAR_7, ((void*)0));
}
