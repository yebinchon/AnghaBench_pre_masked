
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device_info {int ring_size; } ;
struct netvsc_device {scalar_t__ nvsp_version; int start_remove; scalar_t__ destroy; } ;
struct net_device_context {struct hv_device* device_ctx; int work; int dwork; } ;
struct net_device {int mtu; } ;
struct hv_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct netvsc_device* FUNC_2 (struct hv_device*) ;
 int FUNC_3 (struct hv_device*,struct net_device*) ;
 struct net_device_context* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_7 (struct hv_device*,struct netvsc_device_info*) ;
 int FUNC_8 (struct hv_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_6, int VAR_7)
{
 struct net_device_context *VAR_8 = FUNC_4(VAR_6);
 struct hv_device *VAR_9 = VAR_8->device_ctx;
 struct netvsc_device *VAR_10 = FUNC_2(VAR_9);
 struct netvsc_device_info VAR_11;
 int VAR_12 = VAR_2;

 if (VAR_10 == ((void*)0) || VAR_10->destroy)
  return -VAR_1;

 if (VAR_10->nvsp_version == VAR_4)
  VAR_12 = VAR_3;

 if (VAR_7 < 68 || VAR_7 > VAR_12)
  return -VAR_0;

 VAR_10->start_remove = 1;
 FUNC_0(&VAR_8->dwork);
 FUNC_1(&VAR_8->work);
 FUNC_5(VAR_6);
 FUNC_8(VAR_9);

 VAR_6->mtu = VAR_7;

 VAR_8->device_ctx = VAR_9;
 FUNC_3(VAR_9, VAR_6);
 VAR_11.ring_size = VAR_5;
 FUNC_7(VAR_9, &VAR_11);
 FUNC_6(VAR_6);

 return 0;
}
