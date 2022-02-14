
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_context {int work; struct hv_device* device_ctx; } ;
struct net_device {int dummy; } ;
struct hv_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct hv_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct net_device_context *VAR_1 = FUNC_2(VAR_0);
 struct hv_device *VAR_2 = VAR_1->device_ctx;
 int VAR_3;

 FUNC_3(VAR_0);


 FUNC_0(&VAR_1->work);
 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 != 0)
  FUNC_1(VAR_0, "unable to close device (ret %d).\n", VAR_3);

 return VAR_3;
}
